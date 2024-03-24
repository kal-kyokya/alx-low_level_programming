section .data
    hello db "Hello, Holberton", 10, 0  ; 10 is the ASCII code for a new line character

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rax, 60       ; syscall number for exit
    xor rdi, rdi      ; exit status (0)
    syscall
