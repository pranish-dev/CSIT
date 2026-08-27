;display a string in 8086
.model small
.stack 100h  
.data        
    text db "hello world!$" 
.code
    begin:
    mov ax,@data
    mov ds,ax
    mov dx,offset text
    mov ah,09h
    int 21h
    mov ah,4ch
    int 21h                                            a
    end begin