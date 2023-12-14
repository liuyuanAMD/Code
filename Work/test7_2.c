#include <assert.h>
#include "stdio.h"
#include "string.h"
size_t mystrlen(const char *str){
      assert(str);
    size_t len=0;
    while(*str++!='\0'){
        len++;
    }
    return len;
}
//int main(){
//char arr[]="abcdef";
//size_t n=mystrlen(arr);
//    printf("%zu\n",n);
//    return 0;
//}
//int main() {
//    char name[20]={};           //地址是一个常量，不能被修改
//    strcpy(name,"张\0三");//strcpy遇到\0就会停止拷贝，如果没有\0就会一直拷贝下去
//    printf("%s\n",name);
//    return 0;
//}
char my_strcpy(const char *str,char *str2){
    assert(str);
    assert(str2);
    char *ret=str;
    while(*str2++=*str++){
     ;
    }
    return ret;

}
char* my_strcat(char *dest, const char *src){
    assert(dest && src);
    char *ret=dest;
    //1.找到dest的'\0'
    while(*dest!='\0'){
        dest++;
    }
    //2.拷贝src
    while(*dest++=*src++){
        ;
    }
    return ret;
}
int main(){
         char arr1[]="liuyuan ";
         my_strcat(arr1,"hello");
         printf("%s\n",arr1);
    //    char arr1[]="abcdef";
//    char arr2[20]={};
//    my_strcpy(arr1,arr2);
//    printf("%s",arr2);

    return 0;
}