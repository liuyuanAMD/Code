#include <stdio.h>
#include "string.h"
int main(){
    //字符串的末尾隐藏了一个\0
    char arr []="abcdef";
    char arr1 []={'a','b','c','d','e','f','\0'};
    int len=strlen(arr);
//strlen求字符串的长度的一个函数，头文件string.h
    printf("%d\n",len);
    printf("%d\n", strlen(arr1));

    printf("%s\n",arr);
    //打印arr1
    printf("%s\n",arr1);
    return 0;
}
