#include "stdio.h"
int main(){

    int num=10;
    &num;
    int *p=&num;
    
    printf("%p\n",num);
    return 0;
}//
// Created by 刘倩 on 2023/11/3.
//
