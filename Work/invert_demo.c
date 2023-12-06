#include "stdio.h"
#include "string.h"
void reverse(char* left,char* right){
    while(left<right){
        char tmp=*left;
        *left=*right;
        *right=tmp;
        left++;
        right--;
    }

}
int main() {
    char arr[101] = {0};
    gets(arr);
    int line = strlen(arr);
    reverse(arr, arr + line - 1);
    char *start = arr;

    while(*start)
    {
        char *end = start;


    while (*end != ' '&& *end != '\0')
    {
        end++;
    }
    reverse(start, end - 1);
    if(*end != '\0')
    end++;
    start = end;
}
    printf("%s", arr);



}