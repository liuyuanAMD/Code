#include "stdio.h"
int main() {
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int del=0;
    scanf("%d",&del);
    int j=0;
    for(i=0;i<n;i++) {
        if (arr[i] != del) {
            arr[j++] = arr[i];
        }
    }
    for(i=0;i<j;i++){
        printf("%d ",arr[i]);


    }
    return 0;
}