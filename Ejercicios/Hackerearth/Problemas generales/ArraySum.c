#include <stdio.h>

int main(){
	int size,i;
	scanf("%i", &size);
	unsigned long long int numeros[sizeof(size)],suma=0;
	for(i=0;i<size;i++)
	{
	scanf(" %llu", &numeros[i]);
	}
	for(i=0;i<size;i++)
	{
		suma=suma+numeros[i];
	}
	printf("%llu",suma);
}
