.data

abc: .word 5

def: .word 7 

ghi: .word 0

line: .asciiz "sum of the no. is \n"

.text

.globl main

main:



lw $t0 ,abc

lw $t1 ,def

add $t2,$t1,$t0

sw $t2,ghi



li $v0,4

la $a0,line

syscall



li $v0,1

lw $a0,ghi   # if we will use la it will give wrong output

syscall



li $v0,10

syscall
