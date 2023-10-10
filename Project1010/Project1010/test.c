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
#include <string.h>
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

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}s3 = { "wangwu", 24, 98.0f };
//int main()
//{
//	struct Stu s1 = { "zhangsan", 20, 98.5f };
//	struct Stu s2 = { .age = 20, .name = "lisi", .score = 100.0f };
//	printf("%s %d %.2f\n", s1.name, s1.age, s1.score);
//	printf("%s %d %.2f\n", s2.name, s2.age, s2.score);
//	return 0;
//}

//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//匿名结构体，只能用一次，并且这个x是全局变量

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n = { 0 };
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char));
//	return 0;
//}

//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1 = { 'a', 'b', 1 };
//	struct S2 s2 = { 'a', 1, 'b' };
//	printf("%zd\n", sizeof(s1));
//	printf("%zd\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double a;
//	char b;
//	int c;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//#include <stddef.h>
//int main()
//{
//	printf("%zd\n", sizeof(struct S3));//16
//	printf("%zd\n", sizeof(struct S4));//32//内存对齐的规则，对齐数，内存大小
//	printf("%zd\n", offsetof(struct S4, c1));//0
//	printf("%zd\n", offsetof(struct S4, s3));//8
//	printf("%zd\n", offsetof(struct S4, d));//24
//	return 0;
//}

//struct Stu
//{
//	int a;
//	char b;
//	float c;
//}x = { 0 };//匿名结构体，只能用一次，并且这个x是全局变量
//
//int main()
//{
//	struct Stu x = { 1, 'a', 1.0 };
//}

//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//} * p;
//
//int main()
//{
//	p = &x;
//}

////练习1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//易错得9,忽略了规则第三条，12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//}

#include <stdio.h>
#pragma pack(1)//设置默认对⻬数为1
struct S
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对⻬数，还原为默认
int main()
{
	//输出的结果是什么？
	printf("%d\n", sizeof(struct S));
	return 0;
}
