#include "stdio.h"
int my_strlen(char* str){
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
void reverse(char*arr,int left,int right){
    if (left<right){
        char tmp=arr[left];
        arr[left]=arr[right];
        arr[right]=tmp;
        reverse(arr,left+1,right-1);
    }
}
int main(){
    char arr[]="abcdef";
    int left=0;
    int right=my_strlen(arr)-1;
    reverse(arr,left,right);
    printf("%s",arr);
    return 0;

}