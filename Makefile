SRC=./src

all: 
	gcc $(SRC)/org-asm.c -o orgasm -nostartfiles
