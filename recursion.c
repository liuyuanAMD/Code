#include "stdio.h"
void print(unsigned int num){
    if(num>9){
        print(num/10);
    }
    printf("%d ",num%10);
}
int main(){
    unsigned int num=0;
    scanf("%u",&num);
    print(num);


    return 0;
}