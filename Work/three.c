#include "stdio.h"
int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    while (scanf("%d %d %d",&a , &b  ,&c)==3){
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            if (a == b && b == c) {
                printf("�ȱ�������\n");
            }
            else if ((a == b && b != c) || (b == c && c != a) || (a == c && c != b)) {
                printf("����������\n");
            }
            else {
                printf("��ͨ������\n");
            }
        }
        else {
            printf("����������\n");
        }

    }
    return 0;
}