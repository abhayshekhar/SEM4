

#adding the digits of a binary number eg. 4 in binary is 100 so 1+0+0=1







.data

msg1:.asciiz"enter  number"

msg2:.asciiz"sum of the bits is\n"



.text

.globl main

main:



li $v0,4

la $a0,msg1

syscall





li $v0,5

syscall

move $t0,$v0



li $t1,0

li $t2,0









loop:

rem $t1,$t0,2

div $t0,$t0,2

add $t2,$t2,$t1

bne $t0,0,loop



li $v0,4

la $a0,msg2

syscall



li $v0,1

move $a0,$t2

syscall



li $v0,10

syscall
