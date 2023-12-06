#include "stdio.h"
int main(){
    int arr[3];
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(i=0;i<sz;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}