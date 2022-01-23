	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function __cxx_global_var_init
___cxx_global_var_init:                 ## @__cxx_global_var_init
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	_parenthesis(%rip), %rdi
	leaq	L_.str(%rip), %rsi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1INS_9nullptr_tEEEPKc
	movq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev@GOTPCREL(%rip), %rsi
	leaq	_parenthesis(%rip), %rdi
	movq	%rdi, -8(%rbp)          ## 8-byte Spill
	movq	%rsi, %rdi
	movq	-8(%rbp), %rsi          ## 8-byte Reload
	leaq	___dso_handle(%rip), %rdx
	callq	___cxa_atexit
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1INS_9nullptr_tEEEPKc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1INS_9nullptr_tEEEPKc: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1INS_9nullptr_tEEEPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2INS_9nullptr_tEEEPKc
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__Z6removeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE ## -- Begin function _Z6removeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
	.p2align	4, 0x90
__Z6removeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE: ## @_Z6removeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$160, %rsp
	leaq	-48(%rbp), %rax
	movq	%rdi, -104(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC1Ev
	movq	-104(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5beginEv
	movq	%rax, -64(%rbp)
	movq	-56(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE3endEv
	movq	%rax, -72(%rbp)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	-64(%rbp), %rdi
	leaq	-72(%rbp), %rsi
	callq	__ZNSt3__1neIPcEEbRKNS_11__wrap_iterIT_EES6_
	testb	$1, %al
	jne	LBB2_2
	jmp	LBB2_14
LBB2_2:                                 ##   in Loop: Header=BB2_1 Depth=1
	leaq	-64(%rbp), %rdi
	callq	__ZNKSt3__111__wrap_iterIPcEdeEv
	movb	(%rax), %cl
	movb	%cl, -73(%rbp)
	movsbl	-73(%rbp), %edx
	cmpl	$41, %edx
	jne	LBB2_10
## %bb.3:                               ##   in Loop: Header=BB2_1 Depth=1
Ltmp2:
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE5emptyEv
Ltmp3:
	movb	%al, -105(%rbp)         ## 1-byte Spill
	jmp	LBB2_4
LBB2_4:                                 ##   in Loop: Header=BB2_1 Depth=1
	movb	-105(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB2_10
	jmp	LBB2_5
LBB2_5:                                 ##   in Loop: Header=BB2_1 Depth=1
Ltmp4:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3topEv
Ltmp5:
	movq	%rax, -120(%rbp)        ## 8-byte Spill
	jmp	LBB2_6
LBB2_6:                                 ##   in Loop: Header=BB2_1 Depth=1
	movq	-120(%rbp), %rax        ## 8-byte Reload
	movsbl	(%rax), %ecx
	cmpl	$40, %ecx
	jne	LBB2_10
## %bb.7:                               ##   in Loop: Header=BB2_1 Depth=1
Ltmp6:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3popEv
Ltmp7:
	jmp	LBB2_8
LBB2_8:                                 ##   in Loop: Header=BB2_1 Depth=1
	jmp	LBB2_12
LBB2_9:
Ltmp10:
	movl	%edx, %ecx
	movq	%rax, -88(%rbp)
	movl	%ecx, -92(%rbp)
Ltmp11:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev
Ltmp12:
	jmp	LBB2_16
LBB2_10:                                ##   in Loop: Header=BB2_1 Depth=1
Ltmp8:
	leaq	-48(%rbp), %rdi
	leaq	-73(%rbp), %rsi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4pushERKc
Ltmp9:
	jmp	LBB2_11
LBB2_11:                                ##   in Loop: Header=BB2_1 Depth=1
	jmp	LBB2_12
LBB2_12:                                ##   in Loop: Header=BB2_1 Depth=1
	jmp	LBB2_13
LBB2_13:                                ##   in Loop: Header=BB2_1 Depth=1
	leaq	-64(%rbp), %rdi
	callq	__ZNSt3__111__wrap_iterIPcEppEv
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	jmp	LBB2_1
LBB2_14:
Ltmp0:
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4sizeEv
Ltmp1:
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	jmp	LBB2_15
LBB2_15:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movl	%eax, %ecx
	leaq	-48(%rbp), %rdi
	movl	%ecx, -140(%rbp)        ## 4-byte Spill
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev
	movl	-140(%rbp), %eax        ## 4-byte Reload
	addq	$160, %rsp
	popq	%rbp
	retq
LBB2_16:
	jmp	LBB2_17
LBB2_17:
	movq	-88(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB2_18:
Ltmp13:
	movq	%rax, %rdi
	movq	%rdx, -152(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table2:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Lfunc_begin0-Lfunc_begin0 ## >> Call Site 1 <<
	.uleb128 Ltmp2-Lfunc_begin0     ##   Call between Lfunc_begin0 and Ltmp2
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp2-Lfunc_begin0     ## >> Call Site 2 <<
	.uleb128 Ltmp7-Ltmp2            ##   Call between Ltmp2 and Ltmp7
	.uleb128 Ltmp10-Lfunc_begin0    ##     jumps to Ltmp10
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp11-Lfunc_begin0    ## >> Call Site 3 <<
	.uleb128 Ltmp12-Ltmp11          ##   Call between Ltmp11 and Ltmp12
	.uleb128 Ltmp13-Lfunc_begin0    ##     jumps to Ltmp13
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp8-Lfunc_begin0     ## >> Call Site 4 <<
	.uleb128 Ltmp1-Ltmp8            ##   Call between Ltmp8 and Ltmp1
	.uleb128 Ltmp10-Lfunc_begin0    ##     jumps to Ltmp10
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp1-Lfunc_begin0     ## >> Call Site 5 <<
	.uleb128 Lfunc_end0-Ltmp1       ##   Call between Ltmp1 and Lfunc_end0
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end0:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase0:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC1Ev
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC1Ev: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5beginEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5beginEv: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5beginEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	leaq	-8(%rbp), %rdi
	movq	%rax, %rsi
	callq	__ZNSt3__111__wrap_iterIPcEC1ES1_
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE3endEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE3endEv: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE3endEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	addq	%rax, %rdi
	leaq	-8(%rbp), %rax
	movq	%rdi, -40(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	-40(%rbp), %rsi         ## 8-byte Reload
	callq	__ZNSt3__111__wrap_iterIPcEC1ES1_
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1neIPcEEbRKNS_11__wrap_iterIT_EES6_
__ZNSt3__1neIPcEEbRKNS_11__wrap_iterIT_EES6_: ## @_ZNSt3__1neIPcEEbRKNS_11__wrap_iterIT_EES6_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__1eqIPcS1_EEbRKNS_11__wrap_iterIT_EERKNS2_IT0_EE
	xorb	$-1, %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__111__wrap_iterIPcEdeEv
__ZNKSt3__111__wrap_iterIPcEdeEv:       ## @_ZNKSt3__111__wrap_iterIPcEdeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE5emptyEv
__ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE5emptyEv: ## @_ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE5emptyEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE5emptyEv
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3topEv
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3topEv: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3topEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEE4backEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3popEv
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3popEv: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE3popEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4pushERKc
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4pushERKc: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4pushERKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__111__wrap_iterIPcEppEv
__ZNSt3__111__wrap_iterIPcEppEv:        ## @_ZNSt3__111__wrap_iterIPcEppEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	addq	$1, %rax
	movq	%rax, (%rdi)
	movq	%rdi, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4sizeEv
__ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4sizeEv: ## @_ZNKSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE4sizeEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev
	.weak_def_can_be_hidden	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev
	.p2align	4, 0x90
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	___clang_call_terminate ## -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## %bb.0:
	pushq	%rax
	callq	___cxa_begin_catch
	movq	%rax, (%rsp)            ## 8-byte Spill
	callq	__ZSt9terminatev
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	_parenthesis(%rip), %rsi
	leaq	-24(%rbp), %rax
	movq	%rax, %rdi
	movq	%rax, -48(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_
Ltmp14:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__Z6removeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp15:
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	jmp	LBB16_1
LBB16_1:
Ltmp16:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	movl	-52(%rbp), %esi         ## 4-byte Reload
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
Ltmp17:
	movq	%rax, -64(%rbp)         ## 8-byte Spill
	jmp	LBB16_2
LBB16_2:
Ltmp18:
	leaq	__ZNSt3__1L4endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rsi
	movq	-64(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
Ltmp19:
	movq	%rax, -72(%rbp)         ## 8-byte Spill
	jmp	LBB16_3
LBB16_3:
	leaq	-24(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	xorl	%eax, %eax
	addq	$80, %rsp
	popq	%rbp
	retq
LBB16_4:
Ltmp20:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
Ltmp21:
	leaq	-24(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp22:
	jmp	LBB16_5
LBB16_5:
	jmp	LBB16_6
LBB16_6:
	movq	-32(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB16_7:
Ltmp23:
	movq	%rax, %rdi
	movq	%rdx, -80(%rbp)         ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table16:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase1-Lttbaseref1
Lttbaseref1:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1 ## >> Call Site 1 <<
	.uleb128 Ltmp14-Lfunc_begin1    ##   Call between Lfunc_begin1 and Ltmp14
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp14-Lfunc_begin1    ## >> Call Site 2 <<
	.uleb128 Ltmp19-Ltmp14          ##   Call between Ltmp14 and Ltmp19
	.uleb128 Ltmp20-Lfunc_begin1    ##     jumps to Ltmp20
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp19-Lfunc_begin1    ## >> Call Site 3 <<
	.uleb128 Ltmp21-Ltmp19          ##   Call between Ltmp19 and Ltmp21
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp21-Lfunc_begin1    ## >> Call Site 4 <<
	.uleb128 Ltmp22-Ltmp21          ##   Call between Ltmp21 and Ltmp22
	.uleb128 Ltmp23-Lfunc_begin1    ##     jumps to Ltmp23
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp22-Lfunc_begin1    ## >> Call Site 5 <<
	.uleb128 Lfunc_end1-Ltmp22      ##   Call between Ltmp22 and Lfunc_end1
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end1:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase1:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E: ## @_ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	*-16(%rbp)
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
__ZNSt3__1L4endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ## @_ZNSt3__1L4endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	-8(%rbp), %rax
	movq	(%rax), %rcx
	movq	-24(%rcx), %rcx
	addq	%rcx, %rax
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movl	$10, %esi
	callq	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movsbl	%al, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	-8(%rbp), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movq	-8(%rbp), %rcx
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	movq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev
	.p2align	4, 0x90
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev
	.weak_def_can_be_hidden	__ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev
	.p2align	4, 0x90
__ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev
	.p2align	4, 0x90
__ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev
	.p2align	4, 0x90
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEED2Ev
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	%rax, -16(%rbp)
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE3endEv
	movq	%rax, -24(%rbp)
LBB22_1:                                ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	je	LBB22_6
## %bb.2:                               ##   in Loop: Header=BB22_1 Depth=1
Ltmp24:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
Ltmp25:
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	jmp	LBB22_3
LBB22_3:                                ##   in Loop: Header=BB22_1 Depth=1
	movq	-16(%rbp), %rax
	movq	(%rax), %rsi
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movl	$4096, %edx             ## imm = 0x1000
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
## %bb.4:                               ##   in Loop: Header=BB22_1 Depth=1
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, -16(%rbp)
	jmp	LBB22_1
LBB22_5:
Ltmp26:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
Ltmp27:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
Ltmp28:
	jmp	LBB22_7
LBB22_6:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
	addq	$64, %rsp
	popq	%rbp
	retq
LBB22_7:
	jmp	LBB22_8
LBB22_8:
	movq	-32(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB22_9:
Ltmp29:
	movq	%rax, %rdi
	movq	%rdx, -64(%rbp)         ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table22:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase2-Lttbaseref2
Lttbaseref2:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Ltmp24-Lfunc_begin2    ## >> Call Site 1 <<
	.uleb128 Ltmp25-Ltmp24          ##   Call between Ltmp24 and Ltmp25
	.uleb128 Ltmp26-Lfunc_begin2    ##     jumps to Ltmp26
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp27-Lfunc_begin2    ## >> Call Site 2 <<
	.uleb128 Ltmp28-Ltmp27          ##   Call between Ltmp27 and Ltmp28
	.uleb128 Ltmp29-Lfunc_begin2    ##     jumps to Ltmp29
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp28-Lfunc_begin2    ## >> Call Site 3 <<
	.uleb128 Lfunc_end2-Ltmp28      ##   Call between Ltmp28 and Lfunc_end2
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end2:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase2:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv
	.weak_definition	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv
	.p2align	4, 0x90
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5clearEv
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
Ltmp30:
	movq	%rdi, -72(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
Ltmp31:
	movq	%rax, -80(%rbp)         ## 8-byte Spill
	jmp	LBB23_1
LBB23_1:
	movq	-80(%rbp), %rax         ## 8-byte Reload
	movq	%rax, -16(%rbp)
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
LBB23_2:                                ## =>This Inner Loop Header: Depth=1
Ltmp32:
	leaq	-48(%rbp), %rdi
	leaq	-64(%rbp), %rsi
	callq	__ZNSt3__1neERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
Ltmp33:
	movb	%al, -81(%rbp)          ## 1-byte Spill
	jmp	LBB23_3
LBB23_3:                                ##   in Loop: Header=BB23_2 Depth=1
	movb	-81(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB23_4
	jmp	LBB23_11
LBB23_4:                                ##   in Loop: Header=BB23_2 Depth=1
	movq	-16(%rbp), %rdi
Ltmp44:
	leaq	-48(%rbp), %rax
	movq	%rdi, -96(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNKSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEdeEv
Ltmp45:
	movq	%rax, -104(%rbp)        ## 8-byte Spill
	jmp	LBB23_5
LBB23_5:                                ##   in Loop: Header=BB23_2 Depth=1
	movq	-104(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L9addressofIcEEPT_RS1_
Ltmp46:
	movq	-96(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE7destroyIcEEvRS2_PT_
Ltmp47:
	jmp	LBB23_6
LBB23_6:                                ##   in Loop: Header=BB23_2 Depth=1
	jmp	LBB23_7
LBB23_7:                                ##   in Loop: Header=BB23_2 Depth=1
Ltmp48:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEppEv
Ltmp49:
	movq	%rax, -112(%rbp)        ## 8-byte Spill
	jmp	LBB23_8
LBB23_8:                                ##   in Loop: Header=BB23_2 Depth=1
	jmp	LBB23_2
LBB23_9:
Ltmp50:
	movl	%edx, %ecx
	movq	%rax, -24(%rbp)
	movl	%ecx, -28(%rbp)
## %bb.10:
	movq	-24(%rbp), %rdi
	callq	___cxa_call_unexpected
LBB23_11:
Ltmp34:
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
Ltmp35:
	movq	%rax, -120(%rbp)        ## 8-byte Spill
	jmp	LBB23_12
LBB23_12:
	movq	-120(%rbp), %rax        ## 8-byte Reload
	movq	$0, (%rax)
LBB23_13:                               ## =>This Inner Loop Header: Depth=1
Ltmp36:
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
Ltmp37:
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	jmp	LBB23_14
LBB23_14:                               ##   in Loop: Header=BB23_13 Depth=1
	movq	-128(%rbp), %rax        ## 8-byte Reload
	cmpq	$2, %rax
	jbe	LBB23_18
## %bb.15:                              ##   in Loop: Header=BB23_13 Depth=1
	movq	-16(%rbp), %rdi
Ltmp40:
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	%rdi, -136(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv
Ltmp41:
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	jmp	LBB23_16
LBB23_16:                               ##   in Loop: Header=BB23_13 Depth=1
	movq	-144(%rbp), %rax        ## 8-byte Reload
	movq	(%rax), %rsi
	movl	$4096, %edx             ## imm = 0x1000
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
Ltmp42:
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv
Ltmp43:
	jmp	LBB23_17
LBB23_17:                               ##   in Loop: Header=BB23_13 Depth=1
	jmp	LBB23_13
LBB23_18:
Ltmp38:
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
Ltmp39:
	movq	%rax, -152(%rbp)        ## 8-byte Spill
	jmp	LBB23_19
LBB23_19:
	movq	-152(%rbp), %rax        ## 8-byte Reload
	subq	$1, %rax
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	je	LBB23_20
	jmp	LBB23_23
LBB23_23:
	movq	-152(%rbp), %rax        ## 8-byte Reload
	subq	$2, %rax
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	je	LBB23_21
	jmp	LBB23_22
LBB23_20:
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	$2048, 32(%rax)         ## imm = 0x800
	jmp	LBB23_22
LBB23_21:
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	$4096, 32(%rax)         ## imm = 0x1000
LBB23_22:
	addq	$176, %rsp
	popq	%rbp
	retq
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table23:
Lexception3:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase3-Lttbaseref3
Lttbaseref3:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Ltmp30-Lfunc_begin3    ## >> Call Site 1 <<
	.uleb128 Ltmp49-Ltmp30          ##   Call between Ltmp30 and Ltmp49
	.uleb128 Ltmp50-Lfunc_begin3    ##     jumps to Ltmp50
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp49-Lfunc_begin3    ## >> Call Site 2 <<
	.uleb128 Ltmp34-Ltmp49          ##   Call between Ltmp49 and Ltmp34
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp34-Lfunc_begin3    ## >> Call Site 3 <<
	.uleb128 Ltmp39-Ltmp34          ##   Call between Ltmp34 and Ltmp39
	.uleb128 Ltmp50-Lfunc_begin3    ##     jumps to Ltmp50
	.byte	1                       ##   On action: 1
Lcst_end3:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase3:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE3endEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE3endEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE3endEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	16(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__19allocatorIcE10deallocateEPcm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$40, %rdi
	callq	__ZNSt3__117__compressed_pairImNS_9allocatorIcEEE6secondEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv
	.weak_definition	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv
	.p2align	4, 0x90
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEE5beginEv
Lfunc_begin4:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception4
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	32(%rdi), %rcx
	shrq	$12, %rcx
	leaq	(%rax,%rcx,8), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rsi
Ltmp51:
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5emptyEv
Ltmp52:
	movb	%al, -65(%rbp)          ## 1-byte Spill
	jmp	LBB29_1
LBB29_1:
	movb	-65(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB29_2
	jmp	LBB29_3
LBB29_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -80(%rbp)         ## 8-byte Spill
	jmp	LBB29_4
LBB29_3:
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rcx         ## 8-byte Reload
	movq	32(%rcx), %rdx
	andq	$4095, %rdx             ## imm = 0xFFF
	addq	%rdx, %rax
	movq	%rax, -80(%rbp)         ## 8-byte Spill
LBB29_4:
	movq	-80(%rbp), %rax         ## 8-byte Reload
	leaq	-16(%rbp), %rdi
	movq	-64(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC1ES3_S1_
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$80, %rsp
	popq	%rbp
	retq
LBB29_5:
Ltmp53:
	movl	%edx, %ecx
	movq	%rax, -40(%rbp)
	movl	%ecx, -44(%rbp)
## %bb.6:
	movq	-40(%rbp), %rdi
	callq	___cxa_call_unexpected
Lfunc_end4:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table29:
Lexception4:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase4-Lttbaseref4
Lttbaseref4:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end4-Lcst_begin4
Lcst_begin4:
	.uleb128 Ltmp51-Lfunc_begin4    ## >> Call Site 1 <<
	.uleb128 Ltmp52-Ltmp51          ##   Call between Ltmp51 and Ltmp52
	.uleb128 Ltmp53-Lfunc_begin4    ##     jumps to Ltmp53
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp52-Lfunc_begin4    ## >> Call Site 2 <<
	.uleb128 Lfunc_end4-Ltmp52      ##   Call between Ltmp52 and Lfunc_end4
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end4:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase4:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv
	.weak_definition	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv
	.p2align	4, 0x90
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv
Lfunc_begin5:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception5
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
Ltmp54:
	movq	%rdi, -64(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
Ltmp55:
	movq	%rax, -72(%rbp)         ## 8-byte Spill
	jmp	LBB30_1
LBB30_1:
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	(%rax), %rcx
	movq	-64(%rbp), %rdx         ## 8-byte Reload
	movq	32(%rdx), %rsi
	addq	%rsi, %rcx
	movq	%rcx, -32(%rbp)
	movq	%rdx, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	-32(%rbp), %rcx
	shrq	$12, %rcx
	leaq	(%rax,%rcx,8), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rsi
Ltmp56:
	movq	-64(%rbp), %rdi         ## 8-byte Reload
	movq	%rsi, -80(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5emptyEv
Ltmp57:
	movb	%al, -81(%rbp)          ## 1-byte Spill
	jmp	LBB30_2
LBB30_2:
	movb	-81(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB30_3
	jmp	LBB30_4
LBB30_3:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -96(%rbp)         ## 8-byte Spill
	jmp	LBB30_5
LBB30_4:
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rcx
	andq	$4095, %rcx             ## imm = 0xFFF
	addq	%rcx, %rax
	movq	%rax, -96(%rbp)         ## 8-byte Spill
LBB30_5:
	movq	-96(%rbp), %rax         ## 8-byte Reload
	leaq	-16(%rbp), %rdi
	movq	-80(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC1ES3_S1_
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	$96, %rsp
	popq	%rbp
	retq
LBB30_6:
Ltmp58:
	movl	%edx, %ecx
	movq	%rax, -40(%rbp)
	movl	%ecx, -44(%rbp)
## %bb.7:
	movq	-40(%rbp), %rdi
	callq	___cxa_call_unexpected
Lfunc_end5:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table30:
Lexception5:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase5-Lttbaseref5
Lttbaseref5:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end5-Lcst_begin5
Lcst_begin5:
	.uleb128 Ltmp54-Lfunc_begin5    ## >> Call Site 1 <<
	.uleb128 Ltmp57-Ltmp54          ##   Call between Ltmp54 and Ltmp57
	.uleb128 Ltmp58-Lfunc_begin5    ##     jumps to Ltmp58
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp57-Lfunc_begin5    ## >> Call Site 2 <<
	.uleb128 Lfunc_end5-Ltmp57      ##   Call between Ltmp57 and Lfunc_end5
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end5:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase5:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1neERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
__ZNSt3__1neERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_: ## @_ZNSt3__1neERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__1eqERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
	xorb	$-1, %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE7destroyIcEEvRS2_PT_
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE7destroyIcEEvRS2_PT_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE7destroyIcEEvRS2_PT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE9__destroyIcEEvNS_17integral_constantIbLb1EEERS2_PT_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L9addressofIcEEPT_RS1_
__ZNSt3__1L9addressofIcEEPT_RS1_:       ## @_ZNSt3__1L9addressofIcEEPT_RS1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEdeEv
__ZNKSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEdeEv: ## @_ZNKSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEdeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEppEv
__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEppEv: ## @_ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEppEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rax
	addq	$1, %rax
	movq	%rax, 8(%rdi)
	movq	(%rdi), %rcx
	movq	(%rcx), %rcx
	subq	%rcx, %rax
	cmpq	$4096, %rax             ## imm = 0x1000
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	jne	LBB35_2
## %bb.1:
	movq	-16(%rbp), %rax         ## 8-byte Reload
	movq	(%rax), %rcx
	addq	$8, %rcx
	movq	%rcx, (%rax)
	movq	(%rax), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, 8(%rax)
LBB35_2:
	movq	-16(%rbp), %rax         ## 8-byte Reload
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$40, %rdi
	callq	__ZNSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv: ## @_ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	16(%rdi), %rax
	movq	8(%rdi), %rdi
	subq	%rdi, %rax
	sarq	$3, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rax
	addq	$8, %rax
	movq	%rax, %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5emptyEv
__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5emptyEv: ## @_ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5emptyEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	16(%rdi), %rax
	cmpq	8(%rdi), %rax
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC1ES3_S1_
__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC1ES3_S1_: ## @_ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC1ES3_S1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC2ES3_S1_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC2ES3_S1_
__ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC2ES3_S1_: ## @_ZNSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEC2ES3_S1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	%rsi, (%rdx)
	movq	-24(%rbp), %rsi
	movq	%rsi, 8(%rdx)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1eqERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
__ZNSt3__1eqERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_: ## @_ZNSt3__1eqERKNS_16__deque_iteratorIcPcRcPS1_lLl4096EEES6_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	8(%rsi), %rsi
	movq	-16(%rbp), %rdi
	cmpq	8(%rdi), %rsi
	sete	%al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE9__destroyIcEEvNS_17integral_constantIbLb1EEERS2_PT_
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE9__destroyIcEEvNS_17integral_constantIbLb1EEERS2_PT_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE9__destroyIcEEvNS_17integral_constantIbLb1EEERS2_PT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	callq	__ZNSt3__19allocatorIcE7destroyEPc
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIcE7destroyEPc
__ZNSt3__19allocatorIcE7destroyEPc:     ## @_ZNSt3__19allocatorIcE7destroyEPc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
__ZNSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv: ## @_ZNSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_NS_17integral_constantIbLb1EEE
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_NS_17integral_constantIbLb1EEE
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_NS_17integral_constantIbLb1EEE: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE19__destruct_at_beginEPS1_NS_17integral_constantIbLb1EEE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdi
	movq	%rdi, 8(%rsi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIcE10deallocateEPcm
__ZNSt3__19allocatorIcE10deallocateEPcm: ## @_ZNSt3__19allocatorIcE10deallocateEPcm
Lfunc_begin6:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception6
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
Ltmp59:
	movl	$1, %edx
	callq	__ZNSt3__1L19__libcpp_deallocateEPvmm
Ltmp60:
	jmp	LBB50_1
LBB50_1:
	addq	$48, %rsp
	popq	%rbp
	retq
LBB50_2:
Ltmp61:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
## %bb.3:
	movq	-32(%rbp), %rdi
	callq	___cxa_call_unexpected
Lfunc_end6:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table50:
Lexception6:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase6-Lttbaseref6
Lttbaseref6:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end6-Lcst_begin6
Lcst_begin6:
	.uleb128 Ltmp59-Lfunc_begin6    ## >> Call Site 1 <<
	.uleb128 Ltmp60-Ltmp59          ##   Call between Ltmp59 and Ltmp60
	.uleb128 Ltmp61-Lfunc_begin6    ##     jumps to Ltmp61
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp60-Lfunc_begin6    ## >> Call Site 2 <<
	.uleb128 Lfunc_end6-Ltmp60      ##   Call between Ltmp60 and Lfunc_end6
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end6:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase6:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L19__libcpp_deallocateEPvmm
__ZNSt3__1L19__libcpp_deallocateEPvmm:  ## @_ZNSt3__1L19__libcpp_deallocateEPvmm
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__117_DeallocateCaller33__do_deallocate_handle_size_alignEPvmm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117_DeallocateCaller33__do_deallocate_handle_size_alignEPvmm
__ZNSt3__117_DeallocateCaller33__do_deallocate_handle_size_alignEPvmm: ## @_ZNSt3__117_DeallocateCaller33__do_deallocate_handle_size_alignEPvmm
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm ## -- Begin function _ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm
	.weak_definition	__ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm
	.p2align	4, 0x90
__ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm: ## @_ZNSt3__117_DeallocateCaller27__do_deallocate_handle_sizeEPvm
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__117_DeallocateCaller9__do_callEPv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__117_DeallocateCaller9__do_callEPv ## -- Begin function _ZNSt3__117_DeallocateCaller9__do_callEPv
	.weak_definition	__ZNSt3__117_DeallocateCaller9__do_callEPv
	.p2align	4, 0x90
__ZNSt3__117_DeallocateCaller9__do_callEPv: ## @_ZNSt3__117_DeallocateCaller9__do_callEPv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZdlPv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairImNS_9allocatorIcEEE6secondEv
__ZNSt3__117__compressed_pairImNS_9allocatorIcEEE6secondEv: ## @_ZNSt3__117__compressed_pairImNS_9allocatorIcEEE6secondEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv
__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5clearEv
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	cmpq	$0, (%rdi)
	je	LBB57_2
## %bb.1:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	(%rdi), %rsi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE10deallocateERS3_PS2_m
LBB57_2:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5clearEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5clearEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5clearEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE10deallocateERS3_PS2_m
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE10deallocateERS3_PS2_m: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE10deallocateERS3_PS2_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__19allocatorIPcE10deallocateEPS1_m
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE6secondEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv
__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv: ## @_ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$3, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
Lfunc_begin7:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception7
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	%rsi, -48(%rbp)         ## 8-byte Spill
LBB63_1:                                ## =>This Inner Loop Header: Depth=1
	movq	-24(%rbp), %rax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	cmpq	16(%rcx), %rax
	je	LBB63_6
## %bb.2:                               ##   in Loop: Header=BB63_1 Depth=1
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	16(%rdi), %rcx
	addq	$-8, %rcx
	movq	%rcx, 16(%rdi)
	movq	%rcx, %rdi
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
Ltmp62:
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE7destroyIS2_EEvRS3_PT_
Ltmp63:
	jmp	LBB63_3
LBB63_3:                                ##   in Loop: Header=BB63_1 Depth=1
	jmp	LBB63_1
LBB63_4:
Ltmp64:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
## %bb.5:
	movq	-32(%rbp), %rdi
	callq	___cxa_call_unexpected
LBB63_6:
	addq	$64, %rsp
	popq	%rbp
	retq
Lfunc_end7:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table63:
Lexception7:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase7-Lttbaseref7
Lttbaseref7:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end7-Lcst_begin7
Lcst_begin7:
	.uleb128 Ltmp62-Lfunc_begin7    ## >> Call Site 1 <<
	.uleb128 Ltmp63-Ltmp62          ##   Call between Ltmp62 and Ltmp63
	.uleb128 Ltmp64-Lfunc_begin7    ##     jumps to Ltmp64
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp63-Lfunc_begin7    ## >> Call Site 2 <<
	.uleb128 Lfunc_end7-Ltmp63      ##   Call between Ltmp63 and Lfunc_end7
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end7:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase7:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE7destroyIS2_EEvRS3_PT_
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE7destroyIS2_EEvRS3_PT_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE7destroyIS2_EEvRS3_PT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9__destroyIS2_EEvNS_17integral_constantIbLb1EEERS3_PT_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_: ## @_ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9__destroyIS2_EEvNS_17integral_constantIbLb1EEERS3_PT_
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9__destroyIS2_EEvNS_17integral_constantIbLb1EEERS3_PT_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9__destroyIS2_EEvNS_17integral_constantIbLb1EEERS3_PT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	callq	__ZNSt3__19allocatorIPcE7destroyEPS1_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIPcE7destroyEPS1_
__ZNSt3__19allocatorIPcE7destroyEPS1_:  ## @_ZNSt3__19allocatorIPcE7destroyEPS1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIPcE10deallocateEPS1_m
__ZNSt3__19allocatorIPcE10deallocateEPS1_m: ## @_ZNSt3__19allocatorIPcE10deallocateEPS1_m
Lfunc_begin8:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception8
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rdx
	shlq	$3, %rdx
Ltmp65:
	movl	$8, %esi
	movq	%rsi, -48(%rbp)         ## 8-byte Spill
	movq	%rdx, %rsi
	movq	-48(%rbp), %rdx         ## 8-byte Reload
	callq	__ZNSt3__1L19__libcpp_deallocateEPvmm
Ltmp66:
	jmp	LBB68_1
LBB68_1:
	addq	$48, %rsp
	popq	%rbp
	retq
LBB68_2:
Ltmp67:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
## %bb.3:
	movq	-32(%rbp), %rdi
	callq	___cxa_call_unexpected
Lfunc_end8:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table68:
Lexception8:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase8-Lttbaseref8
Lttbaseref8:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end8-Lcst_begin8
Lcst_begin8:
	.uleb128 Ltmp65-Lfunc_begin8    ## >> Call Site 1 <<
	.uleb128 Ltmp66-Ltmp65          ##   Call between Ltmp65 and Ltmp66
	.uleb128 Ltmp67-Lfunc_begin8    ##     jumps to Ltmp67
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp66-Lfunc_begin8    ## >> Call Site 2 <<
	.uleb128 Lfunc_end8-Ltmp66      ##   Call between Ltmp66 and Lfunc_end8
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end8:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase8:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE6secondEv
__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE6secondEv: ## @_ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE6secondEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EE5__getEv
__ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv: ## @_ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNKSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
__ZNKSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv: ## @_ZNKSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv: ## @_ZNKSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2INS_9nullptr_tEEEPKc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2INS_9nullptr_tEEEPKc: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2INS_9nullptr_tEEEPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1Ev
	movq	-16(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__111char_traitsIcE6lengthEPKc
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1Ev
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1Ev: ## @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc ## -- Begin function _ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_definition	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6lengthEPKc:  ## @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2Ev
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2Ev: ## @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev
	movq	-16(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev
__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev: ## @_ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%esi, %esi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	$24, %edx
	callq	_memset
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev
__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev: ## @_ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__19allocatorIcEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIcEC2Ev
__ZNSt3__19allocatorIcEC2Ev:            ## @_ZNSt3__19allocatorIcEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC2Ev
__ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC2Ev: ## @_ZNSt3__15stackIcNS_5dequeIcNS_9allocatorIcEEEEEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEEC1Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEEC1Ev
__ZNSt3__15dequeIcNS_9allocatorIcEEEC1Ev: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEEC1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEEC2Ev
__ZNSt3__15dequeIcNS_9allocatorIcEEEC2Ev: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112__deque_baseIcNS_9allocatorIcEEEC2Ev
__ZNSt3__112__deque_baseIcNS_9allocatorIcEEEC2Ev: ## @_ZNSt3__112__deque_baseIcNS_9allocatorIcEEEC2Ev
Lfunc_begin9:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception9
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC1Ev
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movq	$0, 32(%rdi)
	addq	$40, %rdi
Ltmp68:
	xorl	%eax, %eax
	movl	%eax, %esi
	callq	__ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC1Em
Ltmp69:
	jmp	LBB84_1
LBB84_1:
	addq	$48, %rsp
	popq	%rbp
	retq
LBB84_2:
Ltmp70:
	movl	%edx, %ecx
	movq	%rax, -16(%rbp)
	movl	%ecx, -20(%rbp)
Ltmp71:
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEED1Ev
Ltmp72:
	jmp	LBB84_3
LBB84_3:
	jmp	LBB84_4
LBB84_4:
	movq	-16(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB84_5:
Ltmp73:
	movq	%rax, %rdi
	movq	%rdx, -40(%rbp)         ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end9:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table84:
Lexception9:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase9-Lttbaseref9
Lttbaseref9:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end9-Lcst_begin9
Lcst_begin9:
	.uleb128 Lfunc_begin9-Lfunc_begin9 ## >> Call Site 1 <<
	.uleb128 Ltmp68-Lfunc_begin9    ##   Call between Lfunc_begin9 and Ltmp68
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp68-Lfunc_begin9    ## >> Call Site 2 <<
	.uleb128 Ltmp69-Ltmp68          ##   Call between Ltmp68 and Ltmp69
	.uleb128 Ltmp70-Lfunc_begin9    ##     jumps to Ltmp70
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp71-Lfunc_begin9    ## >> Call Site 3 <<
	.uleb128 Ltmp72-Ltmp71          ##   Call between Ltmp71 and Ltmp72
	.uleb128 Ltmp73-Lfunc_begin9    ##     jumps to Ltmp73
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp72-Lfunc_begin9    ## >> Call Site 4 <<
	.uleb128 Lfunc_end9-Ltmp72      ##   Call between Ltmp72 and Lfunc_end9
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end9:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase9:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC1Ev
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC1Ev: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC1Em
__ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC1Em: ## @_ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC1Em
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC2Em
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC2Ev
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC2Ev: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, (%rdi)
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -24(%rbp)
	leaq	-24(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, 8(%rdi)
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -32(%rbp)
	leaq	-32(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, 16(%rdi)
	addq	$24, %rdi
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -40(%rbp)
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC1ES2_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L15__get_nullptr_tEv
__ZNSt3__1L15__get_nullptr_tEv:         ## @_ZNSt3__1L15__get_nullptr_tEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-8(%rbp), %rdi
	movq	$-1, %rsi
	callq	__ZNSt3__19nullptr_tC1EMNS0_5__natEi
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__19nullptr_tcvPT_IPcEEv
__ZNKSt3__19nullptr_tcvPT_IPcEEv:       ## @_ZNKSt3__19nullptr_tcvPT_IPcEEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
                                        ## kill: def $rax killed $eax
	movq	%rdi, -8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC1ES2_
__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC1ES2_: ## @_ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC1ES2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC2ES2_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19nullptr_tC1EMNS0_5__natEi
__ZNSt3__19nullptr_tC1EMNS0_5__natEi:   ## @_ZNSt3__19nullptr_tC1EMNS0_5__natEi
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__19nullptr_tC2EMNS0_5__natEi
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19nullptr_tC2EMNS0_5__natEi
__ZNSt3__19nullptr_tC2EMNS0_5__natEi:   ## @_ZNSt3__19nullptr_tC2EMNS0_5__natEi
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	$0, (%rsi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC2ES2_
__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC2ES2_: ## @_ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEEC2ES2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	leaq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE
	movq	(%rax), %rsi
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EEC2ES2_
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EEC2Ev
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE
__ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE: ## @_ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EEC2ES2_
__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EEC2ES2_: ## @_ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EEC2ES2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE
	movq	(%rax), %rax
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EEC2Ev
__ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EEC2Ev: ## @_ZNSt3__122__compressed_pair_elemINS_9allocatorIPcEELi1ELb1EEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__19allocatorIPcEC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIPcEC2Ev
__ZNSt3__19allocatorIPcEC2Ev:           ## @_ZNSt3__19allocatorIPcEC2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC2Em
__ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC2Em: ## @_ZNSt3__117__compressed_pairImNS_9allocatorIcEEEC2Em
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	leaq	-16(%rbp), %rax
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardImEERT_RNS_16remove_referenceIS1_E4typeE
	movq	(%rax), %rsi
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__122__compressed_pair_elemImLi0ELb0EEC2Em
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L7forwardImEERT_RNS_16remove_referenceIS1_E4typeE
__ZNSt3__1L7forwardImEERT_RNS_16remove_referenceIS1_E4typeE: ## @_ZNSt3__1L7forwardImEERT_RNS_16remove_referenceIS1_E4typeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemImLi0ELb0EEC2Em
__ZNSt3__122__compressed_pair_elemImLi0ELb0EEC2Em: ## @_ZNSt3__122__compressed_pair_elemImLi0ELb0EEC2Em
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardImEERT_RNS_16remove_referenceIS1_E4typeE
	movq	(%rax), %rax
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	testb	$1, %al
	jne	LBB101_1
	jmp	LBB101_2
LBB101_1:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	jmp	LBB101_3
LBB101_2:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	movq	%rax, -24(%rbp)         ## 8-byte Spill
LBB101_3:
	movq	-24(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__111__wrap_iterIPcEC1ES1_
__ZNSt3__111__wrap_iterIPcEC1ES1_:      ## @_ZNSt3__111__wrap_iterIPcEC1ES1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__111__wrap_iterIPcEC2ES1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv: ## @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	movzbl	(%rax), %ecx
	movl	%ecx, %eax
	andq	$1, %rax
	cmpq	$0, %rax
	setne	%dl
	andb	$1, %dl
	movzbl	%dl, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	movq	16(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv: ## @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	addq	$1, %rax
	movq	%rax, %rdi
	callq	__ZNSt3__114pointer_traitsIPcE10pointer_toERc
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv: ## @_ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv: ## @_ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv: ## @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114pointer_traitsIPcE10pointer_toERc
__ZNSt3__114pointer_traitsIPcE10pointer_toERc: ## @_ZNSt3__114pointer_traitsIPcE10pointer_toERc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__1L9addressofIcEEPT_RS1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__111__wrap_iterIPcEC2ES1_
__ZNSt3__111__wrap_iterIPcEC2ES1_:      ## @_ZNSt3__111__wrap_iterIPcEC2ES1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rdi, (%rsi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv: ## @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	testb	$1, %al
	jne	LBB112_1
	jmp	LBB112_2
LBB112_1:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	jmp	LBB112_3
LBB112_2:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv
	movq	%rax, -24(%rbp)         ## 8-byte Spill
LBB112_3:
	movq	-24(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv: ## @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	movq	8(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv: ## @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	movzbl	(%rax), %ecx
	sarl	$1, %ecx
	movslq	%ecx, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1eqIPcS1_EEbRKNS_11__wrap_iterIT_EERKNS2_IT0_EE
__ZNSt3__1eqIPcS1_EEbRKNS_11__wrap_iterIT_EERKNS2_IT0_EE: ## @_ZNSt3__1eqIPcS1_EEbRKNS_11__wrap_iterIT_EERKNS2_IT0_EE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__111__wrap_iterIPcE4baseEv
	movq	-16(%rbp), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__111__wrap_iterIPcE4baseEv
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	cmpq	%rax, %rsi
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__111__wrap_iterIPcE4baseEv
__ZNKSt3__111__wrap_iterIPcE4baseEv:    ## @_ZNKSt3__111__wrap_iterIPcE4baseEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15dequeIcNS_9allocatorIcEEE5emptyEv
__ZNKSt3__15dequeIcNS_9allocatorIcEEE5emptyEv: ## @_ZNKSt3__15dequeIcNS_9allocatorIcEEE5emptyEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	cmpq	$0, (%rax)
	sete	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
__ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv: ## @_ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$40, %rdi
	callq	__ZNKSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
__ZNKSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv: ## @_ZNKSt3__117__compressed_pairImNS_9allocatorIcEEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv: ## @_ZNKSt3__122__compressed_pair_elemImLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEE4backEv
__ZNSt3__15dequeIcNS_9allocatorIcEEE4backEv: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEE4backEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	(%rax), %rax
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	addq	32(%rdi), %rax
	subq	$1, %rax
	movq	%rax, -16(%rbp)
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	-16(%rbp), %rdi
	shrq	$12, %rdi
	movq	(%rax,%rdi,8), %rax
	movq	-16(%rbp), %rdi
	andq	$4095, %rdi             ## imm = 0xFFF
	addq	%rdi, %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv
	.weak_definition	__ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv
	.p2align	4, 0x90
__ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEE8pop_backEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	movq	%rdi, -32(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	(%rax), %rax
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	addq	32(%rdi), %rax
	subq	$1, %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rdi, -40(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	-24(%rbp), %rdi
	shrq	$12, %rdi
	movq	(%rax,%rdi,8), %rax
	movq	-24(%rbp), %rdi
	andq	$4095, %rdi             ## imm = 0xFFF
	addq	%rdi, %rax
	movq	%rax, %rdi
	callq	__ZNSt3__1L16__to_raw_pointerIcEEPT_S2_
	movq	-40(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE7destroyIcEEvRS2_PT_
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	(%rax), %rsi
	addq	$-1, %rsi
	movq	%rsi, (%rax)
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE12__back_spareEv
	cmpq	$8192, %rax             ## imm = 0x2000
	jb	LBB122_2
## %bb.1:
	movq	-16(%rbp), %rdi
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4backEv
	movq	(%rax), %rsi
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movl	$4096, %edx             ## imm = 0x1000
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
	movq	-32(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8pop_backEv
LBB122_2:
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L16__to_raw_pointerIcEEPT_S2_
__ZNSt3__1L16__to_raw_pointerIcEEPT_S2_: ## @_ZNSt3__1L16__to_raw_pointerIcEEPT_S2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15dequeIcNS_9allocatorIcEEE12__back_spareEv
__ZNKSt3__15dequeIcNS_9allocatorIcEEE12__back_spareEv: ## @_ZNKSt3__15dequeIcNS_9allocatorIcEEE12__back_spareEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE10__capacityEv
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	32(%rdi), %rcx
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	movq	%rcx, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	-32(%rbp), %rcx         ## 8-byte Reload
	addq	(%rax), %rcx
	movq	-24(%rbp), %rax         ## 8-byte Reload
	subq	%rcx, %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4backEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4backEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4backEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	16(%rdi), %rdi
	addq	$-8, %rdi
	movq	%rdi, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8pop_backEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8pop_backEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8pop_backEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	16(%rdi), %rax
	addq	$-8, %rax
	movq	%rax, %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15dequeIcNS_9allocatorIcEEE10__capacityEv
__ZNKSt3__15dequeIcNS_9allocatorIcEEE10__capacityEv: ## @_ZNKSt3__15dequeIcNS_9allocatorIcEEE10__capacityEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
	cmpq	$0, %rax
	jne	LBB127_2
## %bb.1:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	%rcx, -24(%rbp)         ## 8-byte Spill
	jmp	LBB127_3
LBB127_2:
	movq	-16(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
	shlq	$12, %rax
	subq	$1, %rax
	movq	%rax, -24(%rbp)         ## 8-byte Spill
LBB127_3:
	movq	-24(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc
	.weak_definition	__ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc
	.p2align	4, 0x90
__ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEE9push_backERKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rsi, -48(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE12__back_spareEv
	cmpq	$0, %rax
	jne	LBB128_2
## %bb.1:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv
LBB128_2:
	movq	-24(%rbp), %rdi
	movq	-48(%rbp), %rax         ## 8-byte Reload
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE3endEv
	movq	%rax, -40(%rbp)
	movq	%rdx, -32(%rbp)
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__116__deque_iteratorIcPcRcPS1_lLl4096EEdeEv
	movq	%rax, %rdi
	callq	__ZNSt3__1L9addressofIcEEPT_RS1_
	movq	-16(%rbp), %rdx
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE9constructIccEEvRS2_PT_RKT0_
	movq	-48(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	(%rax), %rdx
	addq	$1, %rdx
	movq	%rdx, (%rax)
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv ## -- Begin function _ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv
	.weak_definition	__ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv
	.p2align	4, 0x90
__ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv: ## @_ZNSt3__15dequeIcNS_9allocatorIcEEE19__add_back_capacityEv
Lfunc_begin10:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception10
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$272, %rsp              ## imm = 0x110
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, %rax
	movq	%rdi, -184(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt3__112__deque_baseIcNS_9allocatorIcEEE7__allocEv
	movq	%rax, -16(%rbp)
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNKSt3__15dequeIcNS_9allocatorIcEEE13__front_spareEv
	cmpq	$4096, %rax             ## imm = 0x1000
	jb	LBB129_2
## %bb.1:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	32(%rax), %rcx
	subq	$4096, %rcx             ## imm = 0x1000
	movq	%rcx, 32(%rax)
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	leaq	-24(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_
	jmp	LBB129_26
LBB129_2:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -192(%rbp)        ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv
	movq	-192(%rbp), %rdi        ## 8-byte Reload
	cmpq	%rax, %rdi
	jae	LBB129_7
## %bb.3:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE12__back_spareEv
	cmpq	$0, %rax
	je	LBB129_5
## %bb.4:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	-16(%rbp), %rdi
	movl	$4096, %esi             ## imm = 0x1000
	movq	%rax, -200(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m
	movq	%rax, -32(%rbp)
	movq	-200(%rbp), %rdi        ## 8-byte Reload
	leaq	-32(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_
	jmp	LBB129_6
LBB129_5:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	-16(%rbp), %rdi
	movl	$4096, %esi             ## imm = 0x1000
	movq	%rax, -208(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m
	movq	%rax, -40(%rbp)
	movq	-208(%rbp), %rdi        ## 8-byte Reload
	leaq	-40(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5frontEv
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9pop_frontEv
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	leaq	-48(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_
LBB129_6:
	jmp	LBB129_25
LBB129_7:
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE8capacityEv
	addq	%rax, %rax
	movq	%rax, -96(%rbp)
	movq	$1, -104(%rbp)
	leaq	-96(%rbp), %rdi
	leaq	-104(%rbp), %rsi
	callq	__ZNSt3__1L3maxImEERKT_S3_S3_
	movq	(%rax), %rsi
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	movq	%rsi, -216(%rbp)        ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE4sizeEv
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -224(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	leaq	-88(%rbp), %rdi
	movq	-216(%rbp), %rsi        ## 8-byte Reload
	movq	-224(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	movq	-16(%rbp), %rdi
Ltmp74:
	movl	$4096, %esi             ## imm = 0x1000
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m
Ltmp75:
	movq	%rax, -232(%rbp)        ## 8-byte Spill
	jmp	LBB129_8
LBB129_8:
	movq	-16(%rbp), %rsi
	leaq	-160(%rbp), %rdi
	movl	$4096, %edx             ## imm = 0x1000
	callq	__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC1ERS2_m
	movq	-160(%rbp), %rdx
	movq	-152(%rbp), %rcx
Ltmp76:
	leaq	-128(%rbp), %rdi
	movq	-232(%rbp), %rsi        ## 8-byte Reload
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
Ltmp77:
	jmp	LBB129_9
LBB129_9:
	leaq	-128(%rbp), %rdi
	callq	__ZNKSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE3getEv
	movq	%rax, -168(%rbp)
Ltmp78:
	leaq	-88(%rbp), %rdi
	leaq	-168(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9push_backERKS1_
Ltmp79:
	jmp	LBB129_10
LBB129_10:
	leaq	-128(%rbp), %rdi
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE7releaseEv
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -240(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE3endEv
	movq	%rax, -176(%rbp)
LBB129_11:                              ## =>This Inner Loop Header: Depth=1
	movq	-176(%rbp), %rax
	movq	-184(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, %rdi
	movq	%rax, -248(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE5beginEv
	movq	-248(%rbp), %rcx        ## 8-byte Reload
	cmpq	%rax, %rcx
	je	LBB129_16
## %bb.12:                              ##   in Loop: Header=BB129_11 Depth=1
	movq	-176(%rbp), %rax
	addq	$-8, %rax
	movq	%rax, -176(%rbp)
Ltmp91:
	leaq	-88(%rbp), %rdi
	movq	%rax, %rsi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_
Ltmp92:
	jmp	LBB129_13
LBB129_13:                              ##   in Loop: Header=BB129_11 Depth=1
	jmp	LBB129_11
LBB129_14:
Ltmp90:
	movl	%edx, %ecx
	movq	%rax, -136(%rbp)
	movl	%ecx, -140(%rbp)
	jmp	LBB129_23
LBB129_15:
Ltmp93:
	movl	%edx, %ecx
	movq	%rax, -136(%rbp)
	movl	%ecx, -140(%rbp)
Ltmp94:
	leaq	-128(%rbp), %rdi
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED1Ev
Ltmp95:
	jmp	LBB129_22
LBB129_16:
Ltmp80:
	leaq	-88(%rbp), %rsi
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp81:
	jmp	LBB129_17
LBB129_17:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	addq	$8, %rax
	leaq	-80(%rbp), %rsi
Ltmp82:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp83:
	jmp	LBB129_18
LBB129_18:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	addq	$16, %rax
	leaq	-72(%rbp), %rsi
Ltmp84:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp85:
	jmp	LBB129_19
LBB129_19:
	movq	-184(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	leaq	-88(%rbp), %rdi
	movq	%rax, -256(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
Ltmp86:
	movq	-256(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp87:
	jmp	LBB129_20
LBB129_20:
Ltmp88:
	leaq	-128(%rbp), %rdi
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED1Ev
Ltmp89:
	jmp	LBB129_21
LBB129_21:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	jmp	LBB129_25
LBB129_22:
	jmp	LBB129_23
LBB129_23:
Ltmp96:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
Ltmp97:
	jmp	LBB129_24
LBB129_24:
	jmp	LBB129_27
LBB129_25:
	jmp	LBB129_26
LBB129_26:
	addq	$272, %rsp              ## imm = 0x110
	popq	%rbp
	retq
LBB129_27:
	movq	-136(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB129_28:
Ltmp98:
	movq	%rax, %rdi
	movq	%rdx, -264(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end10:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table129:
Lexception10:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase10-Lttbaseref10
Lttbaseref10:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end10-Lcst_begin10
Lcst_begin10:
	.uleb128 Lfunc_begin10-Lfunc_begin10 ## >> Call Site 1 <<
	.uleb128 Ltmp74-Lfunc_begin10   ##   Call between Lfunc_begin10 and Ltmp74
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp74-Lfunc_begin10   ## >> Call Site 2 <<
	.uleb128 Ltmp77-Ltmp74          ##   Call between Ltmp74 and Ltmp77
	.uleb128 Ltmp90-Lfunc_begin10   ##     jumps to Ltmp90
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp78-Lfunc_begin10   ## >> Call Site 3 <<
	.uleb128 Ltmp92-Ltmp78          ##   Call between Ltmp78 and Ltmp92
	.uleb128 Ltmp93-Lfunc_begin10   ##     jumps to Ltmp93
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp94-Lfunc_begin10   ## >> Call Site 4 <<
	.uleb128 Ltmp95-Ltmp94          ##   Call between Ltmp94 and Ltmp95
	.uleb128 Ltmp98-Lfunc_begin10   ##     jumps to Ltmp98
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp80-Lfunc_begin10   ## >> Call Site 5 <<
	.uleb128 Ltmp87-Ltmp80          ##   Call between Ltmp80 and Ltmp87
	.uleb128 Ltmp93-Lfunc_begin10   ##     jumps to Ltmp93
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp88-Lfunc_begin10   ## >> Call Site 6 <<
	.uleb128 Ltmp89-Ltmp88          ##   Call between Ltmp88 and Ltmp89
	.uleb128 Ltmp90-Lfunc_begin10   ##     jumps to Ltmp90
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp89-Lfunc_begin10   ## >> Call Site 7 <<
	.uleb128 Ltmp96-Ltmp89          ##   Call between Ltmp89 and Ltmp96
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp96-Lfunc_begin10   ## >> Call Site 8 <<
	.uleb128 Ltmp97-Ltmp96          ##   Call between Ltmp96 and Ltmp97
	.uleb128 Ltmp98-Lfunc_begin10   ##     jumps to Ltmp98
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp97-Lfunc_begin10   ## >> Call Site 9 <<
	.uleb128 Lfunc_end10-Ltmp97     ##   Call between Ltmp97 and Lfunc_end10
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end10:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase10:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE9constructIccEEvRS2_PT_RKT0_
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE9constructIccEEvRS2_PT_RKT0_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE9constructIccEEvRS2_PT_RKT0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE11__constructIccEEvNS_17integral_constantIbLb1EEERS2_PT_RKT0_
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15dequeIcNS_9allocatorIcEEE13__front_spareEv
__ZNKSt3__15dequeIcNS_9allocatorIcEEE13__front_spareEv: ## @_ZNKSt3__15dequeIcNS_9allocatorIcEEE13__front_spareEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	32(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9push_backERKS1_
Lfunc_begin11:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception11
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	16(%rsi), %rdi
	movq	%rdi, -128(%rbp)        ## 8-byte Spill
	movq	%rsi, %rdi
	movq	%rsi, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	-128(%rbp), %rsi        ## 8-byte Reload
	cmpq	(%rax), %rsi
	jne	LBB132_14
## %bb.1:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	cmpq	(%rax), %rcx
	jbe	LBB132_3
## %bb.2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	-136(%rbp), %rdx        ## 8-byte Reload
	movq	8(%rdx), %rsi
	movq	(%rdx), %rdi
	subq	%rdi, %rsi
	sarq	$3, %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	addq	$1, %rsi
	movq	%rsi, %rax
	cqto
	movl	$2, %esi
	idivq	%rsi
	movq	%rax, -24(%rbp)
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rdi
	movq	16(%rax), %rsi
	movq	8(%rax), %r8
	subq	-24(%rbp), %rcx
	shlq	$3, %rcx
	addq	%rcx, %r8
	movq	%r8, %rdx
	callq	__ZNSt3__1L4moveIPPcS2_EET0_T_S4_S3_
	xorl	%r9d, %r9d
	movl	%r9d, %ecx
	movq	-136(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, 16(%rdx)
	movq	-24(%rbp), %rax
	movq	8(%rdx), %rsi
	subq	%rax, %rcx
	shlq	$3, %rcx
	addq	%rcx, %rsi
	movq	%rsi, 8(%rdx)
	jmp	LBB132_13
LBB132_3:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$2, %rax
	movq	%rax, -40(%rbp)
	movq	$1, -48(%rbp)
	leaq	-40(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	callq	__ZNSt3__1L3maxImEERKT_S3_S3_
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	shrq	$2, %rcx
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rcx, -152(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	leaq	-88(%rbp), %rdi
	movq	-144(%rbp), %rsi        ## 8-byte Reload
	movq	-152(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rsi
Ltmp99:
	leaq	-96(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp100:
	jmp	LBB132_4
LBB132_4:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
Ltmp101:
	leaq	-120(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp102:
	jmp	LBB132_5
LBB132_5:
	movq	-96(%rbp), %rsi
	movq	-120(%rbp), %rdx
Ltmp103:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
Ltmp104:
	jmp	LBB132_6
LBB132_6:
Ltmp105:
	leaq	-88(%rbp), %rsi
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp106:
	jmp	LBB132_7
LBB132_7:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	addq	$8, %rax
	leaq	-80(%rbp), %rsi
Ltmp107:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp108:
	jmp	LBB132_8
LBB132_8:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	addq	$16, %rax
	leaq	-72(%rbp), %rsi
Ltmp109:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp110:
	jmp	LBB132_9
LBB132_9:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	leaq	-88(%rbp), %rdi
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
Ltmp111:
	movq	-160(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp112:
	jmp	LBB132_10
LBB132_10:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	jmp	LBB132_13
LBB132_11:
Ltmp113:
	movl	%edx, %ecx
	movq	%rax, -104(%rbp)
	movl	%ecx, -108(%rbp)
Ltmp114:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
Ltmp115:
	jmp	LBB132_12
LBB132_12:
	jmp	LBB132_15
LBB132_13:
	jmp	LBB132_14
LBB132_14:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	16(%rdi), %rdi
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	movq	-16(%rbp), %rdx
	movq	-168(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rdx
	addq	$8, %rdx
	movq	%rdx, 16(%rax)
	addq	$176, %rsp
	popq	%rbp
	retq
LBB132_15:
	movq	-104(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB132_16:
Ltmp116:
	movq	%rax, %rdi
	movq	%rdx, -176(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end11:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table132:
Lexception11:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase11-Lttbaseref11
Lttbaseref11:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end11-Lcst_begin11
Lcst_begin11:
	.uleb128 Lfunc_begin11-Lfunc_begin11 ## >> Call Site 1 <<
	.uleb128 Ltmp99-Lfunc_begin11   ##   Call between Lfunc_begin11 and Ltmp99
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp99-Lfunc_begin11   ## >> Call Site 2 <<
	.uleb128 Ltmp112-Ltmp99         ##   Call between Ltmp99 and Ltmp112
	.uleb128 Ltmp113-Lfunc_begin11  ##     jumps to Ltmp113
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp112-Lfunc_begin11  ## >> Call Site 3 <<
	.uleb128 Ltmp114-Ltmp112        ##   Call between Ltmp112 and Ltmp114
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp114-Lfunc_begin11  ## >> Call Site 4 <<
	.uleb128 Ltmp115-Ltmp114        ##   Call between Ltmp114 and Ltmp115
	.uleb128 Ltmp116-Lfunc_begin11  ##     jumps to Ltmp116
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp115-Lfunc_begin11  ## >> Call Site 5 <<
	.uleb128 Lfunc_end11-Ltmp115    ##   Call between Ltmp115 and Lfunc_end11
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end11:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase11:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE12__back_spareEv
__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE12__back_spareEv: ## @_ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE12__back_spareEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	16(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$3, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE8allocateERS2_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%eax, %edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__19allocatorIcE8allocateEmPKv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_ ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_
	.weak_definition	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE10push_frontERKS1_
Lfunc_begin12:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception12
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	8(%rsi), %rdi
	cmpq	(%rsi), %rdi
	movq	%rsi, -128(%rbp)        ## 8-byte Spill
	jne	LBB135_14
## %bb.1:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rcx
	movq	%rax, %rdi
	movq	%rcx, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	-136(%rbp), %rcx        ## 8-byte Reload
	cmpq	(%rax), %rcx
	jae	LBB135_3
## %bb.2:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	16(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	cqto
	movl	$2, %ecx
	idivq	%rcx
	movq	%rax, -24(%rbp)
	movq	8(%rdi), %rdi
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
	movq	16(%rax), %rcx
	movq	-24(%rbp), %r8
	shlq	$3, %r8
	addq	%r8, %rcx
	movq	%rcx, %rdx
	callq	__ZNSt3__1L13move_backwardIPPcS2_EET0_T_S4_S3_
	movq	-128(%rbp), %rcx        ## 8-byte Reload
	movq	%rax, 8(%rcx)
	movq	-24(%rbp), %rax
	shlq	$3, %rax
	addq	16(%rcx), %rax
	movq	%rax, 16(%rcx)
	jmp	LBB135_13
LBB135_3:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$2, %rax
	movq	%rax, -40(%rbp)
	movq	$1, -48(%rbp)
	leaq	-40(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	callq	__ZNSt3__1L3maxImEERKT_S3_S3_
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	addq	$3, %rcx
	shrq	$2, %rcx
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rcx, -152(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	leaq	-88(%rbp), %rdi
	movq	-144(%rbp), %rsi        ## 8-byte Reload
	movq	-152(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rsi
Ltmp117:
	leaq	-96(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp118:
	jmp	LBB135_4
LBB135_4:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
Ltmp119:
	leaq	-120(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp120:
	jmp	LBB135_5
LBB135_5:
	movq	-96(%rbp), %rsi
	movq	-120(%rbp), %rdx
Ltmp121:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
Ltmp122:
	jmp	LBB135_6
LBB135_6:
Ltmp123:
	leaq	-88(%rbp), %rsi
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp124:
	jmp	LBB135_7
LBB135_7:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	addq	$8, %rax
	leaq	-80(%rbp), %rsi
Ltmp125:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp126:
	jmp	LBB135_8
LBB135_8:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	addq	$16, %rax
	leaq	-72(%rbp), %rsi
Ltmp127:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp128:
	jmp	LBB135_9
LBB135_9:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	leaq	-88(%rbp), %rdi
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
Ltmp129:
	movq	-160(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp130:
	jmp	LBB135_10
LBB135_10:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	jmp	LBB135_13
LBB135_11:
Ltmp131:
	movl	%edx, %ecx
	movq	%rax, -104(%rbp)
	movl	%ecx, -108(%rbp)
Ltmp132:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
Ltmp133:
	jmp	LBB135_12
LBB135_12:
	jmp	LBB135_15
LBB135_13:
	jmp	LBB135_14
LBB135_14:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE7__allocEv
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	8(%rdi), %rcx
	addq	$-8, %rcx
	movq	%rcx, %rdi
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	movq	-16(%rbp), %rdx
	movq	-168(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	addq	$-8, %rcx
	movq	%rcx, 8(%rax)
	addq	$176, %rsp
	popq	%rbp
	retq
LBB135_15:
	movq	-104(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB135_16:
Ltmp134:
	movq	%rax, %rdi
	movq	%rdx, -176(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end12:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table135:
Lexception12:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase12-Lttbaseref12
Lttbaseref12:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end12-Lcst_begin12
Lcst_begin12:
	.uleb128 Lfunc_begin12-Lfunc_begin12 ## >> Call Site 1 <<
	.uleb128 Ltmp117-Lfunc_begin12  ##   Call between Lfunc_begin12 and Ltmp117
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp117-Lfunc_begin12  ## >> Call Site 2 <<
	.uleb128 Ltmp130-Ltmp117        ##   Call between Ltmp117 and Ltmp130
	.uleb128 Ltmp131-Lfunc_begin12  ##     jumps to Ltmp131
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp130-Lfunc_begin12  ## >> Call Site 3 <<
	.uleb128 Ltmp132-Ltmp130        ##   Call between Ltmp130 and Ltmp132
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp132-Lfunc_begin12  ## >> Call Site 4 <<
	.uleb128 Ltmp133-Ltmp132        ##   Call between Ltmp132 and Ltmp133
	.uleb128 Ltmp134-Lfunc_begin12  ##     jumps to Ltmp134
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp133-Lfunc_begin12  ## >> Call Site 5 <<
	.uleb128 Lfunc_end12-Ltmp133    ##   Call between Ltmp133 and Lfunc_end12
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end12:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase12:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L3maxImEERKT_S3_S3_
__ZNSt3__1L3maxImEERKT_S3_S3_:          ## @_ZNSt3__1L3maxImEERKT_S3_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__1L3maxImNS_6__lessImmEEEERKT_S5_S5_T0_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_ ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC1ERS2_m
__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC1ERS2_m: ## @_ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC1ERS2_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC2ERS2_m
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdx, -16(%rbp)
	movq	%rcx, -8(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rsi
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rcx
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9push_backERKS1_
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9push_backERKS1_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9push_backERKS1_
Lfunc_begin13:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception13
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	16(%rsi), %rdi
	movq	%rdi, -128(%rbp)        ## 8-byte Spill
	movq	%rsi, %rdi
	movq	%rsi, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	-128(%rbp), %rsi        ## 8-byte Reload
	cmpq	(%rax), %rsi
	jne	LBB140_14
## %bb.1:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	cmpq	(%rax), %rcx
	jbe	LBB140_3
## %bb.2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	-136(%rbp), %rdx        ## 8-byte Reload
	movq	8(%rdx), %rsi
	movq	(%rdx), %rdi
	subq	%rdi, %rsi
	sarq	$3, %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rsi
	addq	$1, %rsi
	movq	%rsi, %rax
	cqto
	movl	$2, %esi
	idivq	%rsi
	movq	%rax, -24(%rbp)
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rdi
	movq	16(%rax), %rsi
	movq	8(%rax), %r8
	subq	-24(%rbp), %rcx
	shlq	$3, %rcx
	addq	%rcx, %r8
	movq	%r8, %rdx
	callq	__ZNSt3__1L4moveIPPcS2_EET0_T_S4_S3_
	xorl	%r9d, %r9d
	movl	%r9d, %ecx
	movq	-136(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, 16(%rdx)
	movq	-24(%rbp), %rax
	movq	8(%rdx), %rsi
	subq	%rax, %rcx
	shlq	$3, %rcx
	addq	%rcx, %rsi
	movq	%rsi, 8(%rdx)
	jmp	LBB140_13
LBB140_3:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$2, %rax
	movq	%rax, -40(%rbp)
	movq	$1, -48(%rbp)
	leaq	-40(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	callq	__ZNSt3__1L3maxImEERKT_S3_S3_
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	shrq	$2, %rcx
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rcx, -152(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	leaq	-88(%rbp), %rdi
	movq	-144(%rbp), %rsi        ## 8-byte Reload
	movq	-152(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rsi
Ltmp135:
	leaq	-96(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp136:
	jmp	LBB140_4
LBB140_4:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
Ltmp137:
	leaq	-120(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp138:
	jmp	LBB140_5
LBB140_5:
	movq	-96(%rbp), %rsi
	movq	-120(%rbp), %rdx
Ltmp139:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
Ltmp140:
	jmp	LBB140_6
LBB140_6:
Ltmp141:
	leaq	-88(%rbp), %rsi
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp142:
	jmp	LBB140_7
LBB140_7:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	addq	$8, %rax
	leaq	-80(%rbp), %rsi
Ltmp143:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp144:
	jmp	LBB140_8
LBB140_8:
	movq	-136(%rbp), %rax        ## 8-byte Reload
	addq	$16, %rax
	leaq	-72(%rbp), %rsi
Ltmp145:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp146:
	jmp	LBB140_9
LBB140_9:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	leaq	-88(%rbp), %rdi
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
Ltmp147:
	movq	-160(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp148:
	jmp	LBB140_10
LBB140_10:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	jmp	LBB140_13
LBB140_11:
Ltmp149:
	movl	%edx, %ecx
	movq	%rax, -104(%rbp)
	movl	%ecx, -108(%rbp)
Ltmp150:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
Ltmp151:
	jmp	LBB140_12
LBB140_12:
	jmp	LBB140_15
LBB140_13:
	jmp	LBB140_14
LBB140_14:
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	-136(%rbp), %rdi        ## 8-byte Reload
	movq	16(%rdi), %rdi
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	movq	-16(%rbp), %rdx
	movq	-168(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	movq	-136(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rdx
	addq	$8, %rdx
	movq	%rdx, 16(%rax)
	addq	$176, %rsp
	popq	%rbp
	retq
LBB140_15:
	movq	-104(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB140_16:
Ltmp152:
	movq	%rax, %rdi
	movq	%rdx, -176(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end13:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table140:
Lexception13:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase13-Lttbaseref13
Lttbaseref13:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end13-Lcst_begin13
Lcst_begin13:
	.uleb128 Lfunc_begin13-Lfunc_begin13 ## >> Call Site 1 <<
	.uleb128 Ltmp135-Lfunc_begin13  ##   Call between Lfunc_begin13 and Ltmp135
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp135-Lfunc_begin13  ## >> Call Site 2 <<
	.uleb128 Ltmp148-Ltmp135        ##   Call between Ltmp135 and Ltmp148
	.uleb128 Ltmp149-Lfunc_begin13  ##     jumps to Ltmp149
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp148-Lfunc_begin13  ## >> Call Site 3 <<
	.uleb128 Ltmp150-Ltmp148        ##   Call between Ltmp148 and Ltmp150
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp150-Lfunc_begin13  ## >> Call Site 4 <<
	.uleb128 Ltmp151-Ltmp150        ##   Call between Ltmp150 and Ltmp151
	.uleb128 Ltmp152-Lfunc_begin13  ##     jumps to Ltmp152
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp151-Lfunc_begin13  ## >> Call Site 5 <<
	.uleb128 Lfunc_end13-Ltmp151    ##   Call between Ltmp151 and Lfunc_end13
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end13:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase13:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE3getEv
__ZNKSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE3getEv: ## @_ZNKSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE3getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE7releaseEv
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE7releaseEv: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE7releaseEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	movq	$0, (%rax)
	movq	-16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_ ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_
	.weak_definition	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE10push_frontERKS1_
Lfunc_begin14:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception14
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$176, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	8(%rsi), %rdi
	cmpq	(%rsi), %rdi
	movq	%rsi, -128(%rbp)        ## 8-byte Spill
	jne	LBB143_14
## %bb.1:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rcx
	movq	%rax, %rdi
	movq	%rcx, -136(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	-136(%rbp), %rcx        ## 8-byte Reload
	cmpq	(%rax), %rcx
	jae	LBB143_3
## %bb.2:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	16(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	cqto
	movl	$2, %ecx
	idivq	%rcx
	movq	%rax, -24(%rbp)
	movq	8(%rdi), %rdi
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
	movq	16(%rax), %rcx
	movq	-24(%rbp), %r8
	shlq	$3, %r8
	addq	%r8, %rcx
	movq	%rcx, %rdx
	callq	__ZNSt3__1L13move_backwardIPPcS2_EET0_T_S4_S3_
	movq	-128(%rbp), %rcx        ## 8-byte Reload
	movq	%rax, 8(%rcx)
	movq	-24(%rbp), %rax
	shlq	$3, %rax
	addq	16(%rcx), %rax
	movq	%rax, 16(%rcx)
	jmp	LBB143_13
LBB143_3:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$2, %rax
	movq	%rax, -40(%rbp)
	movq	$1, -48(%rbp)
	leaq	-40(%rbp), %rdi
	leaq	-48(%rbp), %rsi
	callq	__ZNSt3__1L3maxImEERKT_S3_S3_
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	addq	$3, %rcx
	shrq	$2, %rcx
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, -144(%rbp)        ## 8-byte Spill
	movq	%rcx, -152(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	leaq	-88(%rbp), %rdi
	movq	-144(%rbp), %rsi        ## 8-byte Reload
	movq	-152(%rbp), %rdx        ## 8-byte Reload
	movq	%rax, %rcx
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC1EmmS4_
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rsi
Ltmp153:
	leaq	-96(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp154:
	jmp	LBB143_4
LBB143_4:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	16(%rax), %rsi
Ltmp155:
	leaq	-120(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEC1ES2_
Ltmp156:
	jmp	LBB143_5
LBB143_5:
	movq	-96(%rbp), %rsi
	movq	-120(%rbp), %rdx
Ltmp157:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
Ltmp158:
	jmp	LBB143_6
LBB143_6:
Ltmp159:
	leaq	-88(%rbp), %rsi
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp160:
	jmp	LBB143_7
LBB143_7:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	addq	$8, %rax
	leaq	-80(%rbp), %rsi
Ltmp161:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp162:
	jmp	LBB143_8
LBB143_8:
	movq	-128(%rbp), %rax        ## 8-byte Reload
	addq	$16, %rax
	leaq	-72(%rbp), %rsi
Ltmp163:
	movq	%rax, %rdi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp164:
	jmp	LBB143_9
LBB143_9:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	leaq	-88(%rbp), %rdi
	movq	%rax, -160(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
Ltmp165:
	movq	-160(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__1L4swapIPPcEEvRT_S4_
Ltmp166:
	jmp	LBB143_10
LBB143_10:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	jmp	LBB143_13
LBB143_11:
Ltmp167:
	movl	%edx, %ecx
	movq	%rax, -104(%rbp)
	movl	%ecx, -108(%rbp)
Ltmp168:
	leaq	-88(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
Ltmp169:
	jmp	LBB143_12
LBB143_12:
	jmp	LBB143_15
LBB143_13:
	jmp	LBB143_14
LBB143_14:
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	-128(%rbp), %rdi        ## 8-byte Reload
	movq	8(%rdi), %rcx
	addq	$-8, %rcx
	movq	%rcx, %rdi
	movq	%rax, -168(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	movq	-16(%rbp), %rdx
	movq	-168(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	movq	-128(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	addq	$-8, %rcx
	movq	%rcx, 8(%rax)
	addq	$176, %rsp
	popq	%rbp
	retq
LBB143_15:
	movq	-104(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB143_16:
Ltmp170:
	movq	%rax, %rdi
	movq	%rdx, -176(%rbp)        ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end14:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table143:
Lexception14:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase14-Lttbaseref14
Lttbaseref14:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end14-Lcst_begin14
Lcst_begin14:
	.uleb128 Lfunc_begin14-Lfunc_begin14 ## >> Call Site 1 <<
	.uleb128 Ltmp153-Lfunc_begin14  ##   Call between Lfunc_begin14 and Ltmp153
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp153-Lfunc_begin14  ## >> Call Site 2 <<
	.uleb128 Ltmp166-Ltmp153        ##   Call between Ltmp153 and Ltmp166
	.uleb128 Ltmp167-Lfunc_begin14  ##     jumps to Ltmp167
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp166-Lfunc_begin14  ## >> Call Site 3 <<
	.uleb128 Ltmp168-Ltmp166        ##   Call between Ltmp166 and Ltmp168
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp168-Lfunc_begin14  ## >> Call Site 4 <<
	.uleb128 Ltmp169-Ltmp168        ##   Call between Ltmp168 and Ltmp169
	.uleb128 Ltmp170-Lfunc_begin14  ##     jumps to Ltmp170
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp169-Lfunc_begin14  ## >> Call Site 5 <<
	.uleb128 Lfunc_end14-Ltmp169    ##   Call between Ltmp169 and Lfunc_end14
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end14:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase14:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4swapIPPcEEvRT_S4_
__ZNSt3__1L4swapIPPcEEvRT_S4_:          ## @_ZNSt3__1L4swapIPPcEEvRT_S4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__1L4moveIPPcEERT_S4_
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rdi
	callq	__ZNSt3__1L4moveIPPcEERT_S4_
	movq	(%rax), %rax
	movq	-8(%rbp), %rsi
	movq	%rax, (%rsi)
	leaq	-24(%rbp), %rdi
	callq	__ZNSt3__1L4moveIPPcEERT_S4_
	movq	(%rax), %rax
	movq	-16(%rbp), %rsi
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
__ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv: ## @_ZNSt3__114__split_bufferIPcNS_9allocatorIS1_EEE9__end_capEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED1Ev
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED1Ev: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4moveIPPcS2_EET0_T_S4_S3_
__ZNSt3__1L4moveIPPcS2_EET0_T_S4_S3_:   ## @_ZNSt3__1L4moveIPPcS2_EET0_T_S4_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-24(%rbp), %rdi
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movq	-40(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__1L6__moveIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_ ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
	.weak_definition	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE18__construct_at_endINS_13move_iteratorIPS1_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESB_SB_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rsi, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rdi
	movq	%rdx, -40(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	%rax, -32(%rbp)
LBB150_1:                               ## =>This Inner Loop Header: Depth=1
	leaq	-8(%rbp), %rdi
	leaq	-16(%rbp), %rsi
	callq	__ZNSt3__1neIPPcS2_EEbRKNS_13move_iteratorIT_EERKNS3_IT0_EE
	testb	$1, %al
	jne	LBB150_2
	jmp	LBB150_4
LBB150_2:                               ##   in Loop: Header=BB150_1 Depth=1
	movq	-32(%rbp), %rdi
	movq	-40(%rbp), %rax         ## 8-byte Reload
	movq	16(%rax), %rcx
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
	leaq	-8(%rbp), %rdi
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__113move_iteratorIPPcEdeEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	-56(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	movq	-40(%rbp), %rax         ## 8-byte Reload
	movq	16(%rax), %rcx
	addq	$8, %rcx
	movq	%rcx, 16(%rax)
## %bb.3:                               ##   in Loop: Header=BB150_1 Depth=1
	leaq	-8(%rbp), %rdi
	callq	__ZNSt3__113move_iteratorIPPcEppEv
	movq	%rax, -64(%rbp)         ## 8-byte Spill
	jmp	LBB150_1
LBB150_4:
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__113move_iteratorIPPcEC1ES2_
__ZNSt3__113move_iteratorIPPcEC1ES2_:   ## @_ZNSt3__113move_iteratorIPPcEC1ES2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__113move_iteratorIPPcEC2ES2_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE9constructIS2_S2_EEvRS3_PT_RKT0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE11__constructIS2_S2_EEvNS_17integral_constantIbLb1EEERS3_PT_RKT0_
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L6__moveIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
__ZNSt3__1L6__moveIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_: ## @_ZNSt3__1L6__moveIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rsi
	subq	%rsi, %rdx
	sarq	$3, %rdx
	movq	%rdx, -32(%rbp)
	cmpq	$0, -32(%rbp)
	jbe	LBB153_2
## %bb.1:
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rcx
	movq	-32(%rbp), %rdx
	shlq	$3, %rdx
	movq	%rax, %rdi
	movq	%rcx, %rsi
	callq	_memmove
	movq	%rax, -40(%rbp)         ## 8-byte Spill
LBB153_2:
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rcx
	shlq	$3, %rcx
	addq	%rcx, %rax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L13__unwrap_iterIPPcEET_S3_
__ZNSt3__1L13__unwrap_iterIPPcEET_S3_:  ## @_ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE6secondEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1neIPPcS2_EEbRKNS_13move_iteratorIT_EERKNS3_IT0_EE
__ZNSt3__1neIPPcS2_EEbRKNS_13move_iteratorIT_EERKNS3_IT0_EE: ## @_ZNSt3__1neIPPcS2_EEbRKNS_13move_iteratorIT_EERKNS3_IT0_EE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__113move_iteratorIPPcE4baseEv
	movq	-16(%rbp), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__113move_iteratorIPPcE4baseEv
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	cmpq	%rax, %rsi
	setne	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__113move_iteratorIPPcEdeEv
__ZNKSt3__113move_iteratorIPPcEdeEv:    ## @_ZNKSt3__113move_iteratorIPPcEdeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__113move_iteratorIPPcEppEv
__ZNSt3__113move_iteratorIPPcEppEv:     ## @_ZNSt3__113move_iteratorIPPcEppEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	addq	$8, %rax
	movq	%rax, (%rdi)
	movq	%rdi, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE6secondEv
__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE6secondEv: ## @_ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE6secondEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$8, %rdi
	callq	__ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__113move_iteratorIPPcE4baseEv
__ZNKSt3__113move_iteratorIPPcE4baseEv: ## @_ZNKSt3__113move_iteratorIPPcE4baseEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	(%rdi), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__113move_iteratorIPPcEC2ES2_
__ZNSt3__113move_iteratorIPPcEC2ES2_:   ## @_ZNSt3__113move_iteratorIPPcEC2ES2_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rdi, (%rsi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE11__constructIS2_S2_EEvNS_17integral_constantIbLb1EEERS3_PT_RKT0_
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE11__constructIS2_S2_EEvNS_17integral_constantIbLb1EEERS3_PT_RKT0_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE11__constructIS2_S2_EEvNS_17integral_constantIbLb1EEERS3_PT_RKT0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	movq	-32(%rbp), %rdx
	callq	__ZNSt3__19allocatorIPcE9constructIS1_EEvPS1_RKT_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIPcE9constructIS1_EEvPS1_RKT_
__ZNSt3__19allocatorIPcE9constructIS1_EEvPS1_RKT_: ## @_ZNSt3__19allocatorIPcE9constructIS1_EEvPS1_RKT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rsi, (%rdx)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIcE8allocateEmPKv
__ZNSt3__19allocatorIcE8allocateEmPKv:  ## @_ZNSt3__19allocatorIcE8allocateEmPKv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rdx
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__19allocatorIcE8max_sizeEv
	movq	-32(%rbp), %rdx         ## 8-byte Reload
	cmpq	%rax, %rdx
	jbe	LBB165_2
## %bb.1:
	leaq	L_.str.1(%rip), %rdi
	callq	__ZNSt3__1L20__throw_length_errorEPKc
LBB165_2:
	movq	-16(%rbp), %rax
	shlq	$0, %rax
	movq	%rax, %rdi
	movl	$1, %esi
	callq	__ZNSt3__1L17__libcpp_allocateEmm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__19allocatorIcE8max_sizeEv
__ZNKSt3__19allocatorIcE8max_sizeEv:    ## @_ZNKSt3__19allocatorIcE8max_sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	$-1, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L20__throw_length_errorEPKc
__ZNSt3__1L20__throw_length_errorEPKc:  ## @_ZNSt3__1L20__throw_length_errorEPKc
Lfunc_begin15:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception15
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	$16, %edi
	callq	___cxa_allocate_exception
	movq	%rax, %rdi
	movq	-8(%rbp), %rsi
Ltmp171:
	movq	%rdi, -32(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	__ZNSt12length_errorC1EPKc
Ltmp172:
	jmp	LBB167_1
LBB167_1:
	movq	__ZTISt12length_error@GOTPCREL(%rip), %rsi
	movq	__ZNSt12length_errorD1Ev@GOTPCREL(%rip), %rdx
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	callq	___cxa_throw
LBB167_2:
Ltmp173:
	movl	%edx, %ecx
	movq	%rax, -16(%rbp)
	movl	%ecx, -20(%rbp)
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	callq	___cxa_free_exception
## %bb.3:
	movq	-16(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
Lfunc_end15:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table167:
Lexception15:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	255                     ## @TType Encoding = omit
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end15-Lcst_begin15
Lcst_begin15:
	.uleb128 Lfunc_begin15-Lfunc_begin15 ## >> Call Site 1 <<
	.uleb128 Ltmp171-Lfunc_begin15  ##   Call between Lfunc_begin15 and Ltmp171
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp171-Lfunc_begin15  ## >> Call Site 2 <<
	.uleb128 Ltmp172-Ltmp171        ##   Call between Ltmp171 and Ltmp172
	.uleb128 Ltmp173-Lfunc_begin15  ##     jumps to Ltmp173
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp172-Lfunc_begin15  ## >> Call Site 3 <<
	.uleb128 Lfunc_end15-Ltmp172    ##   Call between Ltmp172 and Lfunc_end15
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end15:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L17__libcpp_allocateEmm
__ZNSt3__1L17__libcpp_allocateEmm:      ## @_ZNSt3__1L17__libcpp_allocateEmm
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	callq	__Znwm
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt12length_errorC1EPKc
__ZNSt12length_errorC1EPKc:             ## @_ZNSt12length_errorC1EPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt12length_errorC2EPKc
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt12length_errorC2EPKc
__ZNSt12length_errorC2EPKc:             ## @_ZNSt12length_errorC2EPKc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	movq	-16(%rbp), %rax
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	movq	%rax, %rsi
	callq	__ZNSt11logic_errorC2EPKc
	movq	__ZTVSt12length_error@GOTPCREL(%rip), %rax
	addq	$16, %rax
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L13move_backwardIPPcS2_EET0_T_S4_S3_
__ZNSt3__1L13move_backwardIPPcS2_EET0_T_S4_S3_: ## @_ZNSt3__1L13move_backwardIPPcS2_EET0_T_S4_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-16(%rbp), %rdi
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-24(%rbp), %rdi
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L13__unwrap_iterIPPcEET_S3_
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movq	-40(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__1L15__move_backwardIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L15__move_backwardIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
__ZNSt3__1L15__move_backwardIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_: ## @_ZNSt3__1L15__move_backwardIPcS1_EENS_9enable_ifIXaasr7is_sameINS_12remove_constIT_E4typeET0_EE5valuesr28is_trivially_copy_assignableIS7_EE5valueEPS7_E4typeEPS4_SB_S8_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rsi
	subq	%rsi, %rdx
	sarq	$3, %rdx
	movq	%rdx, -32(%rbp)
	cmpq	$0, -32(%rbp)
	jbe	LBB172_2
## %bb.1:
	xorl	%eax, %eax
	movl	%eax, %ecx
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rsi
	subq	%rdx, %rcx
	shlq	$3, %rcx
	addq	%rcx, %rsi
	movq	%rsi, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	-8(%rbp), %rdx
	movq	-32(%rbp), %rsi
	shlq	$3, %rsi
	movq	%rcx, %rdi
	movq	%rsi, -40(%rbp)         ## 8-byte Spill
	movq	%rdx, %rsi
	movq	-40(%rbp), %rdx         ## 8-byte Reload
	callq	_memmove
	movq	%rax, -48(%rbp)         ## 8-byte Spill
LBB172_2:
	movq	-24(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L3maxImNS_6__lessImmEEEERKT_S5_S5_T0_
__ZNSt3__1L3maxImNS_6__lessImmEEEERKT_S5_S5_T0_: ## @_ZNSt3__1L3maxImNS_6__lessImmEEEERKT_S5_S5_T0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	leaq	-8(%rbp), %rdi
	callq	__ZNKSt3__16__lessImmEclERKmS3_
	testb	$1, %al
	jne	LBB173_1
	jmp	LBB173_2
LBB173_1:
	movq	-24(%rbp), %rax
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	jmp	LBB173_3
LBB173_2:
	movq	-16(%rbp), %rax
	movq	%rax, -32(%rbp)         ## 8-byte Spill
LBB173_3:
	movq	-32(%rbp), %rax         ## 8-byte Reload
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__16__lessImmEclERKmS3_
__ZNKSt3__16__lessImmEclERKmS3_:        ## @_ZNKSt3__16__lessImmEclERKmS3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	-24(%rbp), %rsi
	cmpq	(%rsi), %rdx
	setb	%al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_ ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEEC2EmmS4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-8(%rbp), %rcx
	movq	%rcx, %rdx
	addq	$24, %rdx
	movq	%rcx, -56(%rbp)         ## 8-byte Spill
	movq	%rdx, -64(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -40(%rbp)
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	-32(%rbp), %rdx
	movq	-64(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC1ES2_S5_
	cmpq	$0, -16(%rbp)
	je	LBB175_2
## %bb.1:
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	-16(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE8allocateERS3_m
	movq	%rax, -72(%rbp)         ## 8-byte Spill
	jmp	LBB175_3
LBB175_2:
	callq	__ZNSt3__1L15__get_nullptr_tEv
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__19nullptr_tcvPT_IPcEEv
	movq	%rax, -72(%rbp)         ## 8-byte Spill
LBB175_3:
	movq	-72(%rbp), %rax         ## 8-byte Reload
	movq	-56(%rbp), %rcx         ## 8-byte Reload
	movq	%rax, (%rcx)
	movq	(%rcx), %rax
	movq	-24(%rbp), %rdx
	shlq	$3, %rdx
	addq	%rdx, %rax
	movq	%rax, 16(%rcx)
	movq	%rax, 8(%rcx)
	movq	(%rcx), %rax
	movq	-16(%rbp), %rdx
	shlq	$3, %rdx
	addq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, -80(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	-80(%rbp), %rcx         ## 8-byte Reload
	movq	%rcx, (%rax)
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC1ES2_S5_
__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC1ES2_S5_: ## @_ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC1ES2_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	-24(%rbp), %rdx
	callq	__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC2ES2_S5_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIPcEEE8allocateERS3_m
__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE8allocateERS3_m: ## @_ZNSt3__116allocator_traitsINS_9allocatorIPcEEE8allocateERS3_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%eax, %edx
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__19allocatorIPcE8allocateEmPKv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC2ES2_S5_
__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC2ES2_S5_: ## @_ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEEC2ES2_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	%rdx, %rsi
	leaq	-16(%rbp), %rdi
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	movq	%rsi, -40(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIPPcEERT_RNS_16remove_referenceIS3_E4typeE
	movq	(%rax), %rsi
	movq	-40(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EEC2ES2_
	movq	-32(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-24(%rbp), %rdi
	movq	%rax, -48(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIRNS_9allocatorIPcEEEERT_RNS_16remove_referenceIS5_E4typeE
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EEC2ES4_
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L7forwardIRNS_9allocatorIPcEEEERT_RNS_16remove_referenceIS5_E4typeE
__ZNSt3__1L7forwardIRNS_9allocatorIPcEEEERT_RNS_16remove_referenceIS5_E4typeE: ## @_ZNSt3__1L7forwardIRNS_9allocatorIPcEEEERT_RNS_16remove_referenceIS5_E4typeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EEC2ES4_
__ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EEC2ES4_: ## @_ZNSt3__122__compressed_pair_elemIRNS_9allocatorIPcEELi1ELb0EEC2ES4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIRNS_9allocatorIPcEEEERT_RNS_16remove_referenceIS5_E4typeE
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIPcE8allocateEmPKv
__ZNSt3__19allocatorIPcE8allocateEmPKv: ## @_ZNSt3__19allocatorIPcE8allocateEmPKv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rdx
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__19allocatorIPcE8max_sizeEv
	movq	-32(%rbp), %rdx         ## 8-byte Reload
	cmpq	%rax, %rdx
	jbe	LBB181_2
## %bb.1:
	leaq	L_.str.1(%rip), %rdi
	callq	__ZNSt3__1L20__throw_length_errorEPKc
LBB181_2:
	movq	-16(%rbp), %rax
	shlq	$3, %rax
	movq	%rax, %rdi
	movl	$8, %esi
	callq	__ZNSt3__1L17__libcpp_allocateEmm
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__19allocatorIPcE8max_sizeEv
__ZNKSt3__19allocatorIPcE8max_sizeEv:   ## @_ZNKSt3__19allocatorIPcE8max_sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movabsq	$2305843009213693951, %rax ## imm = 0x1FFFFFFFFFFFFFFF
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC2ERS2_m
__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC2ERS2_m: ## @_ZNSt3__122__allocator_destructorINS_9allocatorIcEEEC2ERS2_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	%rsi, (%rdx)
	movq	-24(%rbp), %rsi
	movq	%rsi, 8(%rdx)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdx, -16(%rbp)
	movq	%rcx, -8(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	leaq	-32(%rbp), %rcx
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	callq	__ZNSt3__1L4moveIPcEERT_S3_
	movq	(%rax), %rsi
	leaq	-16(%rbp), %rdi
	movq	%rsi, -64(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L4moveINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_S6_
	movq	(%rax), %rcx
	movq	%rcx, -48(%rbp)
	movq	8(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rcx
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	-64(%rbp), %rsi         ## 8-byte Reload
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4moveIPcEERT_S3_
__ZNSt3__1L4moveIPcEERT_S3_:            ## @_ZNSt3__1L4moveIPcEERT_S3_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4moveINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_S6_
__ZNSt3__1L4moveINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_S6_: ## @_ZNSt3__1L4moveINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_S6_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_: ## @_ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC1ES1_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdx, -16(%rbp)
	movq	%rcx, -8(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rsi
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rcx
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_: ## @_ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEEC2ES1_S5_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	%rdx, -16(%rbp)
	movq	%rcx, -8(%rbp)
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rcx
	movq	%rcx, %rdx
	leaq	-32(%rbp), %rdi
	movq	%rcx, -56(%rbp)         ## 8-byte Spill
	movq	%rdx, -64(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIPcEERT_RNS_16remove_referenceIS2_E4typeE
	movq	(%rax), %rsi
	movq	-64(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__122__compressed_pair_elemIPcLi0ELb0EEC2ES1_
	movq	-56(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	leaq	-16(%rbp), %rdi
	movq	%rax, -72(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_RNS_16remove_referenceIS5_E4typeE
	movq	(%rax), %rcx
	movq	%rcx, -48(%rbp)
	movq	8(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rdx
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EEC2ES4_
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L7forwardIPcEERT_RNS_16remove_referenceIS2_E4typeE
__ZNSt3__1L7forwardIPcEERT_RNS_16remove_referenceIS2_E4typeE: ## @_ZNSt3__1L7forwardIPcEERT_RNS_16remove_referenceIS2_E4typeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIPcLi0ELb0EEC2ES1_
__ZNSt3__122__compressed_pair_elemIPcLi0ELb0EEC2ES1_: ## @_ZNSt3__122__compressed_pair_elemIPcLi0ELb0EEC2ES1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	movq	%rsi, -24(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardIPcEERT_RNS_16remove_referenceIS2_E4typeE
	movq	(%rax), %rax
	movq	-24(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, (%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L7forwardINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_RNS_16remove_referenceIS5_E4typeE
__ZNSt3__1L7forwardINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_RNS_16remove_referenceIS5_E4typeE: ## @_ZNSt3__1L7forwardINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_RNS_16remove_referenceIS5_E4typeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EEC2ES4_
__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EEC2ES4_: ## @_ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EEC2ES4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rsi, -16(%rbp)
	movq	%rdx, -8(%rbp)
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rdi
	movq	%rdx, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L7forwardINS_22__allocator_destructorINS_9allocatorIcEEEEEERT_RNS_16remove_referenceIS5_E4typeE
	movq	(%rax), %rdx
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rdx, (%rsi)
	movq	8(%rax), %rax
	movq	%rax, 8(%rsi)
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
__ZNKSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv: ## @_ZNKSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv: ## @_ZNKSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv: ## @_ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemIPcLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L4moveIPPcEERT_S4_
__ZNSt3__1L4moveIPPcEERT_S4_:           ## @_ZNSt3__1L4moveIPPcEERT_S4_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
__ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv: ## @_ZNSt3__117__compressed_pairIPPcNS_9allocatorIS1_EEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
__ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv: ## @_ZNSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED2Ev
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED2Ev: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%eax, %esi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5resetES1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5resetES1_
__ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5resetES1_: ## @_ZNSt3__110unique_ptrIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5resetES1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE5firstEv
	movq	-40(%rbp), %rsi         ## 8-byte Reload
	movq	%rsi, (%rax)
	cmpq	$0, -24(%rbp)
	je	LBB202_2
## %bb.1:
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE6secondEv
	movq	-24(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEclEPc
LBB202_2:
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE6secondEv
__ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE6secondEv: ## @_ZNSt3__117__compressed_pairIPcNS_22__allocator_destructorINS_9allocatorIcEEEEE6secondEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$8, %rdi
	callq	__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__allocator_destructorINS_9allocatorIcEEEclEPc
__ZNSt3__122__allocator_destructorINS_9allocatorIcEEEclEPc: ## @_ZNSt3__122__allocator_destructorINS_9allocatorIcEEEclEPc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movq	(%rsi), %rdi
	movq	-16(%rbp), %rax
	movq	8(%rsi), %rdx
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcm
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EE5__getEv: ## @_ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorIcEEEELi1ELb0EE5__getEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev
	.p2align	4, 0x90
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE5clearEv
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	cmpq	$0, (%rdi)
	je	LBB206_2
## %bb.1:
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	(%rdi), %rsi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	movq	%rsi, -32(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE8capacityEv
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	-32(%rbp), %rsi         ## 8-byte Reload
	movq	%rax, %rdx
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE10deallocateERS3_PS2_m
LBB206_2:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE5clearEv
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE5clearEv: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE5clearEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	8(%rdi), %rsi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE8capacityEv
__ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE8capacityEv: ## @_ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE8capacityEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	movq	(%rax), %rax
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	(%rdi), %rcx
	subq	%rcx, %rax
	sarq	$3, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE: ## @_ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE17__destruct_at_endEPS1_NS_17integral_constantIbLb0EEE
Lfunc_begin16:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception16
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	%rsi, -48(%rbp)         ## 8-byte Spill
LBB210_1:                               ## =>This Inner Loop Header: Depth=1
	movq	-24(%rbp), %rax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	cmpq	16(%rcx), %rax
	je	LBB210_6
## %bb.2:                               ##   in Loop: Header=BB210_1 Depth=1
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE7__allocEv
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	16(%rdi), %rcx
	addq	$-8, %rcx
	movq	%rcx, 16(%rdi)
	movq	%rcx, %rdi
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	callq	__ZNSt3__1L16__to_raw_pointerIPcEEPT_S3_
Ltmp174:
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	__ZNSt3__116allocator_traitsINS_9allocatorIPcEEE7destroyIS2_EEvRS3_PT_
Ltmp175:
	jmp	LBB210_3
LBB210_3:                               ##   in Loop: Header=BB210_1 Depth=1
	jmp	LBB210_1
LBB210_4:
Ltmp176:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
## %bb.5:
	movq	-32(%rbp), %rdi
	callq	___cxa_call_unexpected
LBB210_6:
	addq	$64, %rsp
	popq	%rbp
	retq
Lfunc_end16:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table210:
Lexception16:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase15-Lttbaseref15
Lttbaseref15:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end16-Lcst_begin16
Lcst_begin16:
	.uleb128 Ltmp174-Lfunc_begin16  ## >> Call Site 1 <<
	.uleb128 Ltmp175-Ltmp174        ##   Call between Ltmp174 and Ltmp175
	.uleb128 Ltmp176-Lfunc_begin16  ##     jumps to Ltmp176
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp175-Lfunc_begin16  ## >> Call Site 2 <<
	.uleb128 Lfunc_end16-Ltmp175    ##   Call between Ltmp175 and Lfunc_end16
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end16:
	.byte	127                     ## >> Action Record 1 <<
                                        ##   Filter TypeInfo -1
	.byte	0                       ##   No further actions
	.p2align	2
Lttbase15:
                                        ## >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
__ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv: ## @_ZNKSt3__114__split_bufferIPcRNS_9allocatorIS1_EEE9__end_capEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	addq	$24, %rdi
	callq	__ZNKSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
__ZNKSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv: ## @_ZNKSt3__117__compressed_pairIPPcRNS_9allocatorIS1_EEE5firstEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__122__compressed_pair_elemIPPcLi0ELb0EE5__getEv
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__116allocator_traitsINS_9allocatorIcEEE11__constructIccEEvNS_17integral_constantIbLb1EEERS2_PT_RKT0_
__ZNSt3__116allocator_traitsINS_9allocatorIcEEE11__constructIccEEvNS_17integral_constantIbLb1EEERS2_PT_RKT0_: ## @_ZNSt3__116allocator_traitsINS_9allocatorIcEEE11__constructIccEEvNS_17integral_constantIbLb1EEERS2_PT_RKT0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	movq	-32(%rbp), %rdx
	callq	__ZNSt3__19allocatorIcE9constructIcEEvPcRKT_
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__19allocatorIcE9constructIcEEvPcRKT_
__ZNSt3__19allocatorIcE9constructIcEEvPcRKT_: ## @_ZNSt3__19allocatorIcE9constructIcEEvPcRKT_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movb	(%rsi), %al
	movb	%al, (%rdx)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15dequeIcNS_9allocatorIcEEE4sizeEv
__ZNKSt3__15dequeIcNS_9allocatorIcEEE4sizeEv: ## @_ZNKSt3__15dequeIcNS_9allocatorIcEEE4sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__112__deque_baseIcNS_9allocatorIcEEE4sizeEv
	movq	(%rax), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc: ## @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
Lfunc_begin17:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception17
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movb	%sil, %al
	movq	%rdi, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rsi
	leaq	-24(%rbp), %rdi
	movq	%rdi, -48(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp177:
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
Ltmp178:
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	jmp	LBB216_1
LBB216_1:
	movsbl	-9(%rbp), %esi
Ltmp179:
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	callq	__ZNKSt3__15ctypeIcE5widenEc
Ltmp180:
	movb	%al, -57(%rbp)          ## 1-byte Spill
	jmp	LBB216_2
LBB216_2:
	leaq	-24(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movb	-57(%rbp), %al          ## 1-byte Reload
	movsbl	%al, %eax
	addq	$80, %rsp
	popq	%rbp
	retq
LBB216_3:
Ltmp181:
	movl	%edx, %ecx
	movq	%rax, -32(%rbp)
	movl	%ecx, -36(%rbp)
Ltmp182:
	leaq	-24(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp183:
	jmp	LBB216_4
LBB216_4:
	jmp	LBB216_5
LBB216_5:
	movq	-32(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB216_6:
Ltmp184:
	movq	%rax, %rdi
	movq	%rdx, -72(%rbp)         ## 8-byte Spill
	callq	___clang_call_terminate
Lfunc_end17:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table216:
Lexception17:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase16-Lttbaseref16
Lttbaseref16:
	.byte	1                       ## Call site Encoding = uleb128
	.uleb128 Lcst_end17-Lcst_begin17
Lcst_begin17:
	.uleb128 Lfunc_begin17-Lfunc_begin17 ## >> Call Site 1 <<
	.uleb128 Ltmp177-Lfunc_begin17  ##   Call between Lfunc_begin17 and Ltmp177
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp177-Lfunc_begin17  ## >> Call Site 2 <<
	.uleb128 Ltmp180-Ltmp177        ##   Call between Ltmp177 and Ltmp180
	.uleb128 Ltmp181-Lfunc_begin17  ##     jumps to Ltmp181
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp180-Lfunc_begin17  ## >> Call Site 3 <<
	.uleb128 Ltmp182-Ltmp180        ##   Call between Ltmp180 and Ltmp182
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.uleb128 Ltmp182-Lfunc_begin17  ## >> Call Site 4 <<
	.uleb128 Ltmp183-Ltmp182        ##   Call between Ltmp182 and Ltmp183
	.uleb128 Ltmp184-Lfunc_begin17  ##     jumps to Ltmp184
	.byte	1                       ##   On action: 1
	.uleb128 Ltmp183-Lfunc_begin17  ## >> Call Site 5 <<
	.uleb128 Lfunc_end17-Ltmp183    ##   Call between Ltmp183 and Lfunc_end17
	.byte	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lcst_end17:
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
	.p2align	2
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
Lttbase16:
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE: ## @_ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function _ZNKSt3__15ctypeIcE5widenEc
__ZNKSt3__15ctypeIcE5widenEc:           ## @_ZNKSt3__15ctypeIcE5widenEc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movb	%sil, %al
	movq	%rdi, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdi
	movb	-9(%rbp), %al
	movq	(%rdi), %rcx
	movsbl	%al, %esi
	callq	*56(%rcx)
	movsbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.p2align	4, 0x90         ## -- Begin function _GLOBAL__sub_I_p86.cpp
__GLOBAL__sub_I_p86.cpp:                ## @_GLOBAL__sub_I_p86.cpp
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	callq	___cxx_global_var_init
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_parenthesis            ## @parenthesis
.zerofill __DATA,__common,_parenthesis,24,3
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	")("

L_.str.1:                               ## @.str.1
	.asciz	"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"

	.section	__DATA,__mod_init_func,mod_init_funcs
	.p2align	3
	.quad	__GLOBAL__sub_I_p86.cpp

.subsections_via_symbols
