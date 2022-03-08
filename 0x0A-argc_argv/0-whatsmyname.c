#include <stdio.h>
/**
 *@argc: array argv
 *@argv: array
 *return: 0
 */
int main(int argc, char *argv[]){
  int i;
  for (i = 0; i < argc; i++)
    printf("%s\n", argv[i]);
  return (0);
}
  
