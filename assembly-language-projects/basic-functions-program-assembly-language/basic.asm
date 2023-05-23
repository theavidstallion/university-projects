.MODEL SMALL
.STACK 100H
.DATA
    MSG1    DB 10,"                      *ASSEMBLY LANGUAGE 8086 PROJECT*$" 
    MSG2    DB 10,13,10,13,"CHOOSE AN OPERATION:>$"
    MSG3    DB 10,13,"1)ADDITION $"
    MSG4    DB 10,13,"2)SUBTRACTION$"
    MSG5    DB 10,13,"3)TO ENTER YOUR NAME$"
    MSG6    DB 10,13,"4)FOR COMPARISON OF TWO NUMBERS$"
    MSGC    DB 10,13,"5)IT WILL TELL YOU ABOUT CHARACTER,NUMERIC OR ALPHABET$"  
    MSGA    DB 10,13,"6>PRINT ALL ALPHABETS$"
    MSG7    DB 10,13,"INVALID INPUT$" 
    MSG8    DB 10,13,"ENTER 2 DIGITS (0-9) FOR SUBTRACTON $"
    MSG9    DB 10,13,"THE SUBTRACTION OF $"
    MSG10   DB       " AND $"
    MSG11   DB       " IS $" 
    MSG12   DB 10,13,"ENTER 2 DIGITS (0-9) FOR ADDITION $"
    MSG13   DB 10,13,"THE SUM OF $"
    MSG14   DB       " AND $"
    MSG15   DB       " IS $"  
    MSG17   DB 10,13,"ENTER YOUR NAME :$"
    MSG18   DB 10,13,"YOU Entered $" 
    MSG19   DB 10,13,"ENTER TWO NUMBER FOR COMPARISON$"
    MSG20   DB 10,13,"A IS GREATER $"
    MSG21   DB 10,13,"B IS GREATER $"
    MSG22   DB 10,13,"ENTER ANY THING FROM KEYBOARD$"
    MSG23   DB 10,13,"NUMERIC$"
    MSG24   DB 10,13,"IT IS A CAPITAL ALPHABET$" 
    MSG25   DB 10,13,"SPECIAL CHARACTER$" 
    MSG26   DB 10,13,"IT IS A SMALL ALPHABET$"
    MSG27   DB 10,13,"PRESS Y FOR AGAIN OR N FOR TERMINATION$"

    
    S1      DB ?
    S2      DB ?
    SV1     DB ?
    SV2     DB ? 
    Q1      DB ?
    A2      DB ?
    Z3      DB ?
    W4      DB ?
    S5      DB ?
    X6      DB ?
    E7      DB ?
    D8      DB ?
    C9      DB ?
    R10     DB ?  
    
 .CODE
 MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    
BEGIN:
    MOV AH,9
    LEA DX,MSG1
    INT 21H 
    
    LEA DX,MSG2
    INT 21H
    
    LEA DX,MSG3
    INT 21H
    
    LEA DX,MSG4
    INT 21H
    
    LEA DX,MSG5
    INT 21H
    
    LEA DX,MSG6
    INT 21H 
    
    LEA DX,MSGC
    INT 21H
    
    LEA DX,MSGA
    INT 21H
    
    
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H  
    
    MOV AH,1
    INT 21H   
    
    CMP AL,"1"
    JE ADDITION  
    
    CMP AL,"2"
    JE SUBTRACTION  
    
    CMP AL,"3"
    JE NAME2
    
    CMP AL,"4"
    JE COMPARISON
    
    CMP AL,"5"
    JE NAS_C 
    
    CMP AL,"6"
    JE LOOP1 
    
    MOV AH,9
    LEA DX,MSG7
    INT 21H  
    
    JMP EXIT     
    
ADDITION: 
        MOV AH, 9
        LEA DX, MSG12
        INT 21H 
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV DL,13
        INT 21H
        
        MOV AH, 1
        INT 21H
        MOV S1, AL
        
        INT 21H
        MOV S2, AL 
        
        MOV AH, 9
        LEA DX, MSG13
        INT 21H
        
        MOV AH, 2
        MOV DL, S1
        INT 21H
        
        MOV AH, 9
        LEA DX, MSG14
        INT 21H 
        
        MOV AH, 2
        MOV DL, S2
        INT 21H
        
        MOV AH, 9
        LEA DX, MSG15
        INT 21H
        
        MOV BL, S1
        ADD BL, S2
        
        SUB BL, 48
        
        MOV AH, 2
        MOV DL, BL
        INT 21H 
        JMP EXIT 
              
        
SUBTRACTION: 
        MOV AH, 9
        LEA DX, MSG8
        INT 21H 
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV DL,13
        INT 21H
        
        MOV AH, 1
        INT 21H
        MOV SV1, AL
        
        INT 21H
        MOV SV2, AL 
        
        MOV AH, 9
        LEA DX, MSG9
        INT 21H
        
        MOV AH, 2
        MOV DL, SV1
        INT 21H
        
        MOV AH, 9
        LEA DX, MSG10
        INT 21H 
        
        MOV AH, 2
        MOV DL, SV2
        INT 21H
        
        MOV AH, 9
        LEA DX, MSG11
        INT 21H
        
        MOV BL, SV1
        SUB BL, SV2
        
        ADD BL, 48
        
        MOV AH, 2
        MOV DL, BL
        INT 21H  
        JMP EXIT 
        
        
NAME2:
        MOV AH,9
        LEA DX,MSG17
        INT 21H  
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV DL,13
        INT 21H
        
        
        MOV AH, 1
        INT 21H
        MOV Q1, AL
        
        INT 21H
        MOV A2,AL
        
        INT 21H
        MOV Z3,AL
        
        INT 21H
        MOV W4,AL
        
        INT 21H
        MOV S5,AL
        
        INT 21H
        MOV X6,AL
        
        INT 21H
        MOV E7,AL
        
        INT 21H
        MOV D8,AL
        
        INT 21H 
        MOV C9,AL
        
        INT 21H
        MOV R10,AL
        
        MOV AH,9
        LEA DX,MSG18
        INT 21H
        
        MOV AH,2
        MOV DL,Q1
        INT 21H
        
        MOV DL,A2
        INT 21H
        
        MOV DL,Z3
        INT 21H
        
        MOV DL,W4
        INT 21H
        
        MOV DL,S5
        INT 21H
        
        MOV DL,X6
        INT 21H
        
        MOV DL,E7
        INT 21H
        
        MOV DL,D8
        INT 21H
        
        MOV DL,C9
        INT 21H
        
        MOV DL,R10
        INT 21H
        JMP EXIT 
        
        
COMPARISON:  
        MOV AH,9
        LEA DX,MSG19
        INT 21H 
        
        MOV AH,2
        MOV DL,10
        INT 21H 
        
        MOV DL,13
        INT 21H
        
        
        MOV AH,1
        INT 21H
        MOV BL,AL
        
        INT 21H
        MOV BH,AL
        
        CMP BL,BH
        JL B_GREAT
        
        MOV AH,9
        LEA DX,MSG20
        INT 21H
        
        JMP EXIT
        
B_GREAT:
        MOV AH,9
        LEA DX,MSG21
        INT 21H
        JMP EXIT 
        
NAS_C:
        MOV AH,9
        LEA DX,MSG22
        INT 21H 
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV AH,2
        MOV DL,13
        INT 21H
        
        MOV AH,1
        INT 21H
        MOV BL,AL 
        
        MOV AH,9
        
        CMP BL,48
        JL S_CH
        
        CMP BL,57
        JG CAPITAL
        
        MOV AH,9
        LEA DX,MSG23
        INT 21H
        
        JMP EXIT
    
CAPITAL:
        CMP BL,65
        JL S_CH
            
        CMP BL,90
        JG SMALL
            
        MOV AH,9
        LEA DX,MSG24
        INT 21H
               
        JMP EXIT
            
SMALL:

        CMP BL,97
        JL  S_CH
        
        CMP BL,122
        JG  S_CH  
        
        MOV AH,9
        LEA DX,MSG26
        INT 21H
           
        JMP EXIT 
    
S_CH:
            
        MOV AH,9
        LEA DX,MSG25
        INT 21H
            
        JMP EXIT

LOOP1:
        MOV CX,26
        MOV DX,65
        L1:
        MOV AH,2
        
        INT 21H
        
        INC DX
        
        LOOP L1                      
          
EXIT:
        
        MOV AH,9
        LEA DX,MSG27
        INT 21H
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV DL,13
        INT 21H 
        
        MOV AH,2
        MOV DL,10
        INT 21H
        
        MOV DL,13
        INT 21H
        
        MOV AH,1
        INT 21H
        
        CMP AL,"Y"
        JE BEGIN
        
        CMP AL,"y"
        JE BEGIN
        
        MOV AH,4CH
        INT 21H
        
    MAIN ENDP
 END MAIN
