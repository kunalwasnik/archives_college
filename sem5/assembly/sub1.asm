
; sub two number 4 and 2	

.model small
.stack
.data
.code
start:
a db 04h;
mov ax, @data ; initalizing data segment
mov ds,ax
mov al,a ; direct addressing.
mov bl , 02h; immediate addressing.
sub al,bl
mov cl,al

mov ah,4ch
int 21h
end start