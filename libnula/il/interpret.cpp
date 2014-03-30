#include "nula.h"
#include "il/opcodes.h"


namespace nula {



#define PUSH(V)	  *sp++ = (V)
#define PUSHA(V)  (sp++)->o = (V)
#define PUSHI(V)  (sp++)->i = (V)
#define PUSHF(V)  (sp++)->f = (V)

#define POP()     (--sp)
#define POPA()    ((--sp)->o)
#define POPI()    ((int) (--sp)->i) // cast since it may be promoted
#define POPF()    ((double) (--sp)->f)

#define LOADA(I)  (sp++)->o = locals[I].o
#define LOADI(I)  (sp++)->i = locals[I].i
#define LOADF(I)  (sp++)->f = locals[I].f

#define STOREA(I) locals[I].o = (--sp)->o
#define STOREI(I) locals[I].i = (--sp)->i
#define STOREF(I) locals[I].f = (--sp)->f

#define PEEKI(I)  (locals+(I))->i
#define PEEKA(I)  (locals+(I))->o

#define POKEI(I,V)  ((locals+(I))->i = (V))


#define BINOPI(OP) { \
   int value2 = POPI(); \
   int value1 = POPI(); \
   PUSHI(value1 OP value2); \
}

#define BINOPF(OP) { \
   double value2 = POPF(); \
   double value1 = POPF(); \
   PUSHF(value1 OP value2); \
}

static inline int get1s(unsigned char* loc) {
  return *(signed char*)loc;
}

static inline int get1u(unsigned char* loc) {
  return *loc;
}

static inline int get2s(unsigned char* loc) {
  return (((int)*(signed char*)loc) << 8) | ((int)*(loc+1));
}

static inline int get2u(unsigned char* loc) {
  return (((int)(*loc)) << 8) | ((int)*(loc+1));
}

static int get4(unsigned char* loc) {
  return (((int)(loc[0])) << 24) 
       | (((int)(loc[1])) << 16) 
       | (((int)(loc[2])) << 8) 
       | (((int)(loc[3])) << 0);
}

#define NEXT_INSN	*pc++; goto next_pc

extern word *gp_allocation_stack;

word NULA_FAST_DECL Execute(Object *thisp, const Frame& exec_frame )
{
	unsigned char *pc;
	word *sp, *locals;

	pc = (unsigned char *)exec_frame.ncode;

	sp = (word *)gp_allocation_stack;
	locals = ((word *)gp_allocation_stack + exec_frame.max_stack + exec_frame.max_locals);

	try {
next_pc:
		switch( get1u(pc) ) {
			case insn_nop:
				NEXT_INSN;


			case insn_iadd:
				BINOPI( + );
				NEXT_INSN;


			case insn_isub:
				BINOPI( - );
				NEXT_INSN;


			case insn_imul:
				BINOPI( * );
				NEXT_INSN;


			case insn_idiv:
				BINOPI( / );
				NEXT_INSN;


			case insn_irem:
				BINOPI( % );
				NEXT_INSN;


			case insn_ixor:
				BINOPI( ^ );
				NEXT_INSN;


			case insn_ior:
				BINOPI( | );
				NEXT_INSN;


			case insn_iand:
				BINOPI( & );
				NEXT_INSN;


			case insn_ineg:
				PUSHI(-POPI());
				NEXT_INSN;


			case insn_inot:
				PUSHI(!POPI());
				NEXT_INSN;

			case insn_ishl: {
				int shift = (POPI() & 0x1f);
				PUSHI(POPI() << shift);
				NEXT_INSN; }

			case insn_ishr: {
				int shift = (POPI() & 0x1f);
				PUSHI(POPI() >> shift);
				NEXT_INSN; }


			case insn_i2f:
				PUSHF(POPI());
				NEXT_INSN;


			case insn_i2s:
				PUSHA(new String(POPI()));
				NEXT_INSN;


			case insn_i2o:
				PUSHA(new Num(POPI()));
				NEXT_INSN;


			case insn_fadd:
				BINOPF( + );
				NEXT_INSN;


			case insn_fsub:
				BINOPF( - );
				NEXT_INSN;


			case insn_fmul:
				BINOPF( * );
				NEXT_INSN;


			case insn_fdiv:
				BINOPF( / );
				NEXT_INSN;


			case insn_fneg:
				PUSHF(-POPF());
				NEXT_INSN;
			
			case insn_fnot:
				PUSHI(!POPF());
				NEXT_INSN;


			case insn_f2i:
				PUSHI(POPF());
				NEXT_INSN;


			case insn_f2s:
				PUSHA(new String(POPF()));
				NEXT_INSN;


			case insn_f2o:
				PUSHA(new Num(POPF()));
				NEXT_INSN;


			case insn_o2f:
				PUSHF( ValueToFloat( POPA() ) );
				NEXT_INSN;

			case insn_o2i:
				PUSHI( ValueToInteger( POPA() ) );
				NEXT_INSN;

			case insn_o2s:
				PUSHA( ObjectToString(POPA()) );
				NEXT_INSN;

			case insn_iload:
				LOADI( get1u(pc) );
				NEXT_INSN;


			case insn_istore:
				STOREI( get1u(pc) );
				NEXT_INSN;


			case insn_fload:
				LOADF( get1u(pc) );
				NEXT_INSN;


			case insn_fstore:
				STOREF( get1u(pc) );
				NEXT_INSN;


			case insn_aload:
				LOADA( get1u(pc) );
				NEXT_INSN;


			case insn_astore:
				STOREA( get1u(pc) );
				NEXT_INSN;


			case insn_iaload: {
				int i1 = POPI();
				Object *arr = POPA();
				PUSHI( arr->GetElementI(i1) ); 
				} NEXT_INSN;


			case insn_iastore: {
				int i1 = POPI();
				Object *arr = POPA();
				arr->SetElement(i1, POPI());
				} NEXT_INSN;


			case insn_faload: {
				int i1 = POPI();
				Object *arr = POPA();
				PUSHF( arr->GetElementD(i1) ); 
				} NEXT_INSN;


			case insn_fastore: {
				int i1 = POPI();
				Object *arr = POPA();
				arr->SetElement(i1, POPF());
				} NEXT_INSN;


			case insn_aaload: {
				int i1 = POPI();
				Object *arr = POPA();
				PUSHA( arr->GetElementA(i1) ); 
				} NEXT_INSN;


			case insn_aastore: {
				int i1 = POPI();
				Object *arr = POPA();
				arr->SetElement(i1, POPA());
				} NEXT_INSN;


			case insn_putfield: {
				Object *o = POPA();
				o->SetProperty( exec_frame.meth->defining_class, *POP(), *POP() );
				} NEXT_INSN;


			case insn_getfield: {
				Object *o = POPA();
				PUSH( o->GetProperty( exec_frame.meth->defining_class, *POP() ) );
				} NEXT_INSN;


			case insn_putstatic: {
				i::Type *type = POP()->klass;
				type->SetProperty( exec_frame.meth->defining_class, *POP(), *POP() );
				} NEXT_INSN;


			case insn_getstatic: {
				i::Type *type = POP()->klass;
				PUSH( type->GetProperty( exec_frame.meth->defining_class, *POP() ) );
				} NEXT_INSN;


			case insn_invokestatic: {
				Object *klass = POPA();
				int index, argc;
				i::Method *method;

				index = get2u(pc);
				pc+=2;
				argc = get2u(pc);
				pc+=2;
				
				if((method = (i::Method *)ResolveEntry(exec_frame.meth->defining_class, index)) == NULL ) {
					// TODO: method not found
				}

				PUSH( Execute(NULL, Frame(method, sp, (Frame *)&exec_frame)) );

				gp_allocation_stack -= argc;
				} NEXT_INSN;

			case insn_invokespecial: {
				Object *klass = POPA();
				int index, argc;
				i::Method *method;

				index = get2u(pc);
				pc+=2;
				argc = get2u(pc);
				pc+=2;
				
				if((method = (i::Method *)ResolveEntry(exec_frame.meth->defining_class, index)) == NULL ) {
					// TODO: method not found
				}

				PUSH( ((i::static_method_signature)method->ncode)( Arguments(argc, gp_allocation_stack) ) );

				gp_allocation_stack -= argc;
				} NEXT_INSN;

			case insn_push:
				*gp_allocation_stack++ = *POP();
				NEXT_INSN;

			case insn_invokevirtual: {
				Object *object = POPA();
				int index, argc;
				i::Method *method;

				index = get2u(pc);
				pc+=2;
				argc = get2u(pc);
				pc+=2;
				
				if( object == NULL ) {
					// TODO: throw null exception
				}
				
				if( index < 0 || index > object->get_class()->get_max_vfptr()) {
					// TODO: method not found
				}
				method = object->get_vfptr()[index];

				PUSH( Execute(object, Frame(method, sp, (Frame *)&exec_frame)) );

				gp_allocation_stack -= argc;

				} NEXT_INSN;

			case insn_invokenative: {
				Object *object = POPA();
				int index, argc;
				i::Method *method;

				index = get2u(pc);
				pc+=2;
				argc = get2u(pc);
				pc+=2;
				
				if( object == NULL ) {
					// TODO: throw null exception
				}
				
				if( index < 0 || index > object->get_class()->get_max_vfptr()) {
					// TODO: method not found
				}
				method = object->get_vfptr()[index];

				PUSH( ((i::method_signature)method->ncode)(object, Arguments(argc, gp_allocation_stack)));

				gp_allocation_stack -= argc;

				} NEXT_INSN;


			case insn_new: {
				i::Type *found;
				int index = get2u(pc);
				pc+=2;

				if((found = (i::Type *)ResolveEntry(exec_frame.meth->defining_class, index)) == NULL) {
					// TODO: Class not found.
				}
				
				PUSHA( new Object( found ) );

				} NEXT_INSN;


			case insn_throw:
				
				NEXT_INSN;


			case insn_icmpeq: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 == value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_icmpne: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 != value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_icmplt: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 < value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_icmple: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 <= value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_icmpgt: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 > value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_icmpge: {
				int offset = get2s(pc);
				int value2 = POPI();
				int value1 = POPI();
				if( value1 >= value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmpeq: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 == value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmpne: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 != value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmplt: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 < value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmple: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 <= value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmpgt: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 > value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_fcmpge: {
				int offset = get2s(pc);
				double value2 = POPF();
				double value1 = POPF();
				if( value1 >= value2 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_ifnull: {
				int offset = get2s(pc);
				void * value2 = POPA();
				if( value2 == 0 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_ifnotnull: {
				int offset = get2s(pc);
				void * value2 = POPA();
				if( value2 != 0 ) {
					pc = pc-1+offset;
				} else {
					pc = pc + 2;
				}
				} NEXT_INSN;


			case insn_is:{
				Object *o = POPA();
				PUSHI( o->get_class()->instanceOf( POP()->str, false ) );
				} NEXT_INSN;


			case insn_in:{
				Object *o = POPA();
				PUSHI( o->hasOwnProperty( *POP() ) );
				NEXT_INSN;
			}

			case insn_checkcast: {
				Object *o = POPA();
				int index = get2u(pc);
				pc+=2;
				PUSHA(o);
				} NEXT_INSN;

			case insn_pop:
				sp -= 1;
				NEXT_INSN;
				
			case insn_dup:
				sp[0] = sp[-1];
				sp++;
				NEXT_INSN;
				
			case insn_dup2:
				sp[0] = sp[-2];
				sp[1] = sp[-1];
				sp += 2;
				NEXT_INSN;
				
			case insn_pop2:
				sp -= 2;
				NEXT_INSN;
		}
	} catch( ... )
	{
	}

	return *sp;
}


}