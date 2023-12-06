//#include"stdio.h"
//int main(){
//    int i=0;
//    int num=0;
//    scanf("%d",&num);
//    for(int i=30;i>=0;i-=2)
//    {
//        printf("%d ",(num>>i)&1);
//    }
//    printf("\n");
//    for(int i=31;i>=1;i-=2){
//
//        printf("%d ",(num>>i)&1);
//    }
//
//
//    return 0;
//}
#include "stdio.h"
int main(){
    int i=1;
    int ret=(++i) + (++i) + (++i);
    printf("%d\n",ret);
    return 0;
}