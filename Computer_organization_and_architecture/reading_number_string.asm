.data

msg1:.asciiz"ënter the  no \n"

msg2:.asciiz"the number read is \n "

msg3:.asciiz"enter the string \n"

msg4:.asciiz"your string is \n"



.text

.globl main

main:

 

li $v0,4        #for printing the first msg        

la $a0,msg1

syscall





li $v0,5       #reading the integer

syscall

move $t0,$v0



li $v0,4    # for printing the second msg

la $a0,msg2

syscall





li $v0,1      #for printing the entered integer

move $a0,$t0

syscall





li $v0 ,4      #for printing the msg3

la $a0,msg3

syscall







li $v0,8       # for reading string

syscall

move $t0,$v0



li $v0,4    #for printing the fourth msg

la $a0,msg4

syscall



li $v0,4     #for printing the entered string

move $a0,$t0

syscall







li $v0,10

syscall
