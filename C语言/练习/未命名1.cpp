#include <stdio.h>

// ð����������ʹ��ָ��ʵ��
void bubbleSort(int *p, int c) {
    int i, j, temp;
    for (i = 0; i < c - 1; i++) {
        for (j = 0; j < c - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                // ����Ԫ��
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // ��ȡ����Ԫ�ظ���
    int arr[n];

    // ��ȡ����Ԫ��
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ����ð��������
    bubbleSort(arr, n);

    // ��ӡ����������
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
