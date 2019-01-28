/*
 * file name: insertion_sort.S
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Sun 27 Jan 2019 09:02:28 PM CST
 */

.equ 	ARRLEN, 	6
.section .data
values:
	.int 5, 2, 7, 3, 6, 4
format:
	.asciz "%d\n"
.section .text
.globl main
main:
	pushl 	$ARRLEN
	pushl 	$values
	call 	insertion_sort
	addl 	$8, %esp 

	pushl 	$ARRLEN
	pushl 	$values
	call 	print_array
	addl 	$8, %esp 

	pushl 	$0 
	call 	exit 
.type insertion_sort, @function 
insertion_sort:
	pushl 	%ebp
	movl 	%esp, %ebp
	subl	$4, %esp 
	movl 	8(%ebp), %eax
	movl 	12(%ebp), %ecx
	movl 	$1, %edi
.L1:
	movl 	(%eax, %edi, 4), %ebx		# key
	movl 	%edi, -4(%ebp) 
	subl 	$1, -4(%ebp) 	

.L2:
	cmpl 	$0, -4(%ebp)
	jl 	.L3
	movl 	-4(%ebp), %esi 
	movl 	(%eax, %esi, 4), %edx	
	cmpl 	%ebx, %edx 
	jle 	.L3 
	incl 	%esi 
	movl 	%edx, (%eax, %esi, 4)
	
	decl 	-4(%ebp)
	jmp	.L2 
.L3:
	addl 	$1, -4(%ebp) 
	movl 	-4(%ebp), %esi 
	movl 	%ebx, (%eax, %esi, 4)
	incl 	%edi 
	cmpl 	%ecx, %edi
	je 	.L4
	jmp 	.L1  
.L4: 
	addl 	$4, %esp 
	movl 	%ebp, %esp
	popl 	%ebp 
	ret
