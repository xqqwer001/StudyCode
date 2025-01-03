#include<stdio.h>
int main() 
{
    int a[6][6] ={0};
    for (int i = 0; i < 6; i++)
	{
        a[i][0] = 1;   // 初始化每一行的第一个数字为1
        // 打印当前行的数字
        for (int j = 0; j <= i; j++)
		{
            if (j > 0) 
			{
                // 计算杨辉三角形的当前值，除了每行的第一个和最后一个数字
                a[i][j] =a[i-1][j-1] +a[i-1][j];
            }
            printf("%-3d",a[i][j]);
        }
        printf("\n"); // 换行，准备打印下一行
    }
    return 0;
}

