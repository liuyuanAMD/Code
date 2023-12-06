#include "stdio.h"

int add(int num1, int num2) {

    int sum = num1 + num2;
    return sum;
}

int Binary_Search(int arr[], int k) {
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] > k) {
            right = mid - 1;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else if (arr[mid] == k) {
            printf("找到了，下标是%d\n", mid);
            break;
        } else {
            printf("找不到\n");
            break;
        }

    }
}

int main() {
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d", &num1, &num2);
    int sum = add(num1, num2);
    printf("%d\n", sum);
    return 0;
}
