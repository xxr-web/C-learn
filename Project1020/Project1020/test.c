#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("hello"          "world\n");
//	printf("hello"   "beautiful"   "world\n");
//	return 0;
//}

//#define Print(n, format) printf("the value of " #n " is" format "\n", n)//ʹ��#n�����ǿ��Խ�����n��������Ϊ�ַ������뵽����С�
//#define Print(n, format) printf("the value of 'n' is" format "\n", n)//�ַ�������������ݲ��ܱ����������滻
//#define Print(n, format) printf("the value of " n " is" format "\n", n)//�﷨����

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
//\�ͻس�һ��ת����ˣ�\�����з�

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
//	printf("%d\n", 2);//��Զִ��
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

//ģ��offset
#define Offsetof(type, member) (size_t)(&(((type*)0) -> member))//�ѽṹ����Ԫ�صĵ�ַ��Ϊ0��֮�����ÿһ��Ԫ�صĵ�ַ�������ǵ�ƫ������

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

