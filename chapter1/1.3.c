#include<stdio.h>
#define upper 300
#define lower 0
#define step 20
int main(){
  float fahr=lower, cel=lower;
  printf("Conversion Table From Fahranite to Celsius\n");
  printf("Fahranite  Celsius\n");
  while(fahr<=upper){
    cel= (5.0/9.0) * (fahr -32);
    printf("%3.0f \t %6.1f\n", fahr, cel );
    fahr= fahr + step;
  }

  return 0;
}
    
