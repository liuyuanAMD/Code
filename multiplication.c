#include "stdio.h"
int main(){
//    for (int i = 1; i <=9; i++) {
//
//        for (int j = 1; j <=i; ++j) {
//            printf("%d*%d=%d ",i,j,i*j);
//
//        }
//        printf("\n");
//
//    }


        int i = 1;
        while(i<=10)
        {
            if(i == 5)
                continue;
            printf("%d ", i);
            i = i+1;
        }





    return 0;
}