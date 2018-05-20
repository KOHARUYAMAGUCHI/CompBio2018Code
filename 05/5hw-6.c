#include<stdio.h>
#include<math.h>

int main(void){
  int N;
  double T,p;
  N=100;
  p=0.1;

  T=(-1/p)*(2*N*(1-p)*log(1-p));

  printf("%d",T);

  return 0;
}
