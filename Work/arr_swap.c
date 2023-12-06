#include "stdio.h"
#include "string.h"

void swap(int *arr,int *arr2)
{
    int sz=sizeof(arr)/sizeof(arr[0])+1;
    int tmp=0;
    for(int i=0;i<sz;i++){
        tmp=arr[i];
        arr[i]=arr2[i];
        arr2[i]=tmp;
    }

}
int main(){
    int arr[3]={1,2,3};
    int arr2[3]={4,5,6};
    swap(arr,arr2);
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=0;i<sz;i++){
        printf("%d",arr2[i]);
    }

    return 0;
}