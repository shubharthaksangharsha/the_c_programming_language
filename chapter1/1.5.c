#include<stdio.h>
#define upper 300
#define lower 0
#define step 20;
int main(){
  //using for loop
  /*  int fahr=0;
  for(fahr=300; fahr>= 0; fahr= fahr-20){
    printf("%3d\t %6.1f\n", fahr, ((5.0/9.0) * (fahr-32)));
    }*/

  //using while loop
  int fahr= upper;
  while(fahr>=lower){
    printf("%3d\t%6.1f\n", fahr, ((5.0/9.0) * (fahr-32)));
    fahr = fahr - step;
  }
  
  return 0;

}
