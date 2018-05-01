

.data

mesg1:	    .asciiz	"please enter the number: "

mesg2:      .asciiz     "The sum of squares of digits is \t" 

  



.text

.globl main

    main:

        li $v0, 4

        la $a0, mesg1

        syscall



        li $v0, 5

        syscall

        move $t1, $v0



        li $t6, 0

        li $t0, 10



lp:	

        rem $t3, $t1, $t0

        div $t1, $t1, $t0



        mul $t3, $t3, $t3

        add $t6, $t6, $t3



        bne $t1, $zero, lp

        

print:  la $a0, mesg2



        li $v0, 4

        syscall



        li $v0, 1

        move $a0, $t6

        syscall



        li $v0, 10

        syscall  
