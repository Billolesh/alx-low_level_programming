section .data
    hello db "Hello, Holberton", 0
    extern printf

section .text
    global asm_main
asm_main:
    mov rax, 0
    lea rdi, [hello]
    xor esi, esi
    call printf
    mov rax, 60
    xor rdi, rdi
    syscall

section .text
global main
main:
    call asm_main
    mov eax, 0
    ret
