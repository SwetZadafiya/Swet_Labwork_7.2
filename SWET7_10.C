/*           *
	   * * *
	 * * * * *
       * * * * * * *
     * * * * * * * * *  */

#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c,d;
char e='*';

clrscr();

for(a=1;a<=5;a++){
    for(b=4;b>=a;b--){
       printf(" ");
    }
    for(c=1;c<=5;c++){
       printf("%c",e);
    }
    for(d=a;d>=1;d--){
       printf("%c",e);
    }
printf("\n");
}

getch();
}