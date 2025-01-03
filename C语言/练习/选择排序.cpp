#include <stdio.h>

void Sort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min= i;
        for (j = i+1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11,21,34,34,345};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sort(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
