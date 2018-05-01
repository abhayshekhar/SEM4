.data

mesg1: .asciiz"my first code\n"

mesg2: .asciiz"myself abhay"

.text

.globl main

main :



li $v0,4

la $a0,mesg1

syscall



li $v0,4 

la $a0,mesg2

syscall



li $v0,10

syscall
