.data

str1:.asciiz"how are you "

str2:.ascii"i am fine "

str3:.ascii"what about you "



.text

.globl main

main:



li $v0,4

la $a0,str1

syscall



 li $v0,4

la $a0,str2

syscall



j L1 





li $v0,4

la $a0,str3

syscall





 L1 :li $v0,10 

sycall
