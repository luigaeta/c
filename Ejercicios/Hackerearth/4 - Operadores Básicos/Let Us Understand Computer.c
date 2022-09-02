#include <stdio.h>

unsigned int conteoBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
unsigned long long int divisionbits(unsigned long long int numero, unsigned long long int Nbits)
{
    int i;
    long long int divisor=numero,cociente,resultado=0;
    while (divisor)
    {

        cociente = numero/divisor;
        if(conteoBits(cociente)<Nbits)
        {
            resultado++;
        }
        divisor--;
    }
    return resultado;
}

int main(){
    long long int T;
    int i;
	scanf("%lld", &T);    
    unsigned long long int X[T];
    for(i=0;i<T;i++)
    {
        scanf("%lld", &X[i]);  
    }
    for(i=0;i<T;i++)
    {
        printf("%lld\n",divisionbits(X[i],conteoBits(X[i])));
    }
    return 0;
}
