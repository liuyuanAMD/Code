#include "stdio.h"
//int count_num_of_1(unsigned int num){
//    int count=0;
//    while(num){
//        if(num%2==1){
//            count++;
//        }
//        num=num/2;
//    }
//    return count;
//}
//int count_num_of_1(int n){
//    int i=0;
//    int count=0;
//    for(i=0;i<32;i++){
//(n)//        if((n>>i)&1==1){
//            count++;
//        }
//    }
//    return count;
////}
//int count_num_of_1(int n){
//    int count=0;
//    while(n){
//        n=n&(n-1);
//        count++;
//    }
//    return count;
//}
//int count_num_of_1(int n1,int n2){
//    int i=0;
//    int count=0;
//    for(i=0;i<32;i++){
//        if(((n1>>i)&1)^((n2>>i)&1)==1){
//            count++;
//        }
//    }
//    return count;
//}
int count_num_of_1(int n1,int n2){
    int ret=n1^n2;
    int count=0;
    while(ret){
        ret=ret&(ret-1);
        count++;
    }
    return count;


}
int main(){
    int num=0;
    int num2=0;
    scanf("%d %d",&num,&num2);
   int count= count_num_of_1(num,num2);
printf("%d\n",count);

    return 0;
}
//if(n&(n-1)==0){
//
// }计算2的n次方