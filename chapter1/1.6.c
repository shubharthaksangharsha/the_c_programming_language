#include<stdio.h>
int main(){
  int c;
  //  c= getchar(); // first version 
  while(c=getchar() != EOF){
    printf("\ngetchar!=EOF= %d\t char= %d \t EOF= %d\n", getchar()!=EOF,c,EOF);
    putchar(c);
    //    c= getchar(); // first version
  }
  printf("%d",getchar()!=EOF);

  return 0;
}
