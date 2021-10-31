     AREA     even, CODE, READONLY
     EXPORT __main
     IMPORT printMsgp
     ENTRY 
__main  FUNCTION
        ;Array of 10 elements in memory   	
	    MOV  R0, #0x20000000       ; Base Address
		ADD  R0, #0x5
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
		MOV  R1, #0x42 
		STR  R1,[R0]
		ADD  R0, #0x5
		MOV  R1, #0x78 
		STR  R1,[R0]
	    MOV  R2,  #0x20000000              
        MOV R3, #1
		MOV R7, #0               ;R7-->to store count of even numbers
		MOV R8, #2
loop    CMP R3, #11              ;R3-->count of loop
        BEQ done
		ADD R2, #0x5                
		LDR R4, [R2]            ;store the next consecutive element     
	    UDIV R6,R4, R8          
        MLS  R6,R6,R8,R4        ;to find modulus
        CMP R6,#0		
		IT EQ
		ADDEQ R7,R7,#1          
		ADD R3,R3,#1
		B loop
done	ADD R2, #0x5
        STR R7, [R2]            ;storing count of even numbers in memory
        LDR R0, [R2]
		BL printMsgp            ;printing count of even numbers
stop    B stop ; stop program
     ENDFUNC
     END 