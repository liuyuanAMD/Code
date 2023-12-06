#include "stdio.h"
int main(){
    int line=0;
    scanf("%d",&line);
    int i=0;
    for( i=0;i<line;i++){
        int j=0;
        for(j=0;j<line-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<line-1;i++){
        int j=0;
        for(j=0;j<i+1;j++){
            printf(" ");
        }
        for(j =0;j<2*(line-i-1)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}