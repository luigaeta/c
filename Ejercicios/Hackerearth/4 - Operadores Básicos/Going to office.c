#include <stdio.h>

int main(){
	long long int distancia,Oc,Of,Od,Cs,Cb,Cm,Cd,online=0,clasico=0;
    scanf("%lld",&distancia);
    scanf("\n%lld %lld %lld",&Oc,&Of,&Od);
    scanf("\n%lld %lld %lld %lld",&Cs,&Cb,&Cm,&Cd);
    online=Oc+(distancia-Of)*Od;
    clasico=Cb+(distancia/Cs)*Cm+distancia*Cd;
    if(online<clasico)
    {
        printf("Online Taxi");
    }
    else if(clasico<online)
    {
        printf("Classic Taxi");
    }
    else if(clasico==online)
    {
        printf("Online Taxi");
    }
    printf("Cl %d On %d",clasico,online);
}