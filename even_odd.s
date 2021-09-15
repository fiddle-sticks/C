	.file	"even_odd.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Please enter a number to see if its even or odd\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "You entered Zero. Bye\0"
LC3:
	.ascii "You entered an even number\0"
LC4:
	.ascii "You entered an odd number\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	testl	%eax, %eax
	jne	L2
	movl	$LC2, (%esp)
	call	_puts
	movl	$0, %eax
	jmp	L5
L2:
	movl	28(%esp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	L4
	movl	$LC3, (%esp)
	call	_puts
	movl	$0, %eax
	jmp	L5
L4:
	movl	$LC4, (%esp)
	call	_puts
	movl	$0, %eax
L5:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
