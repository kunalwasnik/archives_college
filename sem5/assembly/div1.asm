; divide 8 and 2


.model small
.stack
.data
a db 08h;



.code
start:
mov ax, @data
mov ds,ax
mov al,a   ; direct.
mov bl ,02h; immeditate addresing
mov ah , 0 ; clear values
div bl
mov cl,al


mov ah,4ch
int 21h
end start