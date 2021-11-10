/************************************************
 * This started as a joke on Discord            *
 * (c) Damien C (DamieFC, gnuoveryou) under the *
 * CC0 license                                  *
 ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int org_asm(char *usage[], char *args[]) {
  if(strcmp(usage[0], "help") == 0) {
    printf("./orgasm <usage> <args>\n");
    printf("Options for usage: help\n");
  }
  printf("You're an orgasm addict!");
}
