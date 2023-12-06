#include "stdio.h"
int main(){
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
     int i=1;
    while(b*i%a){
        i++;
    }
    printf("%d",i*b);

}