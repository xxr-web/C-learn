#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//ʵ���ַ��������������������϶�����ת����ʵ�ֽ��ַ�������
//void Left1(char str[], int x, size_t y)//���Ƿ�һ
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		char ret = str[0];
//		for (j = 0; j < y - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = ret;
//	}
//}

//void Left2()//�⺯��������

//void Reverse(char str[], int x, int y)
//{
//	int left = x, right = y;
//	while (left <= right)
//	{
//		char ret = str[left];
//		str[left] = str[right];
//		str[right] = ret;
//		left++;
//		right--;
//	}
//}
//
//void Left3(char str[], int x, size_t y)
//{
//	int z = (int)y;
//	Reverse(str, 0, x - 1);
//	Reverse(str, x, z - 1);
//	Reverse(str, 0, z - 1);
//}
//int main()
//{
//	int i = 0;
//	char str[100] = { '0' };
//	//char* str[100] = { '0' };�����ǲ��еģ������ĳ����ַ������ܸ���ֵ��
//	printf("�������ַ���:");
//	gets(str);
//	printf("��������������:");
//	scanf("%d", &i);
//	size_t sz = strlen(str);
//	int time = i % sz;
//	//Left(str, time, sz);
//	Left3(str, time, sz);
//	puts(str);
//	return 0;
//}
//sizeof(arr)��arr�����������飬Ҳֻ�����������ﶨ�������ʱ��ų����������Ϊ�β��ں������ʱ��sizeof(arr)���arrֻ�൱����Ԫ�ص�ַ

//void Reverse(char str[], int x, int y)
//{
//    int left = x, right = y;
//    while (left <= right)
//    {
//        char ret = str[left];
//        str[left] = str[right];
//        str[right] = ret;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[10001] = { '0' };
//    while (gets(arr))
//    {
//        size_t sz = strlen(arr);
//        Reverse(arr, 0, (int)sz - 1);
//        puts(arr);
//    }
//    return 0;
//}

//���Ͼ���

//void Yang(int arr[][100], int x, int y, double k)
//{
//	int i = 0, j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (k > arr[i][j])
//		{
//			i++;
//		}
//		else if (k < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			printf("�ҵ��ˣ���%d�У���%d��\n", i + 1, j + 1);
//			break;
//		}
//	}
//	if (i == x || j < 0)
//	{
//		printf("û���ҵ������");
//	}
//}
//int main()
//{
//	//int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	//Yang(arr, 3, 3, 3.5);
//	int arr[100][100] = { 0 };
//	int i = 0, j = 0, k = 0, m = 0, a = 0;
//	printf("���������Ͼ�����к���:");
//	scanf("%d%d", &i, &j);
//	printf("�������ά�����Ԫ��:");
//	for (k = 0; k < i; k++)
//	{
//		for (m = 0; m < j; m++)
//		{
//			scanf("%d", &arr[k][m]);
//		}
//	}
//	printf("������Ҫ���ҵ�����:");
//	scanf("%d", &a);
//	Yang(arr, i, j, a);
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4 
//	printf("%d\n", sizeof(a[0]));//��һ�����飬16
//	printf("%d\n", sizeof(a[0] + 1));//4/8,��һ������ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1))); //4
//	printf("%d\n", sizeof(a + 1));//4/8���ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16���ڶ�������
//	printf("%d\n", sizeof(&a[0] + 1));//4/8,�ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16
//	printf("%d\n", sizeof(*a));//��һ�����飬16
//	printf("%d\n", sizeof(a[3]));//16
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6,(aa + 1)�������aa[1]��������ĵ�ַ��������ֵ�Ϻ�aa[1]����Ԫ�صĵ�ַ��һ����
//	return 0;
//}

int main()
{
	int i = 10;
	int arr[3] = { 0, 1, 2 };
	int arr1[2][2] = { 4, 3, 2, 1 };
	int* p = &i;
	int* ptr = (int*)i;
	int* ptr1 = (int*)(*(arr + 1));
	int* ptr2 = (int*)(*(arr1 + 1));
	printf("%p\n", p);
	printf("%p\n", ptr);//�����Ľ�����1��Ϊ��ַ0000000000000001
	printf("%p\n", &arr[1]);
	printf("%p\n", ptr1);//�����Ľ�����1��Ϊ��ַ0000000000000001
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[1][0]);
	printf("%p\n", ptr2);
	printf("%d\n", *(arr1 + 1));//��ʹ��ˣ���Ϊ������������ڶ��е�����ĵ�ַ�����Խ����ó����Ķ�����һ�����֣��޷������δ�ӡ�������Ų��¡�
	printf("%d\n", *(arr1[0] + 1));//3
	return 0;
}


