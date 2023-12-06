#include "stdio.h"

int main() {
       int num[4]={0};
       int i=0;
       while(i<4){
           scanf("%d",&num[i]);
           i++;
       }
       int max=num[0];
       for(int j=0;j<4;j++){
           if(num[j]>max){
               max=num[j];
           }
       }
    printf("%d\n",max);
    return 0;
}


