#include<stdio.h>
#define upper 300
#define lower 0
#define step 20
int main(){
  int fahr=lower,cel=0;
  while(fahr <= upper){
    cel = 5 * (fahr-32) / 9;
    printf("%3d\t %6d\n", fahr, cel);
    fahr= fahr + step;
  }

  return 0;
}
	   
  
  

