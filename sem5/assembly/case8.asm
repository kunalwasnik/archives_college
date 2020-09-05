


; 8bit arithmetic operations
;case0 : add
;case1 : sub;
;case2 : mul;
;case3 : div;
; operand1 is taken as 8 and operand2 is taken as 2


.model small
.data
.code

start:
a db 08h;
	
mov ax, @data ; initalizing data segment
mov ds,ax


mov ah,1
int 21h  ; above line and this for input from user.

mov ah,0 
sub al,30h    
shl al,1   
mov bx,ax  

jmp cs:jmptble [bx]          ;jumptable

jmptble dw case0,case1,case2,case3 ;cases   



; add 8+ 2

case0:

	mov al,a ; direct addressing.
	mov bl , 02h; immediate addressing.
	add al,bl
	mov ch , 0
	mov cl,al
	

	jmp endlabel


; sub two number 8 and 2
case1:
	

	mov al,a ; direct addressing.
	mov bl , 02h; immediate addressing.
	sub al,bl
	mov ch , 0
	mov cl,al
	jmp endlabel



;multiply 
case2:

	mov al,a ; direct addressing.
	mov bl ,02h; immeditate
	mul bl
	mov ch , 0
	mov cl,al

	
	jmp endlabel

; divide
case3:

	mov al,a   ; direct.
	mov bl ,02h; immeditate addresing
	mov ah , 0 ; clear values
	div bl ; al/bl
	mov ch , 0 ; clear values
	mov cl,al
	
	jmp endlabel


endlabel:

	mov ah,4ch
	int 21h
	end start





