section .data
    hello: db "Hello, Holberton!", 0Ah ; Define a null-terminated string with a new line character
    format: db "%s" ; Define the format string for printf

section .text
    global main
    extern printf

main:
    ; Call printf function with hello string and format specifier
    mov rdi, format ; Pass format string as the first argument
    mov rsi, hello ; Pass hello string as the second argument
    xor rax, rax ; Clear rax register
    call printf ; Call printf function

    ; Return 0
    mov eax, 0
    ret

