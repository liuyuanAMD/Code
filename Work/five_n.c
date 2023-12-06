#include "stdio.h"

int main(){
    int num=0;
    int n=0;
    scanf("%d %d",&num,&n);
    int sum=0;
    int k=0;
    int i=0;
    for( i=0;i<n;i++){
        k=k*10+num;
        sum+=k;
    }
    printf("%d",sum);




    return 0;
}