#include<stdio.h>
int main()
{
	int n, sum = 0;
	scanf_s("%d", &n);
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	printf("%d\t", sum);
	int x = sum;
	sum = 0;
	while (x != 0)
	{
		sum = sum + x % 10;
		x = x / 10;
	}
	printf("%d", sum);
	return 0;
}
