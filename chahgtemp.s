	.file	"chahgtemp.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	_Z9isinitialPxS_x
	.type	_Z9isinitialPxS_x, @function
_Z9isinitialPxS_x:
.LFB3595:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jge	.L2
	movl	$1, -4(%rbp)
	jmp	.L3
.L7:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	-8(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jg	.L4
	movl	$0, %eax
	jmp	.L5
.L4:
	movl	-4(%rbp), %eax
	cltq
	movq	-40(%rbp), %rdx
	subq	$1, %rdx
	cmpq	%rdx, %rax
	jge	.L6
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jl	.L6
	movl	$0, %eax
	jmp	.L5
.L6:
	addl	$2, -4(%rbp)
.L3:
	movl	-4(%rbp), %eax
	cltq
	cmpq	-40(%rbp), %rax
	jl	.L7
	movl	$1, %eax
	jmp	.L5
.L2:
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jle	.L8
	movl	$1, -4(%rbp)
	jmp	.L9
.L12:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	-8(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jl	.L10
	movl	$0, %eax
	jmp	.L5
.L10:
	movl	-4(%rbp), %eax
	cltq
	movq	-40(%rbp), %rdx
	subq	$1, %rdx
	cmpq	%rdx, %rax
	jge	.L11
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jg	.L11
	movl	$0, %eax
	jmp	.L5
.L11:
	addl	$2, -4(%rbp)
.L9:
	movl	-4(%rbp), %eax
	cltq
	cmpq	-40(%rbp), %rax
	jl	.L12
	movl	$2, %eax
	jmp	.L5
.L8:
	movl	$0, %eax
.L5:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3595:
	.size	_Z9isinitialPxS_x, .-_Z9isinitialPxS_x
	.section	.rodata
.LC0:
	.string	"%lld"
.LC1:
	.string	"%lld%lld"
.LC2:
	.string	"1\n0 Inf"
.LC3:
	.string	"2\n0 "
.LC4:
	.string	"%lld\n%lld Inf\n"
.LC5:
	.string	"0"
.LC6:
	.string	"1\n1 Inf"
.LC7:
	.string	"1\n0 %lld\n"
.LC8:
	.string	"1\n%lld Inf\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3596:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$304, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-296(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	jmp	.L14
.L70:
	leaq	-288(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	movq	$0, -256(%rbp)
	jmp	.L15
.L16:
	leaq	-112(%rbp), %rax
	movq	-256(%rbp), %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	leaq	-208(%rbp), %rax
	movq	-256(%rbp), %rcx
	salq	$3, %rcx
	addq	%rcx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	scanf
	addq	$1, -256(%rbp)
.L15:
	movq	-288(%rbp), %rax
	cmpq	%rax, -256(%rbp)
	jl	.L16
	movq	-288(%rbp), %rax
	cmpq	$1, %rax
	jne	.L17
	movl	$.LC2, %edi
	call	puts
	jmp	.L14
.L17:
	movq	-288(%rbp), %rax
	cmpq	$2, %rax
	jne	.L19
	movq	-208(%rbp), %rdx
	movq	-200(%rbp), %rax
	cmpq	%rax, %rdx
	jge	.L20
	movq	-112(%rbp), %rdx
	movq	-104(%rbp), %rax
	cmpq	%rax, %rdx
	jg	.L21
	movl	$.LC2, %edi
	call	puts
	jmp	.L14
.L21:
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rcx
	movq	-104(%rbp), %rdx
	subq	%rdx, %rcx
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L23
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rcx
	movq	-104(%rbp), %rdx
	subq	%rdx, %rcx
	movq	%rcx, %rdi
	cqto
	idivq	%rdi
	leaq	1(%rax), %rcx
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rsi
	movq	-104(%rbp), %rdx
	subq	%rdx, %rsi
	movq	%rsi, %rdi
	cqto
	idivq	%rdi
	subq	$1, %rax
	movq	%rcx, %rdx
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L23:
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rcx
	movq	-104(%rbp), %rdx
	subq	%rdx, %rcx
	movq	%rcx, %rdi
	cqto
	idivq	%rdi
	leaq	1(%rax), %rcx
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rsi
	movq	-104(%rbp), %rdx
	subq	%rdx, %rsi
	movq	%rsi, %rdi
	cqto
	idivq	%rdi
	movq	%rcx, %rdx
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L20:
	movq	-208(%rbp), %rdx
	movq	-200(%rbp), %rax
	cmpq	%rax, %rdx
	jle	.L25
	movq	-104(%rbp), %rdx
	movq	-112(%rbp), %rax
	cmpq	%rax, %rdx
	jg	.L26
	movl	$.LC2, %edi
	call	puts
	jmp	.L14
.L26:
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movq	-208(%rbp), %rdx
	movq	-200(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-104(%rbp), %rcx
	movq	-112(%rbp), %rdx
	subq	%rdx, %rcx
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L28
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rcx
	movq	-104(%rbp), %rdx
	subq	%rdx, %rcx
	movq	%rcx, %rdi
	cqto
	idivq	%rdi
	leaq	1(%rax), %rcx
	movq	-208(%rbp), %rdx
	movq	-200(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-104(%rbp), %rsi
	movq	-112(%rbp), %rdx
	subq	%rdx, %rsi
	cqto
	idivq	%rsi
	subq	$1, %rax
	movq	%rcx, %rdx
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L28:
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rcx
	movq	-104(%rbp), %rdx
	subq	%rdx, %rcx
	movq	%rcx, %rdi
	cqto
	idivq	%rdi
	leaq	1(%rax), %rcx
	movq	-200(%rbp), %rdx
	movq	-208(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	-112(%rbp), %rsi
	movq	-104(%rbp), %rdx
	subq	%rdx, %rsi
	cqto
	idivq	%rsi
	movq	%rcx, %rdx
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L25:
	movq	-112(%rbp), %rdx
	movq	-104(%rbp), %rax
	cmpq	%rax, %rdx
	jne	.L29
	movl	$.LC5, %edi
	call	puts
	jmp	.L14
.L29:
	movl	$.LC6, %edi
	call	puts
	jmp	.L14
.L19:
	movq	-288(%rbp), %rdx
	leaq	-112(%rbp), %rcx
	leaq	-208(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z9isinitialPxS_x
	movq	%rax, -232(%rbp)
	cmpq	$1, -232(%rbp)
	jne	.L30
	movq	$0, -224(%rbp)
	movq	$2147483647, -272(%rbp)
	movq	$1, -256(%rbp)
	jmp	.L31
.L38:
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jge	.L32
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L33
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	subq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
	jmp	.L32
.L33:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L32:
	movq	-288(%rbp), %rax
	subq	$1, %rax
	cmpq	-256(%rbp), %rax
	jle	.L35
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jge	.L35
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L36
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	subq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
	jmp	.L35
.L36:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L35:
	addq	$2, -256(%rbp)
.L31:
	movq	-288(%rbp), %rax
	cmpq	%rax, -256(%rbp)
	jl	.L38
	movq	-272(%rbp), %rax
	cmpq	$2147483647, %rax
	je	.L39
	movl	$.LC2, %edi
	call	puts
	jmp	.L14
.L39:
	movq	-272(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L30:
	cmpq	$2, -232(%rbp)
	jne	.L41
	movq	$0, -216(%rbp)
	movq	$2147483647, -272(%rbp)
	movq	$1, -256(%rbp)
	jmp	.L42
.L49:
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jle	.L43
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L44
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	subq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
	jmp	.L43
.L44:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L43:
	movq	-288(%rbp), %rax
	subq	$1, %rax
	cmpq	-256(%rbp), %rax
	jle	.L46
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jle	.L46
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L47
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	subq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
	jmp	.L46
.L47:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L46:
	addq	$2, -256(%rbp)
.L42:
	movq	-288(%rbp), %rax
	cmpq	%rax, -256(%rbp)
	jl	.L49
	movq	-272(%rbp), %rax
	cmpq	$2147483647, %rax
	je	.L50
	movl	$.LC2, %edi
	call	puts
	jmp	.L14
.L50:
	movq	-272(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L41:
	movq	$0, -248(%rbp)
	movq	$2147483647, -280(%rbp)
	movq	$1, -256(%rbp)
	jmp	.L52
.L58:
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jl	.L53
	movq	$1, -248(%rbp)
	jmp	.L54
.L53:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	addq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-280(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -280(%rbp)
.L54:
	movq	-288(%rbp), %rax
	subq	$1, %rax
	cmpq	-256(%rbp), %rax
	jle	.L55
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jl	.L56
	movq	$1, -248(%rbp)
	jmp	.L55
.L56:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	addq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-280(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -280(%rbp)
.L55:
	addq	$2, -256(%rbp)
.L52:
	movq	-288(%rbp), %rax
	cmpq	%rax, -256(%rbp)
	jl	.L58
	movq	$0, -240(%rbp)
	movq	$2147483647, -272(%rbp)
	movq	$1, -256(%rbp)
	jmp	.L59
.L65:
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jg	.L60
	movq	$1, -240(%rbp)
	jmp	.L61
.L60:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	subq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	addq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L61:
	movq	-288(%rbp), %rax
	subq	$1, %rax
	cmpq	-256(%rbp), %rax
	jle	.L62
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rax
	cmpq	%rax, %rdx
	jg	.L63
	movq	$1, -240(%rbp)
	jmp	.L62
.L63:
	movq	-256(%rbp), %rax
	movq	-208(%rbp,%rax,8), %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-208(%rbp,%rax,8), %rax
	subq	%rax, %rdx
	movq	-256(%rbp), %rax
	addq	$1, %rax
	movq	-112(%rbp,%rax,8), %rcx
	movq	-256(%rbp), %rax
	movq	-112(%rbp,%rax,8), %rax
	subq	%rax, %rcx
	movq	%rdx, %rax
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	addq	$1, %rax
	movq	%rax, -264(%rbp)
	leaq	-264(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -272(%rbp)
.L62:
	addq	$2, -256(%rbp)
.L59:
	movq	-288(%rbp), %rax
	cmpq	%rax, -256(%rbp)
	jl	.L65
	cmpq	$0, -248(%rbp)
	jne	.L66
	cmpq	$0, -240(%rbp)
	jne	.L66
	leaq	-272(%rbp), %rdx
	leaq	-280(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt3minIxERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, %rsi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L66:
	cmpq	$0, -240(%rbp)
	je	.L68
	movq	-280(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L68:
	cmpq	$0, -248(%rbp)
	je	.L69
	movq	-272(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L69:
	movl	$.LC5, %edi
	call	puts
.L14:
	movq	-296(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	%rdx, -296(%rbp)
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	.L70
	movl	$0, %eax
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L72
	call	__stack_chk_fail
.L72:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3596:
	.size	main, .-main
	.section	.text._ZSt3minIxERKT_S2_S2_,"axG",@progbits,_ZSt3minIxERKT_S2_S2_,comdat
	.weak	_ZSt3minIxERKT_S2_S2_
	.type	_ZSt3minIxERKT_S2_S2_, @function
_ZSt3minIxERKT_S2_S2_:
.LFB3607:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jge	.L74
	movq	-16(%rbp), %rax
	jmp	.L75
.L74:
	movq	-8(%rbp), %rax
.L75:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3607:
	.size	_ZSt3minIxERKT_S2_S2_, .-_ZSt3minIxERKT_S2_S2_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB3615:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L76
	cmpl	$65535, -8(%rbp)
	jne	.L76
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L76:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3615:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z9isinitialPxS_x, @function
_GLOBAL__sub_I__Z9isinitialPxS_x:
.LFB3616:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3616:
	.size	_GLOBAL__sub_I__Z9isinitialPxS_x, .-_GLOBAL__sub_I__Z9isinitialPxS_x
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z9isinitialPxS_x
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.9.2-10ubuntu13) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
