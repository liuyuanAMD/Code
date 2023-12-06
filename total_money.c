#include "stdio.h"
int main(){
    int money=0;
    scanf("%d",&money);
    int total=money;
    int empty=money;

    while(empty>=2){
        total +=empty/2;
        empty=empty/2+empty%2;
    }
    printf("%d",total);

}