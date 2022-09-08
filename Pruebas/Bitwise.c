#include <stdio.h>

int main(){
    int A = 3,*a;
    a = (int*)malloc(A * sizeof(int));
    a[0] =1;
    a[1] =2;
    a[2] =3;
    printf("%i",a[3]);
}