section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Call printf to print the hello string
    mov rdi, hello
    call printf

    ; Exit the program
    mov eax, 60         ; syscall number for sys_exit
    xor edi, edi        ; status code 0
    syscall
