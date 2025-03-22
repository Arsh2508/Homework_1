extern printf
extern scanf

section .dtat
	fmt_s db "%d", 0
	fmt_p db "Enter positive n: ", 0
	fmt_res db "The %d-th fibonacci number is %d ",10 , 0
section .bss

section .text
	global main
main:
	push rbp
	mov rbp, rsp 
	
	sub rsp, 16
INPUT:
	mov rdi, fmt_p
	xor rax, rax
	call printf
	
	mov rdi, fmt_s
	lea rsi, [rbp-4]
	xor rax, rax
	call scanf
	movsx rbx, dword[rbp-4]
	cmp rbx, 0
	jl INPUT
	
	cmp rbx, 1		; if n = 0 or n = 1 then printf n
	jg GREAT
	
	mov rdi, fmt_res
	mov rsi, rbx
	mov rdx, rbx 	;third argument in printf is rdx
	xor rax, rax	
	call printf
	jmp RET
	
GREAT:
	mov r8, 0	; the value of num1
	mov r9, 1	; the value of num2

	mov rcx, 1
FOR:	
	cmp rcx, rbx		; in rbx is value of n
	jge END
	mov rax, r9
	add r9, r8
	mov r8, rax
	INC rcx
	jmp FOR
END:
	mov rdi, fmt_res
	mov rsi, rbx
	mov rdx, r9
	xor rax, rax
	call printf	
RET:
	mov rsp, rbp
	pop rbp

	xor rax, rax
	ret
