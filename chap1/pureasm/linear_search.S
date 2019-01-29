/*
 * file name: linear_search.S
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 29 Jan 2019 10:27:59 AM CST
 */

.equ 	ARRLENG, 	6 
.equ 	X, 		3
.section .data
values:
	.int 5, 2, 1, 3, 4, 6
format1:
	.asciz "Found element %d at index %d\n"
format2:
	.asciz "Not found element %d\n"
format3:
	.asciz "The origin array is: "
format4:
	.asciz "%d "
newline:
	.asciz "\n"
.section .text
.globl main
main:
	pushl 	$ARRLENG
	pushl 	$values
	call 	print_array
	addl 	$8, %esp
	
	pushl 	$X
	pushl 	$ARRLENG
	pushl 	$values
	call 	linear_search
	addl 	$12, %esp 
	
	cmpl 	$0, %eax 
	je 	.LM1 
	pushl 	$X 
	pushl 	%eax 
	pushl 	$format1 
	call 	printf
	addl 	$12, %esp 
	
	pushl 	$0
	call 	exit 
.LM1:
	pushl 	$X
	pushl 	$format2
	call 	printf
	addl 	$8, %esp

	pushl 	$0
	call 	exit 
.type linear_search, @function
linear_search:
	pushl 	%ebp
	movl 	%esp, %ebp
	
	movl 	8(%ebp), %eax
	movl 	12(%ebp), %ecx  
	movl 	16(%ebp), %edx 
	movl 	$0, %edi 
.L1:
	movl 	(%eax, %edi, 4), %ebx 
	cmpl 	%ebx, %edx 
	jz 	.L2
	incl 	%edi 
	cmpl 	%ecx, %edi 
	jne 	.L1  
	je 	.L3 
.L2:
	movl 	%edi, %eax  
	movl 	%ebp, %esp
	popl 	%ebp
	ret 
.L3:
	movl 	$0, %eax
	movl 	%ebp, %esp 
	popl 	%ebp 
	ret
