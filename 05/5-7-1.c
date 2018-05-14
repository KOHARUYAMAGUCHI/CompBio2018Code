#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50

int main(void){
  int a[N],aa[N],i,t,r1,r2,r,k,A;
  k=20;
  srand(time(NULL));

  for(i=0;i<k;i++){
    a[i]=0;
  }
  for(i=k;i<N;i++){
    a[i]=1;
  }
  for(i=0;i<N;i++){
    printf("%d",a[i]);
  }
  printf("\n");

  for(t=0;t<100;t++){
    for(i=0;i<N;i++){
      r1=rand()%N;
      r2=rand()%N;
      r=rand()%2;
      if(r==0){
        aa[i]=a[r1];
      }
      if(r==1){
        aa[i]=a[r2];
      }
    }
    for(i=0;i<N;i++){
      a[i]=aa[i];
      printf("%d",a[i]);
    }
    printf("\n");

  for(i=0;i<N;i++){
    A=A+a[i];
  }
  if(A==0){
    break;
  }
}
  return 0;
}
