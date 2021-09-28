/**************************************************************
 * This started as a joke on Discord                          *
 * (c) 2021 gnuoveryou under CC 0 license                     *
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int org_asm(char args[], char file[]){
  tolower(args[0]);
  tolower(file[0]);
  if(!file){
    if(!args){
      printf("Error: no arguments!\n");
      return(1);
    }
  }
  else {
    printf("Error: no files");
    return(1);
  }
  else if(strcmp(args[0], "help") == 0) {
    printf("orgasm is an assembly language and assembler that started as a joke on Discord.\n");
    printf("Usage: \n");
    printf("./org-asm help\n");
    return;
  } else if(strcmp(args[0], "run") == 0) {
      if(!file) {
        printf("Error: no files to run.\n");
        return;
      } else if(sizeof(file) > 1) {
        printf("Error: more than 1 file. Right now there's only one file at a time.");
        return;
      } else if(!strcmp(file[0], ".asm") >= 0 || !strcmp(file[0], ".s") >= 0) {
        printf("Error: file not assembly (.asm or .s)! It can be uppercase and lowercase.\n");
        return;
      } else {
        char code[] = fopen(file[0], "r");
        if(strcmp(code, ";") == 0) {
          while(code != "\n") {
            ++code;
          }
        } else if(code == "nope") {
          code++;
        } else if(strcmp(code, "halt") ==0) {
          exit(EXIT_SUCCESS);
        } else if(strcmp(code, "hcf") == 0) {
          exit(EXIT_SUCCESS);
        } else {
          printf("Error: error in the code (nitwit) or in this program (bad Damien)");
        }
      }
    }
}
