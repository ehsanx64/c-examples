	.section .rdata,"dr"
LC0:
	.ascii "Hello!\0"

.text
.globl	_main
_main:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	$LC0
	call	_puts
	movl	$0, %eax
	leave
	ret
