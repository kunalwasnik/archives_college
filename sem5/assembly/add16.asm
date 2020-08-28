;add in 16bit 0xff +  0xff = 0x1feh;



.model small
.stack
.data



.code
start:

num1 dw 0ffh	



mov ax, @data
mov ds,ax 
mov ax, num1 ; direct addressing
mov bx , 0ffh; immediate addressing
add ax , bx



mov ah,4ch
int 21h
end start