#include<stdio.h>
#define upper 300
#define lower 0
#define step 20
int main(){
  //using float datatype
    float fahr=lower, cel=lower;
  printf("Cel to Fahr Convertor\n");
  printf("Cel \t Fahr\n");
    while(cel<=upper){
    fahr= (9.0/5.0) * (cel + 32);
    printf("%3.0f \t %6.1f\n", cel, fahr);
    cel= cel + step;
    }

    //using int datatype
    /*    int fahr = lower, cel = lower;
  while(cel<=upper){
    fahr= (9/5) * (cel + 32);
    printf("%3d \t %6d\n", cel, fahr);
    cel= cel + step;
  }
    */
    
  return 0;
}
