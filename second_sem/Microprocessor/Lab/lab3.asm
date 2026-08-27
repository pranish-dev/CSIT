; reverse given string
.model small
.stack 100h
.data 
    string db 'hsinarp$'
.code
    main proc
    mov ax,@data  
    mov ds,ax
    mov si,offset string
    mov cx,14
loop1:  mov bx,[si]
        push bx
        inc si
        loop loop1
mov cx,14
loop2:  pop dx
        mov ah,02h
        int 21h
        loop loop2
    main endp
    end main