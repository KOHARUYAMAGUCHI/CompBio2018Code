#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,M,N,x,i,a,t,aa;
  srand(time(NULL));
  M=1;
  N=6;
  a=0;

for(t=1;t<1001;t++){
  x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      break;
    }
  }
  a=a+i;
  if(t==1){
    printf("%d\n", a);
  }

    else if(t==5){
      printf("%d\n", a/5);
    }

      else if(t==10){
        printf("%d\n", a/10);
      }

        else if(t==100){
          printf("%d\n", a/100);
        }

          else if(t==1000){
            printf("%d\n", a/1000);
            }
            for(i=0;i<N;i++){
              A=A+a[i];
            }
            if(A=0){
              break;
            }
}
  return 0;
}
