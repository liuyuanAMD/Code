#include "stdio.h"
void intitarray(int * arr,int sz){
    for(int i=0;i<sz;i++){
        *(arr+i)=0;
    }
}
void print(int *arr,int sz){
    for(int i=0;i<sz;i++){
        printf("%d ",*(arr+i));
    }

}
void reverse(int *arr,int sz){
    int left=0;
    int right=sz-1;
    while(left<right){
        int tmp=arr[left];
        arr[left]=arr[right];
        arr[right]=tmp;
        left++;
        right--;
    }
}

int main(){
      int arr[5]={1,2,3,4,5};
         int sz=sizeof(arr)/sizeof(arr[0]);
//       intitarray(arr,sz);
//        print(arr,sz);
        reverse(arr,sz);
    print(arr,sz);

      return 0;
}