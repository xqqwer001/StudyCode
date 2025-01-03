#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n); // 读取行数和列数
    int a[m][n];
    int sum = 0;
    int count = 0;
    // 读取二维数组的数据
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
            // 检查是否为偶数并累加 
            if (a[i][j] % 2 == 0) 
			{
                sum += a[i][j];
                count++;
            }
        }
    }
    // 计算偶数的平均值
    double average = count > 0 ? (double)sum / count : 0;
    // 输出结果，保留两位小数
    printf("Average = %.2f\n", average);
    return 0;
}
