#include <stdio.h>

int main(void){
  int i;
  double r,t,dt,B,S,SS,I,II,R,RR;

  FILE *fp;
  fp=fopen("output_6-4.csv","w");

  dt=0.0001;
  B=0.002;
  r=0.1;

  t=0.0;
  S=1000.0;
  I=500.0;
  R=10.0;

  fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);

  for(i=1;i<10000;i++){
    t=dt*i;
    SS=S+(-B*S*I)*dt;
    II=I+(B*S*I-r*I)*dt;
    RR=R+(r*I)*dt;
    S=SS;
    I=II;
    R=RR;

    if(i%100==0){
      fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
    }
    }
    fclose(fp);
    return 0;
  }
