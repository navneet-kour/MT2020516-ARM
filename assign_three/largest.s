     AREA     largestof3, CODE, READONLY
     EXPORT __main
     IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
	    MOV  R0, #0x20000000          ; Base Address
		ADD  R0, #0x5                 ; 0x5 is the offset
		MOV  R1, #0x54 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x99 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x27 
		STR  R1,[R0] 
	    MOV  R2,  #0x20000000              
        LDR R3, [R2, #0x5]              ;first number  
        LDR R4, [R2, #0xA]              ;second number
		LDR R5, [R2, #0xF]              ;third number
		CMP R3, R4                      ;comparison of first two numbers
		BLT else1
		CMP R3, R5                      ;comparison of first and third num
		ITE GE
		MOVGE R6, R3
		MOVLT R6, R5
		B done
else1	CMP R4, R5                      ;comparison of second and third num
		ITE GE
		MOVGE R6, R4
		MOVLT R6, R5
done    ADD R2, #0x14                   ;write the result to memory
        STR R6, [R2]
        MOV R7, #0x20000000              
        LDR R0, [R7, #0x5]             
        LDR R1, [R7, #0xA]
		LDR R2, [R7, #0xF]
        LDR R3, [R7, #0x14]              ;read result from memory in order to print
		BL printMsg4p
stop    B stop ; stop program
     ENDFUNC
     END 