;multiplication in 16bit 0xffff x 0xffff = 0xFFFE0001;



.model small
.stack
.data


.code
start:
num1 dw 0ffffh	

result dw 2 dup(0)


mov ax, @data
mov ds,ax 
mov ax, num1 ; direct addressing
mov bx , 0ffffh ; immediate addressing
mul bx

mov result , dx
mov result+2 , ax


mov ah,4ch
int 21h
end start 