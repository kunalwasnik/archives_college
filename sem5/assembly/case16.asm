
; 16bit arithmetic operations
;case0 : add
;case1 : sub;
;case2 : mul;
;case3 : div;
; operand1 is taken as 0fffh and operand2 is taken as 0ffh
; add = 10FE sub = F00 mul= FEF01 , div = 10

.model small
.data
.code

start:
num1 dw 0fffh
result dw 2 dup(0)
	
mov ax, @data ; initalizing data segment
mov ds,ax


mov ah,1 
int 21h ; above line and this for input from user.

mov ah,0 
sub al,30h    
shl al,1   
mov bx,ax  

jmp cs:jmptble [bx]          ;jumptable

jmptble dw case0,case1,case2,case3 ;cases   






; add 4+ 2

case0:

	mov ax, num1 ; direct addressing
	mov bx , 0ffh; immediate addressing
	add ax , bx

	mov cx , ax  ; store final result in cx

	jmp endlabel





; sub two number 0xfff and 0xff

case1:
	mov ax, num1 ; direct addressing
	mov bx , 0ffh; immediate addressing
	sub ax , bx
	mov cx , ax  ; store final result in cx

	jmp endlabel


;multiply
;when word is used mul operation stores higher bit in dx and lower in ax

case2:
	mov ax, num1 ; direct addressing
	mov bx , 0ffh ; immediate addressing
	mul bx

	mov result , dx
	mov result+2 , ax



	jmp endlabel


;division case

case3:

; word division quotient in ax
; remainder in dx

	mov ds,ax 
	mov ax, num1 ; direct addressing
	mov bx , 0ffh ; immediate addressing
	div bx

	mov result , ax
	mov result+2 , dx




	jmp endlabel

endlabel:

	mov ah,4ch
	int 21h
	end start





