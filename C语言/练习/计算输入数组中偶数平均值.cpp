#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n); // ��ȡ����������
    int a[m][n];
    int sum = 0;
    int count = 0;
    // ��ȡ��ά���������
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
            // ����Ƿ�Ϊż�����ۼ� 
            if (a[i][j] % 2 == 0) 
			{
                sum += a[i][j];
                count++;
            }
        }
    }
    // ����ż����ƽ��ֵ
    double average = count > 0 ? (double)sum / count : 0;
    // ��������������λС��
    printf("Average = %.2f\n", average);
    return 0;
}
