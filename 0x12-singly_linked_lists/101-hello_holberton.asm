section .text
	extern printf
	global main

main:
	mov	edi, msg	;message variable
	mov	eax, 4
	int	0x80		;call kernel

	mov	eax, 1 		;system call (sys_exit)
	int	0x80		;call kernel

	call	printf

section .data
msg db 'Hello, Holberton', 0xa	;message to print
len equ $ - msg			;length of the string
