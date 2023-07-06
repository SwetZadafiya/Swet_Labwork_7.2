/*1 2 3 4 5 5 4 3 2 1
  1 2 3 4     4 3 2 1
  1 2 3         3 2 1
  1 2             2 1
  1                 1*/

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
   for(a=1;a<=5;a++){
   for(b=a;b<=5;b++){
       printf("%d",b);
   }
printf("\n");
   }
printf("\n");
}

getch();
}