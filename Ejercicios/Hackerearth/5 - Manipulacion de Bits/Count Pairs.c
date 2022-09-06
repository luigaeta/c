#include <stdio.h>

int main(){
    int T, N,i,j,k,z,s=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        unsigned long long int A[sizeof(N)];
        for(j=0;j<N;j++)
        {
            scanf("%llu",&A[j]);
        }
        for(j=0;j<N;j++)
        {
            for(k=j+1;k<N;k++)
            {
                z=A[j]^A[k];
                if(z>A[j]&&z>A[k])
                {
                    s=s+1;
                }

            }
        }
    }
    printf("%d",s);
    
}  