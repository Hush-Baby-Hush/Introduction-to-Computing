; This is the file you will use for the lab assignment
; Make sure to comment your code properly and don't exceed 
; the line limitation for this assignment.  Good luck!

0011 0001 0000 0000 ; x3100 - starting address of the program

; The program description and code starts here


1110 011 000110001 ; LEA R3, x31        
0101 100 100 1 00000 ; AND R4, R4, #0
0001 100 100 1 01010 ; ADD R4, R4, #10
0101 101 101 1 00000 ; AND R5, R5, #0
0110 010 011 000000 ; LDR R2, R3, #0
0000 100 000000001 ; BRn #1
0001 101 010 1 00000 ; ADD R5, R2, #0
0001 011 011 1 00001 ; ADD R3, R3, #1
0001 100 100 1 11111 ; ADD R4, R4, #-1
0000 001 111111010 ; BRp #-6
1111 0000 0010 0101 ; HALT



















; Sample input file
0011 0001 0011 0010 ; x3132 - the location of the array
; Array elements
0000 0000 0000 0001  ; x0001  1  
1111 1111 1000 0000  ; xFF80  -128  
0000 0000 0000 0100  ; x0004  4  
1111 1111 1111 1000  ; xFFF8  -8  
0000 0000 0010 0000  ; x0020  32  
0000 0010 0000 0000  ; x0200  512  
1111 1111 1100 0000  ; xFFC0  -64  
1111 1111 1111 1110  ; xFFFE  -2  
1111 1111 0000 0000  ; xFF00  -256  
0000 0000 0001 0000  ; x0010  16  