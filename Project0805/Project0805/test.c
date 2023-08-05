#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	printf("%p\n", &arr);//00000013F22FFB48
//	printf("%p\n", &arr + 1);//00000013F22FFB70,两个十六进制数，相减之后是28（借一当十六），转化成十进制是40.
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

//右移有逻辑右移和算术右移，但大部分编译器用算术右移

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

int main()
{
	int a = 0, b = 0;
	printf("请输入a和b的值: ");
	scanf("%d%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后a = %d b = %d\n", a, b);
	return 0;
}

//验证该数是不是2的n次方
