/*1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5*/

#include<stdio.h>
#include<conio.h>

void main(){

int a,b;

clrscr();

for(a=5;a>=1;a--){
    for(b=1;b<=a;b++){
       printf("%d ",b);
    }
printf("\n");
}

for(a=2;a<=5;a++){
    for(b=1;b<=a;b++){
       printf("%d ",b);
    }
printf("\n");
}

getch();
}