#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n); // 读取整数N
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // 读取N个整数
        sum +=a[i];
    }
    double avg = (double)sum /n; // 计算平均值
    double k = 0;

    for (int i = 0; i < n; i++) {
        k+= pow(a[i] - avg, 2); // 计算差的平方和
    }
    double m= k/ n; // 计算方差
    double stdDev = sqrt(m); // 计算标准差（均方差）
    printf("%.5f\n", stdDev); // 输出结果，保留5位小数 
    return 0;
}
