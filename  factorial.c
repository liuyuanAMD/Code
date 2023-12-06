#include"stdio.h"
int main(){
//    int n=0;
//    int num=0;
//    scanf("%d",&n);
//    for(int i=1;i<=n; i++){
//        for(int j=1; j<=i; j++){
//            num=i*j;
//
//        }
//        num+=num;
//    }
 int n=0;
 int num=1;
 int result=0;
 for(n=1;n<=5;n++){
     num=num*n;
     result+=num;

 }
 printf("%d\n",result);
    return 0;


}