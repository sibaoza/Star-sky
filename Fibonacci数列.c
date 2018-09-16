#include<stdio.h>
int f(int n)
{
	int s;
	if(n==1||n==2)
	    return 1;
	else
	    s=f(n-1)+f(n-2);
	return s; 
}
int main()
{
	int i,n;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=f(i+1);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
