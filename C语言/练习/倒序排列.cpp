#include<stdio.h>
void swap(int x[],int n)
{
	int temp,i,j,m=(n-1)/2;
	for(int i=0;i<=m;i++)
	{
		j=n-1-i;
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	return;
}
int main()
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<9;i++)
	printf("%3d",a[i]);
	printf("\n");
	swap(a,9);
	for(int i=0;i<9;i++)
	printf("%3d",a[i]);
	printf("\n");
	return 0;
}
