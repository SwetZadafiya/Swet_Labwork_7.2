/*        5
	4 4
      3 3 3
    2 2 2 2
  1 1 1 1 1*/

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

for(a=5;a>=1;a--){
   for(b=1;b<=a;b++){
      printf("  ");
   }
   for(c=a;c<=5;c++){
      printf("%d ",a);
   }
printf("\n");
}

getch();
}