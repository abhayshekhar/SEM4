.data 

name: .asciiz "cse ece"

address: .asciiz "hi are you fine"

abc: .asciiz "hello"

def: .asciiz "fine"





.text

.globl main

main:

li$v0,4

la $a0,name

syscall



li $v0,4

la $a0,address

syscall



li $v0,4

la $a0,,def

syscall







li $v0,10

syscall
