#include<stdio.h>

void inverte(char *a, char *b){
	char aux, aux2;
	aux = *a;
	aux2 = *b;
	*a = aux2;
	*b = aux;
	
	
}

int main()
{
   	char x, y;
	scanf("%c %c", &x, &y);
    inverte(&x, &y);
   	printf("%c%c", x, y);
 	return 0; 

}