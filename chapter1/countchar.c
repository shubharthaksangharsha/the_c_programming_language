#include<stdio.h>
int main(){
  long nc;
  nc = 0;
  while(getchar()!=EOF){
    printf("%ld\n", nc);
    ++nc;
  }
  return 0;
}
