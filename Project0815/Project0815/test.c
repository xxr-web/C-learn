#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0, j = 0, k = 0, a = 0;
//	printf("请输入数组元素个数:");
//	scanf("%d", &i);
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	for (j = 0; j < i; j++)
//	{
//		int flag = 0;
//		for (k = 0; k < i; k++)
//		{
//			if ((arr[j] == arr[k]) && (j != k))
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			a = j;
//			break;
//		}
//	}
//	printf("%d\n", arr[a]);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0, j = 0, k = 0;
//	printf("请输入数组元素个数:");
//	scanf("%d", &i);
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int ret = arr[0];
//	for (j = 1; j < i; j++)
//	{
//		ret = ret ^ arr[j];
//	}
//	printf("%d\n", ret);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0, j = 0, k = 0;
//	printf("请输入数组元素个数:");
//	scanf("%d", &i);
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int ret = arr[0];
//	for (j = 1; j < i; j++)
//	{
//		ret = ret ^ arr[j];
//	}
//	for (j = 0; j < 32; j++)
//	{
//		if (ret & (1 << j) != 0)
//		{
//			break;
//		}
//	}
//	int ret1 = 0, ret2 = 0;
//	for (k = 0; k < i; k++)
//	{
//		if (arr[k] & (1 << j) != 0)
//		{
//			ret1 = ret1 ^ arr[k];
//		}
//		else
//		{
//			ret2 = ret2 ^ arr[k];
//		}
//	}
//	printf("%d %d\n", ret1, ret2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0, j = 0, k = 0;
//	printf("请输入数组元素个数:");
//	scanf("%d", &i);
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int ret = arr[0];
//	for (j = 1; j < i; j++)
//	{
//		ret = ret ^ arr[j];
//	}
//	for (j = 0; j < 32; j++)
//	{
//		if (ret & (1 << j) != 0)
//		{
//			break;
//		}
//	}
//	int ret1 = 0, ret2 = 0;
//	for (k = 0; k < i; k++)
//	{
//		if (arr[k] & (1 << j) != 0)
//		{
//			ret1 = ret1 ^ arr[k];
//		}
//		else
//		{
//			ret2 = ret2 ^ arr[k];
//		}
//	}
//	printf("%d %d\n", ret1, ret2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("凶手是%c\n", killer);
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int Drink(int x)
//{
//	while (x > 1)
//	{
//		int a = x / 2;
//		return a + Drink(a + x % 2);
//	}
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int ret = Drink(money);
//	printf("%d\n", money + ret);
//	return 0;
//}



