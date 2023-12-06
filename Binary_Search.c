#include "stdio.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 8;
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
            printf("�ҵ��ˣ��±���%d\n", mid);
            break;
        } else {
            printf("�Ҳ���\n");
            break;
        }

    }
    return 0;
}