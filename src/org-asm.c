/**************************************************************
 * This started as a joke on Discord                          *
 * (c) 2021 gnuoveryou under CC 0 license                     *
 **************************************************************/

#include <stdio.h>
#include <string.h>

void org_asm(char args[], char file[]){
  if(!file){
    if(!args){
      printf("Error: no arguments!");
    }
  }
  else if(strcmp(args[0], "help") == 0) {
    printf("orgasm is an assembly language and assembler that started as a joke on Discord.\n");
    printf("Usage: \n");
    printf("./org-asm help\n");
    return;
  }
  else if(strcmp(args[0], "run") == 0) {
    if(!file) {
      printf("Error: no files to run.");
      return;
    }
    else if(!strcmp(file[0], ".asm") || !strcmp(file[0], ".s") >= 0) {
      printf("Error: file not assembly (.asm or .s)!");
      return;
    }
  }
}
