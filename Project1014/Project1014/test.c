#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un = { 0 };
//	un.i = 0X11223344;//共用这四个字节的空间，所以不能同时使用
//	un.c = 0X55;
//	printf("%#X\n", un.i);
//	printf("%zd\n", sizeof(union Un));//4
//	return 0;
//}

//#include <stdio.h>
//union Un1
//{
//	char c[5];//5,对齐数是1
//	int i;//4,对齐数是4
//};
//union Un2
//{
//	short c[7];//14,对齐数2
//	int i;//4,对齐数4
//};
//int main()
//{
//	//下⾯输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//	return 0;
//}

//struct St
//{
//	char arr1[5];//对齐数1，内存空间5
//	int b;
//	double c;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct St));//24
//	return 0;
//}

//struct gift_list
//{
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	union item{
//		struct book
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_pages;//⻚数
//		};// book;
//		struct mug
//		{
//			char design[30];//设计
//		};// mug;
//		struct shirt
//		{
//			char design[30];//设计
//			int colors;//颜⾊
//			int sizes;//尺⼨
//		};// shirt;
//	};//item;
//};
//
//int main()
//{
//	struct gift_list g1 = { 0 };
//	g1.stock_number = 20;
//	g1.price = 20.000000;
//	g1.item_type = 1;
//	//g1.item.book = { "adas", "sdfsf", 3 };//错误，匿名不能这样用
//	//g1.item.book b1 = { 0 };
//}

//struct
//{
//	int a;
//	char b;
//	double c;
//}x = { 4, 'a', 1.0 };//struct +结构体名构成结构体类型，结构体类型才可以定义变量，而此时匿名结构体不能定义变量
//
//int main()
//{
//	printf("%d", x.a);
//	return 0;
//}

//union Un
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union Un un = { 0 };
//	un.i = 1;
//	printf("%d\n", un.c);
//	return 0;
//}

//int main()
//{
//	char a = 1;
//	char b = '1';
//	char c = -1;
//	printf("%d %d %d", a, b, c);//1, 49, -1;
//	return 0;
//}

//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Sat,
//	Sun
//};
//
//int main()
//{
//	printf("%d %d %d %d", Mon, Tues, Wed, Sun);
//	enum Day day = Sun;
//	//Mon = 2;error
//	return 0;
//}

//enum Sex
//{
//	male = 4,
//	female,
//	secret
//};
//
//int main()
//{
//	printf("%d %d %d ", male, female, secret);//4 5 6
//	enum Sex s = male;
//	printf("%zd\n", sizeof(s));//枚举变量只存储这一个
//	return 0;
//}

////代码1
//#include <stdio.h>
////联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un = { 0 };
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	printf("%p\n", &un);
//	return 0;
//}

//int main()
//{
//	int i = 0X11223344;//一个十六进制数相当于四个二进制位，所以一共三十二个比特位，符合int类型
//	return 0;
//}

//int check()
//{
//	int i = 1;
//	return *((char*)&i);
//}
//int main()
//{
//	int ret = check();
//if (1 == ret)
//{
//	printf("是小端\n");
//}
//else
//{
//	printf("是大端\n");
//}
//}

//int check()
//{
//	union
//	{
//		int i;
//		char a;
//	}un = { 0 };
//	un.i = 1;
//	return un.a;
//}
//int main()
//{
//	int ret = check();
//	if (1 == ret)
//	{
//		printf("是小端\n");
//	}
//	else
//	{
//		printf("是大端\n");
//	}
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);//a = -1, b = -1, c = 255//先求出补码32位，之后截断，之后整型提升，有符号的提升时前面全补符号位，无符号数提升时前面全部零
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	char b = 128;
//	printf("%u %u\n", a, b);//4294967168 4294967168,有符号整数提升是按照变量的数据类型的符号位来提升的,128和-128截断成8个比特位后，最左侧符号位都是1，所以补1
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)//-1到-128 127到1，截止到0，255
//	{
//		a[i] = -1 - i;
//	}
//	printf("%zd", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)//死循环
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

#include <windows.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(1000);
	}
	return 0;
}




