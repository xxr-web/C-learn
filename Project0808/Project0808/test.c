#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[5]);//操作数是arr和5
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	int j = sizeof i;//sizeof是操作符
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	int b = -1;
//	printf("%u\n", a);
//	printf("%u\n", b);
//	return 0;
//}

//int main()
//{
//	char a = 2;
//	char b = 127;
//	short int d = 2;
//	short int e = 127;
//	char c = a + b;
//	short int f = d + e;
//	printf("%d\n", c);
//	printf("%hd\n", f);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 4294967297;
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 2 * 3 + 3 * 4 + 4 * 5;//不严谨
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	return 0;
// }

//void line(int x)
//{
//	int j = 0;
//	for (j = 31; j >= 0; j--)
//	{
//		if ((x & (1 << j)) != 0)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//void oneline(int x)
//{
//	int j = 0;
//	for (j = 30; j >= 0; j = j - 2)
//	{
//		if ((x & (1 << j)) != 0)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//void twoline(int x)
//{
//	int j = 0;
//	for (j = 31; j >= 1; j = j - 2)
//	{
//		if ((x & (1 << j)) != 0)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	line(i);
//	oneline(i);
//	twoline(i);
//	return 0;
//}

int main()
{
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int only = arr[0];
	for (i = 1; i < 5; i++)
	{
		only = only ^ arr[i];
	}
	printf("%d\n", only);
	return 0;
}
