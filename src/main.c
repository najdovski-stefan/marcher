#include <unistd.h>
#include <stdio.h>
#include "lib/marcher.h"

/*
 * GOAL for scanner:
 * var x = 1 + (sin(x)-4^2)/3
 */


int main(int argc, char* argv[]){
 write(1,"Marcher 0.0.1\n",15);

  if(argc > 1){
    //printf("argv[0] = %s\n",argv[0]); name of the program
    printf("argv[1] = %s\n",argv[1]);
    if(argv[2] != NULL){
      //optional flag for debug
      printf("argv[2] = %s\n",argv[2]);
    }
  }else{
    puts("Info: Usage: marcher file.peli [optional]");
  }




}
