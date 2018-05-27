#include<stdio.h>

int main(void){
  int
  double x1,x2,y1,y2;
  char name[100];
  double t[100],x[100];
  double
  int ret;

  FILE *fp;

  //ファイルからデータを読み込む
  fp=fopen("6-hw3.csv","r");
  fscanf(fp,"%[^,],%s,name,name);
  i=0;
  while((ret=fscanf(fp,"%lf,%lf",&t[i],&x[i]))!=EOF){
    i++;
  }
  fclose(fp);

  
}
