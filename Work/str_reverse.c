#include "stdio.h"
int my_strlen(char* str){
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
int main(){
    char arr[]="123";
    int left=0;
    int right=my_strlen(arr)-1;
    while(left<right){
        char tmp=arr[left];
        arr [left]=right;
       arr [right]=tmp;
        left++;
        right--;
    }
    printf("%s",arr);



    return 0;
}
