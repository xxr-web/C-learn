#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
typedef int INT;
//int main()
//{
//	INT a = 10;
//	printf("%d\n", -a);
//	return 0;
//}

//int main()
//{
//	INT a,b,c;
//	scanf("%4d%2d%2d", &a, &b,&c);
//	printf("%d %02d %02d", a, b,c);//以0补位
//	return 0;
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 10;
//	int c = 10;
//	int d = 10;
//	d = (a++, ++b);//有括号的这样才是逗号表达式，也就是等于（）里的最后一个，d=++n
//	b += a+++(c+1);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//有关a/10和a%10
//未说一行输入还是多组输入的时候，就用多组输入。
//并且要注意换行。
//if不带大括号的时候，只能附带一个语句。

//int main()
//{
//	char ch = 'a';
//	printf("%05c", ch);
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		int a = i % 10;//个位
		int m = i / 10;
		int b = m % 10;//十位
		int n = m / 10;//百位
		//int d = n * n * n + b * b * b + a * a * a ;
		int d = pow(n, 3) + pow(b, 3) + pow(a, 3);
		if (i == d)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = pow(a, b);
//	printf("%d", c);
//	return 0;
//}



