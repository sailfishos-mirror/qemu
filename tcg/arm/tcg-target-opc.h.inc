/*
 * Copyright (c) 2019 Linaro
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or
 * (at your option) any later version.
 *
 * See the COPYING file in the top-level directory for details.
 *
 * Target-specific opcodes for host vector expansion.  These will be
 * emitted by tcg_expand_vec_op.  For those familiar with GCC internals,
 * consider these to be UNSPEC with names.
 */

DEF(arm_sli_vec, 1, 2, 1, TCG_OPF_VECTOR)
DEF(arm_sshl_vec, 1, 2, 0, TCG_OPF_VECTOR)
DEF(arm_ushl_vec, 1, 2, 0, TCG_OPF_VECTOR)
