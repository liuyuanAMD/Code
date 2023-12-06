#include "stdio.h"
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c=0;
//    if (a > b) {
//        for (int i = 1; i <= b; i++) {
//            if (a % i == 0 && b % i == 0) {
//                c=i;
//            }
//        }
//    }
//    else
//    {
//            for (int i = 1; i <= a; i++) {
//                if (a % i == 0 && b % i == 0) {
//                    c=i;
//                }
//            }
//        }
//        printf("%d",c);
//        return 0;
//    }
int main(){
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d",&a,&b);
    while(c=a%b){
        a=b;
        b=c;
    }
    printf("%d",b);
    return 0;
}

