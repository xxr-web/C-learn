#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	//int* ptr2 = (int*)((int)a + 1);//64λƽ̨�£�a��������Ԫ�ص�ַ��һ���˸��ֽڣ�ת����(int)���ͺ󣬻ᷢ���ضϣ���ַ�ı䣬���ԷǷ����ʡ�
//	int* ptr2 = (int*)((long long)a + 1);
//	printf("%#X, %#X", ptr1[-1], *ptr2);
//	return 0;
//}

#include <limits.h>//�������ݵ�ͷ�ļ�
#include <float.h>//��������ͷ�ļ�
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.000000˵�����ͺ͸��������ڴ��д洢��ʽ�ǲ�ͬ�ġ�
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}