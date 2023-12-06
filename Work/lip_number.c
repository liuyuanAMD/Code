#include"stdio.h"
#include"math.h"
int main(){
    int i=0;
    for(i=0;i<100000;i++){
        int count=1;
        int tmp=i;

        int sum=0;
        while(tmp/10){
            count++;
            tmp/=10;
        }
        tmp=i;
        while(tmp){
            sum+=pow(tmp%10,count);
            tmp/=10;
        }
         if(sum==i){
             printf("%d ",sum);
         }
    }


    return 0;
}