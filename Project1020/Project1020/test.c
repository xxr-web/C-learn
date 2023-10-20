#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("hello"          "world\n");
//	printf("hello"   "beautiful"   "world\n");
//	return 0;
//}

//#define Print(n, format) printf("the value of " #n " is" format "\n", n)//使用#n，我们可以将参数n的名称作为字符串插入到输出中。
//#define Print(n, format) printf("the value of 'n' is" format "\n", n)//字符串常量里的内容不能被宏搜索并替换
//#define Print(n, format) printf("the value of " n " is" format "\n", n)//语法错误

//int main()
//{
//	int a = 10;
//	float b = 3.14f;
//	/*printf("the value of a is %d\n", a);
//	printf("the value of b is %f\n", b);*/
//	Print(a, "% d");
//	return 0;
//}

//#define GENERIC_MAX(type)\
//type type##_max(type x, type y)\
//{ \
// return (x>y?x:y); \
//}
//\和回车一起被转义掉了，\是续行符

//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//#define M 200
//	int b = M;
//	printf("%d %d", a, b);
//	return 0;
//}

//#define M 100
//
//int main()
//{
//#ifndef M
//	printf("%d\n", 1);
//#endif
//	printf("%d\n", 2);//永远执行
//	return 0;
//}

//struct S
//{
//	char a;
//	int i;
//};
//
//int main()
//{
//	struct S s1 = { 'a', 1 };
//	printf("%p\n%p\n", &s1, &(s1.a));
//	return 0;
//}

//模拟offset
#define Offsetof(type, member) (size_t)(&(((type*)0) -> member))//把结构体首元素的地址改为0，之后后面每一个元素的地址就是他们的偏移量。

struct S
{
	char a;
	int b;
	char c;
};

int main()
{
	printf("%zd\n", Offsetof(struct S, a));
	printf("%zd\n", Offsetof(struct S, b));
	printf("%zd\n", Offsetof(struct S, c));
	return 0;
}

