
// #include <stdio.h>
// int main(){
//   int num = 0;
//   int num1 = 0;
//   scanf("%d %d", &num, &num1);
//   int sum= num + num1;
//   printf("%d\n",sum);
//   return 0;
// }
#include<stdio.h>
 int main()
{
    //declare two variables
    int a, b;
    //declare a variable to store the sum
    int  sum=0;
    //prompt the user to input two integers
    printf("请输入两个整数\n");
    //read two integers from the user
    scanf("%d %d", &a, &b);
    //calculate the sum of the two integers
    printf("sum=%d",a+b );
    return 0;
}