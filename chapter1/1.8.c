#include<stdio.h>
int main(){
//count blanks, tabs, and newlines
int count, storevar;
 while((storevar = getchar()) != EOF){
  if(storevar == '\n' || storevar== '\t' || storevar== ' '){
    count++;
  }
 }
printf("%d\n", count);

return 0;
}
     
