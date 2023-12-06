#include <stdio.h>

int main() {
    int year = 0;
    int month = 0;
    int day = 0;

    printf("请输入日期（格式：YYYY-MM-DD）：");
    scanf("%4d-%2d-%2d", &year, &month, &day);

    printf("%d\n", year);
    printf("%02d\n", month);
    printf("%02d\n", day);

    return 0;
}
