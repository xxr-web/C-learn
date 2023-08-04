#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	printf("%d\n", i);
//	main();
//	return 0;
//}

//int multiply(int i)
//{
//	if ((i == 1) || (0 == i))//0µÄ½×³ËÊÇ1
//	{
//		return 1;
//	}
//	else
//	{
//		return i * multiply(i - 1);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = multiply(i);
//	printf("%d\n", ret);
//	return 0;
//}

//void Print(int x)
//{
//	if (x > 9)
//	{
//		Print(x / 10);
//		printf("%d ", x % 10);
//	}
//	else
//	{
//		printf("%d ", x);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//}

//int rabbit(int i)
//{
//	int arr[13] = { 0 };
//	if ((1 == i) || (2 == i))
//	{
//		arr[1] = arr[2] = 1;
//	}
//	else
//	{
//		arr[i] = rabbit(i - 1) + rabbit(i - 2);
//	}
//	return arr[i];
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = rabbit(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fib(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int x)
//{
//	if ((x == 1) || (x == 2))
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1, b = 1, c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int multiply(int x, int y)
//{
//	while (y)
//	{
//		return x * multiply(x, y - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = multiply(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//int DigitSum(int x)
//{
//	while (x > 0)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	return x;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = DigitSum(i);
//	printf("%d\n", ret);
//}

//int multiply(int x)
//{
//	if ((0 == x) || (1 == x))
//	{
//		return 1;
//	}
//	else
//	{
//		return x * multiply(x - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = multiply(i);
//	printf("%d\n", ret);
//	return 0;
//}

//void Evernum(int x)
//{
//	if (x < 0)
//	{
//		x = -x;
//	}
//	if (x > 9)
//	{
//		Evernum(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Evernum(i);
//	return 0;
//}

int rabbit(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return 2 * rabbit(x - 1);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = rabbit(i);
	printf("%d\n", ret);
	return 0;
}