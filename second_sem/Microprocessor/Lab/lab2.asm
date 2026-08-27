.model smali
.stack 100h
.data 
    msg db "Enter the leter in lowercase: $"
    msg1 db 0dh,0ah,"Letter in uppercase is: $"
    temp db ?
.code
    main proc
        mov ax,@data
        mov ds,ax 
        ;display msg
        mov ah,09h
        mov dx,offset msg
        int 21h    
        ;take a char
        mov ah,01h
        int 21h      
         mov temp,al
        ;display msg1
        mov ah,09h
        mov dx,offset msg1
        int 21h      
         
        ;change char
        sub temp,32    
         
        ;display changed char
        mov ah,02h
        mov dl,temp
        int 21h      
        
        ;terminaate dos
        mov ah,4ch
        int 21h      
        
        
        main endp
    end main