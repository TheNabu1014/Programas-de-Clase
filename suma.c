#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	int exit=0;
	do{
	float x, y, c;
	printf("\n\nDame el primer numero a sumar:");
	scanf("%f",&x);
	printf("\n\nDame el segundo numero a sumar:");
	scanf("%f",&y);
	c = x+y;
	printf("\n\nEl resultado es:%f\n\n",c);
	printf("\n\nSeguir? 0:SI 1:NO\n\n");
	scanf("%d",&exit);
	}while(exit != 1);
return (0);
}
