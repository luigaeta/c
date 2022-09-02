#include <stdio.h>

int main(){
	int T,i;
    char res[100];
	scanf("%d", &T);   
    int n[sizeof(T)],pal[sizeof(T)];
    int tam[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for(i=0;i<T;i++)
    {
        scanf("\n%d", &n[i]);
        pal[i]=tam[n[i]];

    }
    for(i=0;i<T;i++)
    {
        if(pal[i]%2==0)
        {

        }
    }         
        	
}
