/*5 4 3 2 1
    4 3 2 1
      3 2 1
	2 1
	  1*/

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

for(a=5;a>=1;a--){
   for(b=4;b>=a;b--){
      printf("  ");
   }
   for(c=a;c>=1;c--){
      printf("%d ",c);
   }
printf("\n");
}

getch();
}