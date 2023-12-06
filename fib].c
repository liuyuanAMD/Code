#include "stdio.h"
int fib(int n){
   int a=1;
   int b=1;
   int c=0;
   while(n>=3){
       c=a+b;
       a=b;
       b=c;
       n--;
   }
    return c;

}
int main(){
    int n =0;
    scanf("%d",&n);
    int num=fib(n);
    printf("%d\n",num);
    return 0;
}