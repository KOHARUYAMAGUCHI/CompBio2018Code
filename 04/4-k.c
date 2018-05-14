#include<stdio.h>

int main(void){
  int a,b,c,d,e,f;
  double A,B,C,D;

  FILE *fp;
  fp=fopen("output_4-k.csv","w");

  a=7;
  b=2;
  c=3;
  d=4;
  e=3;
  f=100;

  A=(-a*b*f-b*c*d)/(b*f-c*e);
  B=(a*c*f*+c*c*d)/(b*f-c*e);
  C=(a*e*e+b*d*e)/(b*f-c*e);
  D=(-a*e*f-b*d*f)/(b*f-c*e);

fprintf(fp,"%f,%f,%f\n",A+D,A*D-B*C,(A-D)*(A-D)+4*B*C);

fclose(fp);

return 0;
}
