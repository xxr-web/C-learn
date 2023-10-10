#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	//int* ptr2 = (int*)((int)a + 1);//64位平台下，a是数组首元素地址，一共八个字节，转换成(int)类型后，会发生截断，地址改变，所以非法访问。
//	int* ptr2 = (int*)((long long)a + 1);
//	printf("%#X, %#X", ptr1[-1], *ptr2);
//	return 0;
//}

#include <limits.h>//整型数据的头文件
#include <float.h>//浮点数的头文件
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000说明整型和浮点数在内存中存储方式是不同的。
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}