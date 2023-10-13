#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//	
//}

//int is_bigorsmall()
//{
//	int a = 1;
//	int* p = &a;
//	if (*(char*)p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = is_bigorsmall();
//	if (1 == a)
//		printf("是小端\n");
//	else
//		printf("是大端\n");
//	return 0;
//}

//void my_memmove(void* des, void* sou, size_t sz)
//{
//	int i = 0;
//	for (i = 0; i < (int)sz; i++)
//	{
//		*((char*)des + i) = *((char*)sou + i);
//	}
//}
//int main()
//{
	/*char arr1[100] = "C language is a very great languange !";
	my_memmove(arr1 + 20, arr1 + 15, 37);
	puts(arr1);
	return 0;*/
//}

//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "   0909jcjkcj";
//	int a = atoi(arr1);
//	printf("%d\n", a);
//	return 0;
//}

//#include <string.h>
//#include <math.h>
//double my_atoi(char* p)
//{
//	int i = 0, j = 0, m = 0;
//	size_t sz = strlen(p);
//	for (i = 0; i < (int)sz; i++)
//	{
//		if (((p[i] == ' ') && (i == 0)) || ((p[i] == ' ') && ((p[i - 1] < '0') || (p[i - 1] > '9'))))
//		{
//			continue;
//		}
//		else
//		{
//			if ((p[i] >= '0') && (p[i] <= '9'))
//				j = i, m++;
//			else
//			{
//				break;
//			}
//		}
//	}
//	int a = j - m + 1;
//	double sum = 0;
//	m = m - 1;
//	for (i = a; i <= j; i++)
//	{
//		sum = sum + (p[i] -48) * pow(10, m);//很重要!!!
//		m = m - 1;
//	}
//	return sum;
//}
//int main()
//{
//	char arr1[100] = { '0' };
//	gets(arr1);
//	double a = my_atoi(arr1);
//	printf("%.0lf\n", a);
//	return 0;
//}

//void my_memmove(void* des, const void* sou, size_t sz)
//{
//	int i = 0;
//	if ((char*)des <= (char*)sou)
//	{
//		for (i = 0; i < (int)sz; i++)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//	else
//	{
//		for (i = (int)sz - 1; i >= 0; i++)
//		{
//			*((char*)des + i) = *((char*)sou + i);
//		}
//	}
//}
//int main()
//{
//	char arr1[100] = "C language is a very great languange !";
//	my_memmove(arr1 + 20, arr1 + 15, 37);
//	puts(arr1);
//	return 0;
//}

