#include "stdio.h"
//int main(){
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int (*p)[10]=&arr;
//   int i=0;
//   int sz=sizeof(arr)/sizeof(arr[0]);
//    for(i=0;i<sz;i++){
//         printf("%d ",(*p)[i]);
//    }
//}
void print(int(*p)[5],int r,int c){
    int i=0;
    for(i=0;i<r;i++){
        int j=0;
        for(j=0;j<c;j++){
            printf("%d ",p[i][j]);//*(*(p + i ) + j)
        }//*(p+i) -> p[i]
        printf("\n");
    }
}
void print2(int arr[3][5],int r, int c){
    int i=0;
    for(i=0;i<r;i++){
        int j=0;
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[3][5]={1,2,3,4,5,
                   2,3,4,5,6,
                   3,4,5,6,7};
    print2(arr,3,5);
    return 0;
}

//指针数组
// int* arr[]10
// char* arr[]10
//int **parr=arr;
//数组指针
//int arr2[5];
//int (*parr2)[5]=&arr2;

// char *arr[5];
//  char* (*parr)[5]=&arr;