#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n); // ��ȡ����N
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // ��ȡN������
        sum +=a[i];
    }
    double avg = (double)sum /n; // ����ƽ��ֵ
    double k = 0;

    for (int i = 0; i < n; i++) {
        k+= pow(a[i] - avg, 2); // ������ƽ����
    }
    double m= k/ n; // ���㷽��
    double stdDev = sqrt(m); // �����׼������
    printf("%.5f\n", stdDev); // ������������5λС�� 
    return 0;
}
