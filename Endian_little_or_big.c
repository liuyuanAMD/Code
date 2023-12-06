#include "stdio.h"
int main(){
    int a=1;
    if(*(char*)&a==1){
        printf("big");
    }
    else{
        printf("small");
    }




    return 0;
}