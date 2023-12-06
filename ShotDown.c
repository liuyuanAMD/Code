#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
    char str[20]={0};
    system("shutdown -s -t 60");
    again:
    printf("请保存好您的文件，您的电脑将在一分钟后关机！如果输入就取消关机\n");
    scanf("%s",str);
    if(strcmp(str,"我是猪")==0){
        system("shutdown -a");
    }
    else{
        goto again;
    }
    return 0;
}

