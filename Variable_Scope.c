#include "stdio.h"
//int main(){
//    int a=100;
//    {
//
//        printf("%d\n",a);
//
//    }
//    printf("a=%d\n",a);
//
//    return 0;
//}
// Created by 刘倩 on 2023/10/31.
//
extern int a;

void test(){ printf("%d",a);}



int main(){
     test();
    {
        printf("%d",a);
    }
    return 0;
}
