/*
 * file name: print_array.S
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Mon 28 Jan 2019 06:34:38 PM CST
 */

.section .data
_format_print_array:
	.asciz "%d\n"
.section .text
.type print_array, @function 
.globl print_array 
print_array:
	pushl 	%ebp
	movl 	%esp, %ebp
	movl 	8(%ebp), %eax
	movl 	12(%ebp), %ecx
	movl 	$0, %edi 
.L0:
	movl 	(%eax, %edi, 4), %ebx
	
	pusha 
	pushl 	%ebx
	pushl 	$_format_print_array
	call 	printf
	addl 	$8, %esp
	popa
	
	incl 	%edi 
	cmpl 	%ecx, %edi
	jne 	.L0

	movl 	%ebp, %esp
	popl 	%ebp 
	ret
