#include<stdio.h>
int main()
{
	int x, y, a, b, c;
	scanf_s("%d", &x);
	a = x / 100;
	b = x / 10 - a * 10;
	c = x - a * 100 - b * 10;
	y = c * 100 + b * 10 + a;；
	printf("%d\n", y);
	return 0;
}
