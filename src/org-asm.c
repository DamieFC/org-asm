/**************************************************************
 * This started as a joke on Discord                          *
 * (c) 2021 gnuoveryou under CC 0 license                     *
 **************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void org_asm(char args[], char file[]){
  if(!file){
    if(!args){
      printf("Error: no arguments!\n");
    }
  }
  tolower(args[]);
  tolower(file[])
  else if(strcmp(args[0], "help") == 0) {
    printf("orgasm is an assembly language and assembler that started as a joke on Discord.\n");
    printf("Usage: \n");
    printf("./org-asm help\n");
    return;
  }
  else if(strcmp(args[0], "run") == 0) {
    if(!file) {
      printf("Error: no files to run.\n");
      return;
    }
    else if(!strcmp(file[0], ".asm") >= 0 || !strcmp(file[0], ".s") >= 0) {
      printf("Error: file not assembly (.asm or .s)! Now can be uppercase and lowercase.\n");
      return;
    }
    else {
      // idk, the language stuff will go here
    }
  }
}
