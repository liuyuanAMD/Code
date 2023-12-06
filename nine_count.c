#include"stdio.h"
int main(){
    int count=0;
    for(int i=3;i<=100;i++){
        if(i%10==9 || i/10==9){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}