#include"stdio.h"
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int sum=max-min;
    printf("%d\n",sum);
    return 0;
}


