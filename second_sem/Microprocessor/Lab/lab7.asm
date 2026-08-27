; ALP to count occurrence of character 'o' in string "microprocessor"

.model small
.stack 100h

.data
    MYSTR DB "microprocessor"
    char  DB 'o'
    count DW 14

    msg DB "Number of occurrences: $"

.code

main proc

    mov ax, @data
    mov ds, ax

    lea si, MYSTR
    mov cx, count
    mov al, char
    mov bx, 00h

again:
    cmp al, [si]
    jne next

    inc bx

next:
    inc si
    loop again

    ; display message
    lea dx, msg
    mov ah, 09h
    int 21h

    ; display count
    add bl, 30h
    mov dl, bl
    mov ah, 02h
    int 21h

    ; terminate
    mov ah, 4ch
    int 21h

main endp
end main