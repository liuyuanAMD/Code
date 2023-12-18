#include "stdio.h"
#include"string.h"
int main(){
    const char* sep="@.";
    char email[]="1141242439@qq.com";
    char cp[30]={0};
    strcpy(cp,email);
    char* ret=NULL;
    for(ret= strtok(email,sep);ret!=NULL;ret=strtok(NULL,sep)){
        printf("%s\n",ret);
    }
//    char* ret=strtok(email,sep);
//    printf("%s\n",ret);
//     ret=strtok(NULL,sep);
//    printf("%s\n",ret);
//    ret=strtok(NULL,sep);
//    printf("%s\n",ret);


    return 0;
}