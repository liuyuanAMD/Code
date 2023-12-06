#include "stdio.h"
#include "math.h"
void prime_numbers(int num){
    if(num<=1){
        printf("error\n");
        return;
    }
    for(int j=2;j<=sqrt(num);j++){
        if(num%j==0){
            printf("这不是素数。");
            break;

        }
        else{
            printf("这是素数");
            break;
        }
    }

}
int main(){
    int input=0;
    scanf("%d",&input);
     prime_numbers(input);
    return 0;
}