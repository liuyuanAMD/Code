#include"stdio.h"
int main(){
//    int a=-7;
//    int b=a >> 2;
//    printf("%d",b);
int a=3;
int b=-2;
int c= a & b;
//& 位与 计算 A和B的补码，两个数为1 结果为1，其他为0
// | 位或 二进制位里只要有1就为1，两个同时为0，才为0
// ^ 位异或  相同为0 相异为1 支持交换律  相同的数字异或为0,0异或整数，结果还为其他的整数
 printf("%d",c);
    printf("---------");
    printf("\n");
    int d=3;
    printf("%d\n",~d);
    printf("---------------\n");
    int f=13;
    f |=(1<<4 );

    printf("%d\n",f);
     f &= (~(1<<4));
    printf("%d\n",f);
    return 0;
}