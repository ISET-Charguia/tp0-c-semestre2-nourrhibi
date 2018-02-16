#include<stdio.h>
int fact (int n,int res)
{
	if(n==1||n==0)
		return res;
	else
		return fact(n-1,res*n);
	}

int fact_rec(int n)
{
	if(n==1 ||n==0)
		return 1;
	else
		return n*fact_rec(n-1);
}
int main (void)
{
	int n;
	do{
		puts("donner n");
		scanf("%d",&n);
	}while(n<0);
	printf("%d!=%d",n,fact_rec(n));
	return 0;
}
