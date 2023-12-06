#include "stdio.h"
int search_one(int num){
    int count=0;
    for(int i=0;i<32;i++){
        if(((num>>i)&1)==1){
            count++;
        }
    }
    return count;
}
int main(){
    int i=search_one();
    printf("%d\n",i);

    return 0;
}