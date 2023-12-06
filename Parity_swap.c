#include "stdio.h"
int main(){
         int arr[10]={0};
         int sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++){
        scanf("%d",arr+i);
    }
    int arr2[10]={0};
    int count=0;
    for(int i=0;i<sz;i++){
        if(arr[i]%2==1){
            arr2[i]=arr[i];
           count++;
        }
    }
    for(int i=0;i<sz;i++){
        if(arr[i]%2==0){
            arr2[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<sz;i++){
        int tmp=arr2[i];
        arr2[i]=arr[i];
        arr[i]=tmp;
    }
    for(int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }

}