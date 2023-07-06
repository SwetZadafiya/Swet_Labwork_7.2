/*5 4 3 2 1
    5 4 3 2
      5 4 3
	5 4
	  5*/

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;

clrscr();

for(a=1;a<=5;a++){
   for(b=1;b<=a;b++){
      printf("  ");
   }
   for(c=5;c>=a;c--){
      printf("%d ",c);
   }
printf("\n");
}

getch();
}