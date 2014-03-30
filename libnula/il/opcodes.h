

enum il_opcode {

	insn_nop,

	insn_iadd,
	insn_isub,
	insn_imul,
	insn_idiv,
	insn_irem,
	insn_ixor,
	insn_ior,
	insn_iand,
	insn_ineg,
	insn_inot,
	insn_ishl,
	insn_ishr,
	insn_i2f,
	insn_i2s,
	insn_i2o,

	insn_fadd,
	insn_fsub,
	insn_fmul,
	insn_fdiv,
	insn_fneg,
	insn_fnot,
	insn_f2i,
	insn_f2s,
	insn_f2o,

	insn_o2f,
	insn_o2i,
	insn_o2s,

	insn_iload,
	insn_istore,
	insn_fload,
	insn_fstore,
	insn_aload,
	insn_astore,

	insn_iaload,
	insn_iastore,
	insn_faload,
	insn_fastore,
	insn_aaload,
	insn_aastore,

	insn_putfield,
	insn_getfield,

	insn_putstatic,
	insn_getstatic,

	insn_push,
	insn_invokestatic,
	insn_invokevirtual,
	insn_invokenative,
	insn_invokespecial,

	insn_new,
	insn_throw,

	insn_icmpeq,
	insn_icmpne,
	insn_icmplt,
	insn_icmple,
	insn_icmpgt,
	insn_icmpge,

	insn_fcmpeq,
	insn_fcmpne,
	insn_fcmplt,
	insn_fcmple,
	insn_fcmpgt,
	insn_fcmpge,

	insn_ifnull,
	insn_ifnotnull,

	insn_is,
	insn_in,
	insn_checkcast,

	insn_pop,
	insn_dup,
	insn_dup2,
	insn_pop2,
};