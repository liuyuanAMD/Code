#include "string.h"
#include "stdio.h"
int main(){
    char passwd[20]={0};
    int i=1;
    for( i=1;i<=3;i++){
        printf("���������룺");
        scanf("%s",passwd);
        if(strcmp(passwd,"123456")==0){
            printf("������ȷ����¼�ɹ���\n");
            break;
        }
        else{
            printf("������󣬵�¼ʧ�ܣ�\n");
        }
    }
    if(i=3){
        printf("��������������˳�����\n");
    }
}