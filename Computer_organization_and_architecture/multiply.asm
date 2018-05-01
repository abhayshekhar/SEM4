.data

str1:.asciiz"Enter first number"

str2:.asciiz"Enter second number"

str3:.asciiz"The product of the two numbers is"



.text

.globl main



main:



li $v0,4

la $a0,str1

syscall

 

li $v0,5

syscall

move $t0,$v0



li $v0,4

la $a0,str2

syscall

 

li $v0,5

syscall

move $t1,$v0





li $v0,4

la $a0,str3

syscall



mul $t2,$t0,$t1





li $v0,1

move $a0,$t2

syscall



li $v0,10

syscall








