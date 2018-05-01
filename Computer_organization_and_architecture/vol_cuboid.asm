.data

abc: .word 5

def: .word 7 

ghi: .word 10

jkl: .word 1

line: .asciiz "volume of the cuboid is \n"

.text

.globl main

main:



lw $t0 ,abc

lw $t1 ,def

lw $t2,ghi

mul $t3,$t1,$t0

mul $t3,$t2,$t3

sw $t3,jkl



li $v0,4

la $a0,line

syscall



li $v0,1

lw $a0,jkl   

syscall



li $v0,10

syscall
