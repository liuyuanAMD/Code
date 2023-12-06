#include "stdio.h"
#include "string.h"
int main() {
    char arr[20] = {0};
    char arr1[] = "hello zhangjian";
    strcpy(arr, arr1);
    printf("%s\n", arr);
    return 0;
}