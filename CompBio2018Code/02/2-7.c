#include <stdio.h>

int main(void){
  double x0, xx, r, x, k;
  int t;
  r=0.8;
  x0=1.0;
  k=100.0;

  FILE *fp;
  fp=fopen("output.txt","w");
  fprintf(fp, "%d, %f\n", 0, x0);

  x=x0;
  for(t=1; t<300; t++){
    xx=x+r*(1-x/k)*x;
    fprintf(fp,"%d, %f\n", t, xx);
    x=xx;
  }

  fclose(fp);

  return 0;
}
