#include <stdio.h>

// 冒泡排序函数，使用指针实现
void bubbleSort(int *p, int c) {
    int i, j, temp;
    for (i = 0; i < c - 1; i++) {
        for (j = 0; j < c - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                // 交换元素
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // 读取数组元素个数
    int arr[n];

    // 读取数组元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用冒泡排序函数
    bubbleSort(arr, n);

    // 打印排序后的数组
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
