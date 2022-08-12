#include <stdio.h>
int sum(int n);

int main()
{
	int n, s;

	printf("Enter The Number: ");
	scanf("%d", &n);

	s = sum(n);
	printf("Sum of digits = %d", s);
}
int sum(int n)
{
	int d = n % 10;
	n = n / 10;

	if (n == 0)
		return d;

	else
		return d + sum(n);
}
