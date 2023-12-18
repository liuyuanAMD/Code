#include "stdio.h"
#include "string.h"
#include "assert.h"
char* my_strstr(const char *str1,const char *str2){
    assert(str1&&str2);
    const char *p1=str1;
    const char *p2=str2;
    const char *pp1=str1;
    while(*pp1) {
        p1=pp1;
        p2=str2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        if(*p2=='\0'){
            return (char*)pp1;
        }
        pp1++;
    }
    return  NULL;
}
int main(){
    char email[]="1141242439@lqly.com";
    char substr[]="lqly";
    char *ret=strstr(email,substr);
if(ret==NULL){
    printf("找不到\n");
}
else{
    printf("find\n");
}


    return 0;
}