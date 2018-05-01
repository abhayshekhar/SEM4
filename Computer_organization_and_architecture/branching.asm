.data

.text

.globl main

main:



li $t0,3

L1:addi $t0,$t0,-1



nop # no operation

 

bne $t0,$zero,L1



li $t0,5

L2: addi $t0,$t0,1

nop

bne $t0,$t1,L2





li $v0,10

syscall
