.model small
.stack 100h

DATA SEGMENT
    MYSTR DB "Ascol Campus$"
    char  DB 's'
    count DW 10

    str1 DB "character not found$"
    str2 DB "character found$"
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE, DS:DATA, ES:DATA

start:
    mov ax, DATA
    mov ds, ax
    mov es, ax

    lea di, MYSTR       ; DI points to first character
    mov cx, count       ; number of characters to search
    mov al, char        ; AL = character to search
    cld                 ; search forward

    repnz scasb         ; search AL in ES:[DI]

    je FOUND             ; if found, Zero Flag = 1

NOT_FOUND:
    lea dx, str1
    mov ah, 09h
    int 21h
    jmp EXIT

FOUND:
    lea dx, str2
    mov ah, 09h
    int 21h

EXIT:
    mov ah, 4Ch
    int 21h

CODE ENDS
END start