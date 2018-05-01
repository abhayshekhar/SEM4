.data

str1: .asciiz "hii how are u"

str2: .asciiz "ï am fine"



.text

.globl main

main:



li $t0,0x10010000

lb $t1,0($t0)    # loading is like t1<--t0+0

lb $t2,1($t0)    # loading is like t2<--t0+1

lb $t3,2($t0)

lb $t4,3($t0)



li $t5,0x10020000

sb $t1,0($t5)   #storing is like t1-->t5+0

sb $t2,1($t5)   #storing is like t2-->t5+1

sb $t3,2($t5)

sb $t4,3($t5)





li $v0,10

syscall
