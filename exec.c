#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define BUFFSIZE 1024

int main(int argc, char** argv){
  char command[BUFFSIZE];
  if(argc < 5){
    printf("Usage : %s <int> <int> <int> <exe-file>\n", argv[0]);
    exit(-1);
  }

  int a = (int) strtol(argv[1], (char **)NULL, 10);
  int b = (int) strtol(argv[2], (char **)NULL, 10);
  int c = (int) strtol(argv[3], (char **)NULL, 10);

  printf("Integer inputs are : %d, %d, %d\n", a,b,c);
  char *exe = argv[4];
  
  strcpy(command, exe);
  sprintf(command, "%s %d %d %d", exe, a, b, c);
  printf("Executing %s through c program with arguments - %d, %d, %d\n", exe,a,b,c);
  printf("Passed Command on system : %s\n", command);

  system(command);

  return 0;
}