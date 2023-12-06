#include "stdio.h"
int main(){
    int arr[10]={1,2,3,4,5,5,5,5,7,889};
    int* arr1=&arr;
    int i=0;
    for(i=0;i<10;i++){
        printf("%d ",*(arr1+i));
    }



    return 0;
}