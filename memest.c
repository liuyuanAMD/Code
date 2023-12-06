#include "stdio.h"
#include "string.h"
int main(){
    char arr[20]="hell0 world";
    memset(arr,'*',5);
    printf("%s\n",arr);
    return 0;
}