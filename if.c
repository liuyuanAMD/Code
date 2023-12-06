#include "stdio.h"
int main(){
    int input=0;
    printf("加入快船\n");
    printf("能取得冠军嘛?(1/0)");
    scanf("%d",&input);
    if(input==1){
        printf("可以\n");
    }
    else{
        printf("不可以\n");
    }
    return 0;
}