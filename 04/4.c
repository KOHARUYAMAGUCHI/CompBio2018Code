#include<stdio.h>

int main(void){
  int a,b,c,d,e,f;
  double A,B,C,D;

  FILE *fp;
  fp=fopen("output_4.csv","w");

  a=8;
  b=50;
  c=1;
  d=6;
  e=1;
  f=2;

  A=(-a*b*f+b*c*d)/(b*f-c*e);
  B=(-a*c*f*+c*c*d)/(b*f-c*e);
  C=(a*e*e-b*d*e)/(b*f-c*e);
  D=(a*e*f-b*d*f)/(b*f-c*e);

fprintf(fp,"%f,%f,%f\n",A+D,A*D-B*C,(A-D)*(A-D)+4*B*C);

fclose(fp);

return 0;
}
