#include <stdio.h>
int countbit(int a){
    int r=0;
    while(a){
        if(a&1){
            r+=1;
        }
        a >>= 1;
    }
    return r;

}
int main(){
    int i;
    int testcases[3] = {1,2,3};
    int expectedoutcome[3] ={1,3,2};
    for(i=0; i<3; i++){
        if(countbit(testcases[i])==expectedoutcome[i])
        {
            printf("Ok\n");
        }
        else
            printf("Error\n");

    }

}