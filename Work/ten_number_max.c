#include "stdio.h"
int main(){
    int arr[10]={0};
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sz=sizeof(arr)/sizeof(arr[0]);
    for (int j = 0; j <=sz; ++j) {
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("%d",max);
    return 0;
}