/*1234554321
  1234  4321
  123    321
  12      21
  1        1
  1        1
  12      21
  123    321
  1234  4321
  1234554321*/

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c,d,e,f;

clrscr();

for(a=5;a>=1;a--){
    for(b=1;b<=a;b++){
       printf("%d",b);
    }
    for(c=a;c<=4;c++){
       printf(" ");
    }
    for(d=4;d>=a;d--){
       printf(" ");
    }
    for(e=a;e>=1;e--){
       printf("%d",e);
    }
printf("\n");
}

for(a=1;a<=5;a++){
    for(b=1;b<=a;b++){
       printf("%d",b);
    }
    for(c=a;c<=4;c++){
       printf(" ");
    }
    for(d=4;d>=a;d--){
       printf(" ");
    }
    for(e=a;e>=1;e--){
       printf("%d",e);
    }
printf("\n");
}

getch();
}