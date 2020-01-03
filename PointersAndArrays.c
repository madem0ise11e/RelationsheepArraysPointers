#include<stdio.h>
int main(){
  int i, x[6], sum = 0;
  printf("Enter 6 numbers: ");
  for(i=0; i<6; ++i){
    //equivalent to scanf("%d", &x[i]);
      scanf("%d", x+i);

    //equivalent to sum += x[i]
      sum += *(x+i);
  }
  printf("Sum = %d", sum);
  return 0;
}
