#include "stdio.h"
int  factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n=0;
    scanf("%d",&n);
    int num=factorial(n);
    printf("%d",num);


    return 0;
}