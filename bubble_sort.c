#include "stdio.h"
 void bubble_sort(int arr[],int sz){
     for(int i=0;i<sz-1;i++){
         int j=0;
         for(j=0;j<sz-1-i;j++){
             int tmp=0;
             if(arr[j]>arr[j+1]){
                 tmp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=tmp;
             }
         }
     }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);

    for(int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}