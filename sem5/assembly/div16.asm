;division in 16bit  
;example used 400h / 3h = 155h  , rem = 1

; word division result (/)  in (ax dx)
; remainder in dx

.model small
.stack
.data
.code
start:
num1 dw 0400h	

result dw 2 dup(0)
mov ax, @data
mov ds,ax 
mov ax, num1 ; direct addressing
mov bx , 0003h ; immediate addressing
div bx

mov result , ax
mov result+2 , dx



mov ah,4ch
int 21h
end start