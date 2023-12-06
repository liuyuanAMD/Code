#include "stdio.h"
int main(){
    int i=1;
    do{
        i++;
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }
    while(i<=10);
    return 0;
}