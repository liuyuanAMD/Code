#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
    char str[20]={0};
    system("shutdown -s -t 60");
    again:
    printf("�뱣��������ļ������ĵ��Խ���һ���Ӻ�ػ�����������ȡ���ػ�\n");
    scanf("%s",str);
    if(strcmp(str,"������")==0){
        system("shutdown -a");
    }
    else{
        goto again;
    }
    return 0;
}

