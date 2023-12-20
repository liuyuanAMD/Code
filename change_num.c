#include <math.h>
#include "stdio.h"
int main(){
    int num=0;
    int input=0;
    scanf("%d",&input);
    int i=0;
    while(input){
        int bit=input%10;
        if(bit%2==1){
            bit=1;
        }
        else{
            bit=0;

        }
        num +=bit *pow(10,i);
        i++;
        input/=10;

    }
    printf("%d\n",num);


    return 0;
}