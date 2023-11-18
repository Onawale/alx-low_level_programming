section .data
    format db 'Hello, Holberton',0xA, 0

section .text
    global main
    extern printf

main:
    mov     rdi, format    ; Load the address of the format string
    xor     eax, eax       ; Clear EAX register (indicating no floating-point arguments)
    call    printf         ; Call the printf function
    xor     eax, eax       ; Set return value to 0
    ret
