/*        5
	4 5
      3 4 5
    2 3 4 5
  1 2 3 4 5*/

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
      printf("%d ",c);
   }
printf("\n");
}

getch();
}