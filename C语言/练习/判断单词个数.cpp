#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100];
	int n;
	fgets(a,100,stdin);
	for(int i=0;a[i]!='\0';i++)
	  {
	    if(isalpha(a[i])&&!isalpha(a[i+1]))
	   	n++;
      }
    printf("%d",n);
    return 0;
}
