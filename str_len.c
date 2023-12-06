#include"stdio.h"
int str_len(char* str){
    if(*str!='\0'){
        return 1+str_len(str+1);
    }
    else{
        return 0;
    }
}
int main(){
    char str[]="liuyuan";
    int len=str_len(str);
    printf("%d\n",len);


    return 0;
}