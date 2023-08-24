#define _CRT_SECURE_NO_WARNINGS
// 1.打印1-100间的奇数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if ((i % 2) != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.打印9×9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.打印100-200之间的素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i = i + 2)
//	{
//		int j = 0, flag = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if ((i % j) == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//4.判断三角形
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a))
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("等腰三角形\n");
//			}
//			else
//			{
//				printf("普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("非三角形\n");
//		}
//	}
//	return 0;
//}

//5.最大公约数，最小公倍数
//法1
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		if (m == 0 || n == 0)//这个也很重要，需要考虑到
//		{
//			if (m == 0)
//				printf("最大公约数是%d,最小公倍数是%d\n", n, m);
//			else
//				printf("最大公约数是%d,最小公倍数是%d\n", m, n);
//		}
//		else
//		{
//			int k = m % n;
//			int p = m * n;
//			while (k)//辗转相除实现时，可以不去考虑m > n,因为加入m = 16, n = 28在第一次交换时，已经换过来了。
//			{
//				m = n;
//				n = k;
//				k = m % n;
//			}
//			p = p / n;
//			printf("最大公约数是%d,最小公倍数是%d\n", n, p);
//		}
//	}
//	return 0;
//}
//法2 递归
//#include <stdio.h>
//int gcd(int x, int y)
//{
//	if (x == 0 || y == 0)//这个也很重要，需要考虑到
//	{
//		if (x == 0)
//			return y;
//		else
//			return x;
//	}
//	else
//		return gcd(y, x % y);
//}
//int main()
//{
//	int m = 0, n = 0;
//		while (scanf("%d%d", &m, &n) != EOF)
//		{
//			int ret = gcd(m, n);
//			printf("%d\n", ret);
//		}
//		return 0;
//}
//7.分数求和(计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - … + 1/99 - 1/100 的值，并打印出结果，（注：除法分为整数除法和浮点数除法，要计算出⼩数，得采⽤浮点数除法，浮点数除法的操作数中⾄少要保证有⼀个浮点数。）)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0, j = 1.0;
//	for (i = 1; i < 101; i++)
//	{
//		sum = sum + j / i;
//		j = -j;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//8.计算最大值和最小值的差值(输⼊10个整数，写代码找出其中最⼤值和最⼩值，计算最⼤值和最⼩值的差，并打印出差值结果)
//法1
//#include <stdio.h>
//int main()
//{
//	int i = 0, max = 0, min = 0;
//	int arr[10] = { 0 };
//	while (1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		min = arr[0];
//		max = arr[0];
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			}
//			if (arr[i] < min)
//			{
//				min = arr[i];
//			}
//		}
//		printf("%d\n", max - min);
//	}
//	return 0;
//}

//法2，不使用数组
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//	int arr = 0;
//	while (1)
//	{
//		scanf("%d", &arr);
//		int max = arr;
//		int min = arr;
//		int i = 0;
//		for (i = 1; i < 10; i++)
//		{
//			scanf("%d", &arr);//每次更新，始终只有一个arr
//			if (arr > max)
//				max = arr;
//			if (arr < min)
//				min = arr;
//		}
//		printf("%d\n", max - min);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	for (ch = 'A'; ch <= 'D'; ch++)
//	{
//		if ((ch != 'A') + (ch == 'C') + (ch == 'D') + (ch != 'D') == 3)
//		{
//			printf("%c\n", ch);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int k = (m > n ? n : m);
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//			break;
//		k--;
//	}
//	printf("%d\n", k);
//}

//11.自幂数(⾃幂数是指⼀个数的位数的n次⽅等于这个数本⾝。例如，153是⾃幂数，因为 1^3+5^3+3^3=153。我们可以使⽤⼀个循环遍历 1~100000 并检查每个数是否为⾃幂数。)
//#include <stdio.h>
//#include <math.h>
//int Num(int x)
//{
//	int y = x, z = x;
//	int i = 0, j = 0, sum = 0;
//	do
//	{
//		i++;
//		y /= 10;
//	} while (y);
//	for (j = 0; j < i; j++)
//	{
//		sum = sum + (int)pow(x % 10, i);
//		x = x / 10;
//	}
//	if (sum == z)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int ret = Num(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//12.打印菱形
//13.喝汽水问题
//法1
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int drink = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		drink += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", drink);
//	return 0;
//}

//法2递归
//#include <stdio.h>
//int Drink(int x)
//{
//	if (x < 2)
//		return 0;
//	else
//		return x / 2 + Drink(x / 2 + x % 2);
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int drink = money;
//	int empty = money;
//	int ret = Drink(empty);
//	printf("%d", drink + ret);
//	return 0;
//}

//14.字符转换(输⼊⼀个字符串，将字符串中⼤写字⺟全部转为⼩写字⺟，⼩写字⺟转成⼤写字⺟，其他字符保持不变。注：字符串的⻓度⼩于等于30，其中字符串中包含空格。)
//#include <stdio.h>
//int main()
//{
//	char arr[31] = { '0' };
//	gets(arr);
//	int i = 0;
//	for (i = 0; i < 30; i++)
//	{
//		if (arr[i] >= 65 && arr[i] <= 90)
//			arr[i] += 32;
//		else if (arr[i] >= 97 && arr[i] <= 122)
//			arr[i] -= 32;
//		else
//			;
//	}
//	puts(arr);
//	return 0;
//}

//15.交换两个整数
//#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int ret = *x;
//	*x = *y;
//	*y = ret;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//16.求两个整数的平均值(考虑整数过大溢出的问题)
//#include <stdio.h>
//double averge(int x, int y)//返回类型不是int的函数需要注意一下
//{
//	if (x > y)
//	{
//		double z = y + (x - y) / 2;
//		return z;
//	}
//	else
//	{
//		double z = x + (y - x) / 2;
//		return z;
//	}
//		
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	double ret = averge(m, n);//注意
//	printf("%lf", ret);
//	return 0;
//}

//17.求字符串长度(模拟strlen函数)
//#include <stdio.h>
//int str(char* p)
//{
//	char* k = p;
//	int count = 0;
//	while (*k != '\0')
//	{
//		k++;
//		count++;//这样也可以
//	}
//	return count;
//	//return k - p;//这是用指针
//}
//int main()
//{
//	char arr[31] = { '0' };
//	gets(arr);
//	int ret = str(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//18.求字符串长度(进阶)
//#include <stdio.h>
//int Strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		//p = p + 1;
//		return 1 + Strlen(++p);//不能后置加加
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[31] = { '0' };
//	gets(arr);
//	int ret = Strlen(arr);
//	printf("%d\n", ret);
//}
//19.逆序字符串
//#include <stdio.h>
//#include <string.h>
//void Reverse(char* p)
//{
//	size_t len = strlen(p);
//	int left = 0, right = (int)len - 1;
//	while (left <= right)
//	{
//		int ret = p[left];
//		p[left] = p[right];
//		p[right] = ret;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000] = { '0' };
//	gets(arr);
//	Reverse(arr);
//	puts(arr);
//	return 0;
//}

//20.求数字的每一位之和
//#include <stdio.h>
//int main()
//{
//	int m = 0, sum = 0;
//	scanf("%d", &m);
//	while (m)
//	{
//		sum = sum + m % 10;
//		m = m / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//青蛙跳台阶问题
//#include <stdio.h>
//int Jump(int x)
//{
//	if (1 == x)
//		return 1;
//	else if (2 == x)
//		return 2;
//	else
//		return Jump(x - 1) + Jump(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Jump(n);
//	printf("%d\n", ret);
//	return 0;
//}

//汉诺塔问题
//#include <stdio.h>
//int Hanoi(int x, char a, char b, char c)
//{
//	if (1 == x)
//	{
//		printf("%c→%c\n", a, c);
//		return 1;
//	}
//	else
//	{
//		return Hanoi(x - 1, a, c, b) + Hanoi(1, a, b, c) + Hanoi(x - 1, b, a, c);;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Hanoi(n, 'A', 'B', 'C');
//	printf("需要移动的次数为%d\n", ret);
//	return 0;
//}

//21.回文字符串判断
//法1:其实有一些想麻烦了，可以更简单一些。
//#include <stdio.h>
//#include <string.h>
//void Reverse(char* p1)
//{
//	size_t len = strlen(p1);
//	int left = 0, right = (int)len - 1;
//	while (left <= right)
//	{
//		char ret = p1[left];
//		p1[left] = p1[right];
//		p1[right] = ret;
//		left++, right--;
//	}
//}
//int Huiwen(char* p)
//{
//	char arr1[31] = { '0' };
//	int i = 0;
//	size_t len = strlen(p);
//	char* i = p;//这样不可以，会被修改
//	for (i = 0; i < (int)len; i++)//注意这里我新创建了一个数组，因为如果单纯的复制一份地址，其实是都会被修改的，所以开辟一块新的地址来存放新的字符串
//	{
//		arr1[i] = p[i];
//	}
//	Reverse(arr1);
//	int ret = strcmp(p, arr1);
//	if (0 == ret)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	while (1)
//	{
//		char arr[31] = { '0' };
//		gets(arr);
//		int ret = Huiwen(arr);
//		if (1 == ret)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}
//法2
//#include <stdio.h>
//int main()
//{
//	char arr[31] = { '0' };
//	while (1)
//	{
//		gets(arr);
//		size_t sz = strlen(arr);
//		int left = 0, right = (int)sz - 1, flag = 0;
//		while (left <= right)
//		{
//			if (arr[left] != arr[right])
//				flag = 1;
//			left++, right--;
//		}
//		if (0 == flag)
//			printf("Yes\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//22.计算天数
//#include <stdio.h>
//int main()
//{
//	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int y = 0, m = 0;
//	while (scanf("%d%d", &y, &m) != EOF)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			arr[1] = arr[1] + 1;
//		}
//		printf("%d\n", arr[m - 1]);
//	}
//	return 0;
//}

//23.删除指定的数
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 }, i = 0, n = 0;
//	while (1)
//	{
//		int j = 0;
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		scanf("%d", &n);
//		int arr1[10] = { 0 };
//		for (i = 0; i < 10; i++)
//		{
//			if (n != arr[i])
//			{
//				arr[j] = arr[i];
//				j++;
//			}
//		}
//		for (i = 0; i < j; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//		return 0;
//}

//24.字符串拷贝
//#include <stdio.h>
//#include <string.h>
//void my_strcpy(const char* p1, char* p2)
//{
//	size_t sz = strlen(p1);
//	int i = 0;
//	for (i = 0; i < (int)sz; i++)
//	{
//		p2[i] = p1[i];
//	}
//	p2[i] = '\0';
//}
//int main()
//{
//	char arr1[31] = { '0' }, arr2[31] = { '0' };
//	gets(arr1);
//	my_strcpy(arr1, arr2);
//	puts(arr2);
//	return 0;
//}

//25.合并有序数组
//#include <stdio.h>
//#include <string.h>
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int n = 0, m = 0, i = 0, j = 0, flag = 0;
//	int arr1[60] = { 0 }, arr2[60] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = n, j = 0; i < n + m, j < m; i++, j++)
//	{
//		arr1[i] = arr2[j];
//	}
//	/*qsort(&arr1[0], m + n, sizeof(int), cmp);*/
//	for (i = 0; i < m + n - 1; i++)
//	{
//		for (j = 0; j < m + n - 1 - i; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int ret = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = ret;
//				flag = 1;
//			}
//		}
//		if (0 == flag)
//			break;
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//28题
//29题，返回2和n的最小公倍数，n是正整数
//int smallestEvenMultiple(int n)
//{
//    if ((n & 1) == 0)//1.判断奇偶，2.注意运算符优先级
//    {
//        return n;
//    }
//    return n * 2;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1 & (-4);//位操作符都是对补码进行操作，正数可以直接来是因为原码等于补码，负数不可以
//	printf("%d\n", a);
//	int b = 6 & (-4);
//	printf("%d\n", b);
//	int c = 12 & (-4);
//	printf("%d\n", c);
//	int d = (-12) & (-4);
//	printf("%d\n", d);
//	return 0;
//}

//32.回文数值得学习学习
//33.
//
//#include <stdio.h>
//int main()
//{
//	int a = 24 / 5;
//	printf("%d\n", a);//向下取整，没有四舍五入
//	return 0;
//}

#include <stdio.h>
int Hanoi(int x, char qs, char zz, char js)//qs起始，zz中间,js结束
{
	if (1 == x)
	{
		printf("%c→%c\n", qs, zz);
		return 1;
	}
	else
	{
		return Hanoi(x - 1, qs, js, zz) + Hanoi(1, qs, zz, js) + Hanoi(x - 1, zz, qs, js);;
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = Hanoi(i, 'A', 'B', 'C');
	printf("%d\n", ret);
	return 0;
}














