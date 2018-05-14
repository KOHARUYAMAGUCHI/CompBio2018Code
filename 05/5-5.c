#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,M,N,x,i,a;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  a=0;

for(t=1;t<1000;t++){

}
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}
