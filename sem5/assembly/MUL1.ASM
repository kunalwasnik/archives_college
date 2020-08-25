;; mult 4 and 2
.model small
.stack
.data
a db 04h;



.code
start:
mov ax, @data
mov ds,ax
mov al,a ; direct addressing.
mov bl ,02h; immeditate
mul bl
mov cl,al

mov ah,4ch
int 21h
end start
