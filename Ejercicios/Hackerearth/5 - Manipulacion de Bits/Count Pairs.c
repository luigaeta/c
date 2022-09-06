#include <stdio.h>
long int xor(long int a,long int b){
    long int r,s=0;
    r=a^b;
    if(r>a&&r>b)
    {
        s+=1;
    }    
    return s;
}
int main(){
    long int T, N,i,j,k,R;
    scanf("%li",&T);
    long int *Resultados;
    Resultados = (long int*)malloc(T * sizeof(long int));
    for(i=0;i<T;i++)
    { 
        
        scanf("%li",&N);
        long int *A;
        A = (long int*)malloc(N * sizeof(long int));
        for(j=0;j<N;j++)
        {
            scanf("%li",&A[j]);
        }
        R=0;
        for(j=0;j<N;j++)
        {
            for(k=j+1;k<N;k++)
            {
                if(xor(A[j],A[k]))
                {
                    R +=1;
                }

            }
        }
    Resultados[i] = R;
    }
    for(i=0;i<T;i++)
    { 
    printf("%li\n",Resultados[i]);
    }
}  