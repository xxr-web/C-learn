#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	printf("%p\n", &arr);//00000013F22FFB48
//	printf("%p\n", &arr + 1);//00000013F22FFB70,����ʮ�������������֮����28����һ��ʮ������ת����ʮ������40.
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 017);
//	printf("%d\n", 0XAC10);
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	printf("%d\n", a);//10
//	printf("%d\n", b);//20
//	return 0;
//}

//�������߼����ƺ��������ƣ����󲿷ֱ���������������

//int main()
//{
//	int i = -10;
//	int j = i >> 1;
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = -6;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	printf("������a��b��ֵ: ");
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}

//��֤�����ǲ���2��n�η�
//���ű��ʽ���ȼ�����͵�

//int NumberOf1(int n)
//{
//    int  count = 0;
//    while (n)
//    {
//        count++;
//        n = n & (n - 1);
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = NumberOf1(n);
//    printf("%d\n", ret);
//    return 0;
//}

//int main()
//{
//	int n = 0, i = 0, count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		if ((n & (1 << i)) != 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//int main()
//{
//	int a = 0, b = 0;
//	printf("������a b��ֵ:");
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}

//int isPowerOfTwo(unsigned int n)//�ж�n�Ƿ���2�Ĵη�
//{
//	if ((n & (n - 1)) == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	while ((scanf("%u", &n)) != EOF)
//	{
//		int ret = isPowerOfTwo(n);
//		if (1 == ret)
//		{
//			printf("%d��2���ݴη�\n", n);
//		}
//		else
//		{
//			printf("%d����2���ݴη�\n", n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int j = 0, k = 0, n = 0;
//	int arr[5] = { 0 };
//	printf("����������Ԫ��:");
//	for (j = 0; j < 5; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	n = arr[0];
//	for (j = 1; j < 5; j++)
//	{
//		n = n ^ arr[j];
//	}
//	printf("����������%d\n", n);
//	return 0;
//}

int isPowerOfTwo(unsigned int n)//�ж�n�Ƿ���2�Ĵη�
{
	while (n > 1)
	{
		int m = n % 2;
		n = n / 2;
		if (1 == m)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	unsigned int n = 0;
	while ((scanf("%u", &n)) != EOF)
	{
		int ret = isPowerOfTwo(n);
		if (1 == ret)
		{
			printf("%d��2���ݴη�\n", n);
		}
		else
		{
			printf("%d����2���ݴη�\n", n);
		}
	}
	return 0;
}

