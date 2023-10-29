#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int x = 10;
	int y = 20;
	int z = Add(x, y);
	printf("%d\n", z);
	return 0;
}