     AREA     largestarray, CODE, READONLY
     EXPORT __main
     IMPORT printMsgp
     ENTRY 
__main  FUNCTION
        ;Array of 10 elements in memory   	
	    MOV  R0, #0x20000000      ; Base Address
		ADD  R0, #0x5             ; 0x5 is the offset
		MOV  R1, #0x54 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x27 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x10 
		STR  R1,[R0]
        ADD  R0, #0x5
		MOV  R1, #0x33 
		STR  R1,[R0]
		ADD  R0, #0x5
		MOV  R1, #0x99 
		STR  R1,[R0]
		ADD  R0, #0x5
		MOV  R1, #0x67 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x16 
		STR  R1,[R0] 
		ADD  R0, #0x5
		MOV  R1, #0x85 
		STR  R1,[R0]
        ADD  R0, #0x5
		MOV  R1, #0x45 
		STR  R1,[R0]
		ADD  R0, #0x5
		MOV  R1, #0x77 
		STR  R1,[R0]
	    MOV  R2,  #0x20000000              
        ADD  R2, #0x5           
		LDR R3, [R2]            ;store first element of array  
        MOV R4, #1
loop    CMP R4, #10              ;R4-->count
        BEQ done
		ADD R2, #0x5                
		LDR R5, [R2]            ;store the next consecutive element     
		CMP R5, R3              ;comparison
		IT GE
		MOVGE R3, R5
		ADD R4,R4,#1
		B loop
done	ADD R2, #0x5
        STR R3, [R2]            ;storing largest number in memory
        LDR R0, [R2]
		BL printMsgp            ;printing largest number in memory
stop    B stop ; stop program
     ENDFUNC
     END 