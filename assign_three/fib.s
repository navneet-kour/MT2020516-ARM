     AREA     even, CODE, READONLY
     EXPORT __main
     IMPORT printMsgp
	 ENTRY 
__main  FUNCTION
	    MOV  R0, #0x20000000
		ADD  R0, #0x5
		MOV  R1, #0xA                      ;N=10 Fibonacci series
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x0 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x1 
		STR  R1,[R0]
        MOV  R2,  #0x20000000              ; Base Address
        ADD R2, 0x5
		LDR R3, [R2]                       ;load N in R3 from memory
		SUB R3, #2
loop    CMP R3, #0                         ;R3-->count
        BEQ done
		ADD R2, #0x5                
		LDR R4, [R2]                 
	    ADD R2, #0x5
		LDR R5, [R2]
		ADD R6,R5,R4                       ;addition of previous two elements
		ADD R2, #0x5       
		STR R6, [R2]                       ;storing in the memory
		SUB R2, #0xA
		SUB R3,#1
		B loop
done	MOV R7, #0x20000000   
        ADD R7, #0x5
        LDR R3, [R7]
fibp    CMP R3, #0                         ;to print all the elements of the fibonacci series
        BEQ stop
        ADD R7, #0x5
        LDR R0, [R7]
        BL printMsgp
        SUB R3,#1
        B fibp		
stop    B stop ; stop program
     ENDFUNC
     END 