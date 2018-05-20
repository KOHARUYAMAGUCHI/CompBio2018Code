#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100

int main(void){
  int a[N],aa[N],i,t,r1,r2,r,k,A,S,T,Y;
  srand(time(NULL));typedef int MyCustomType;
for(S=0;S<1000;S++){

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
    A=0;
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
    Y=Y+1;
    T=T+t+2;
    break;
  }
}
printf("%d\n",t+2);

if(Y==100){
  printf("%d\n",T/100);
  break;
}
}
}
  return 0;
}
