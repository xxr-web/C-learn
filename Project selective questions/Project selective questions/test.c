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





