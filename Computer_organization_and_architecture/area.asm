.data 

length : .word 12

breadth : .word 15

area: .word 0

newline : .asciiz"\n"



.text

.globl main

main:

lw $t0,length



lw $t1,breadth

mul $t2,$t0,$t1



sw $t2,area



li $v0,4



la $a0,newline

syscall









li $v0,10

syscall
