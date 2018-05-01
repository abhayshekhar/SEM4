.data



s1:	    .asciiz	    "Enter 1st side of triangle: "

s2:	    .asciiz	    "Enter 2nd side of triangle: "

s3:	    .asciiz	    "Enter 3rd side of triangle: "

right:      .asciiz         "Triangle is right angled"

wrong:      .asciiz         "Triangle is not right angled"

 

.text

.globl main

main:



li $v0, 4

la $a0, s1

syscall



li $v0, 5

syscall



move $t0, $v0

                

li $v0, 4

la $a0, s2

syscall



li $v0, 5

syscall



move $t1, $v0



li $v0, 4

la $a0, s3

syscall



li $v0, 5

syscall



move $t2, $v0

                mul $t0, $t0, $t0

                mul $t1, $t1, $t1

                mul $t2, $t2, $t2



                add $t3, $t0, $t1

                add $t4, $t1, $t2

                add $t5, $t2, $t0



                beq $t3, $t2, rightangled

                beq $t4, $t0, rightangled

                beq $t5, $t1, rightangled

                j notrightangled

        

rightangled:   la $a0, right

                li $v0, 4

                syscall

                j end



notrightangled:

                la $a0, wrong

                li $v0, 4

                syscall



end:           li $v0, 10

                syscall
