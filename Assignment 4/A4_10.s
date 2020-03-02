	.file	"A4_10.c"
	.text
	.section	.rodata
.LC0:
	.string	"%f"
.LC1:
	.string	"Product is: %f\n"
.LC2:
	.string	"Division is : %f\n"
.LC3:
	.string	"a^b is : %f\n"
.LC4:
	.string	"1 / b is : %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-28(%rbp), %xmm0
	movl	-32(%rbp), %eax
	leaq	-12(%rbp), %rcx
	leaq	-16(%rbp), %rdx
	leaq	-20(%rbp), %rsi
	leaq	-24(%rbp), %rdi
	movaps	%xmm0, %xmm1
	movl	%eax, -36(%rbp)
	movss	-36(%rbp), %xmm0
	call	proddivpowinv
	movss	-24(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	-20(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC2(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	-16(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC3(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	proddivpowinv
	.type	proddivpowinv, @function
proddivpowinv:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movss	%xmm0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movss	-4(%rbp), %xmm0
	mulss	-8(%rbp), %xmm0
	movq	-16(%rbp), %rax
	movss	%xmm0, (%rax)
	movss	-4(%rbp), %xmm0
	divss	-8(%rbp), %xmm0
	movq	-24(%rbp), %rax
	movss	%xmm0, (%rax)
	cvtss2sd	-8(%rbp), %xmm1
	cvtss2sd	-4(%rbp), %xmm0
	call	pow@PLT
	cvtsd2ss	%xmm0, %xmm0
	movq	-32(%rbp), %rax
	movss	%xmm0, (%rax)
	movss	.LC5(%rip), %xmm0
	divss	-8(%rbp), %xmm0
	movq	-40(%rbp), %rax
	movss	%xmm0, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	proddivpowinv, .-proddivpowinv
	.section	.rodata
	.align 4
.LC5:
	.long	1065353216
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
