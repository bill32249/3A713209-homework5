#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int h;
  int m;
  int s;
  printf("��J�p��");
  scanf("%d",&h);
  printf("��J����");
  scanf("%d",&m);
  printf("��J��");
  scanf("%d",&s);
  printf("%d��:%d��:%d��\n",h,m,s); 
  int h2;
  int m2;
  int s2;
  printf("��J�p��");
  scanf("%d",&h2);
  printf("��J����");
  scanf("%d",&m2);
  printf("��J��");
  scanf("%d",&s2);
  printf("%d��:%d��:%d��\n",h2,m2,s2);
  int hh = (h - h2) * 3600;
  int mm = (m - m2) * 60 ;
  int ss = s - s2;
  int t = hh + mm + ss;
  printf("��Ʈt��:%d",t);    
  system("PAUSE"); 
  return 0;
}
