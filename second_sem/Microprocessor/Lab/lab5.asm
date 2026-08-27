.model small
.stack 100h

.data

    ;char db ?

    msg db 'Enter a character: $'
    msg1 db 0dh,0ah,'Vowel$'
    msg2 db 0dh,0ah,'Consonant$'
    ;msg3 db 0dh,0ah,'number$'


.code

main proc

    mov ax, @data
    mov ds, ax

    ; display "enter a character:"
    lea dx, msg
    mov ah, 09h
    int 21h

    ; take one character from the keyboard
    mov ah, 01h
    int 21h

    ; store the entered character in char
   ; mov char, al

    ; compare character with 'a'
    cmp al, 'a'
    je vowel

    cmp al, 'e'
    je vowel

    cmp al, 'i'
    je vowel

    cmp al, 'o'
    je vowel

    cmp al, 'u'
    je vowel 
    
   ; cmp al,'0'
    ;je number
   ; cmp al,'1'
    ;je number
;    cmp al,'2'
 ;   je number
  ;  cmp al,'3'
   ; je number
    ;cmp al,'4'
;    je number
 ;   cmp al,'5'
  ;  je number
   ; cmp al,'6'
;    je number
 ;   cmp al,'7'
  ;  je number 
   ; cmp al,'8'
    ;je number
    ;cmp al,'9'
    ;je number
    
    ; if no vowel was found
    lea dx, msg2
    jmp display 
    

vowel:

    ; character is a vowel
    lea dx, msg1 
    jmp display   
;number:
    ;lea dx,msg3
    ;jmp display

display:

    ; display the selected message
    mov ah, 09h
    int 21h

    ; exit the program
    mov ah, 4ch
    int 21h

main endp
end main