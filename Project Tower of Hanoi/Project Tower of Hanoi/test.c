#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 1;
//	printf("%d\n", i);
//	return 0;
//}

//将n-1个环从A借助C移到B
//将A上的最后一个环从A移到C
//将剩余的n-1个环，从B借助A移到C
//abc是起始，中转和最后终点
//ABC是实际的柱子

void move(char a, char b)
{
	printf("%c→%c", a, b);
	printf("\n");
}

void Hanoi(int x, char qs, char zz, char js)
{
	if (1 == x)
	{
		move(qs, js);//当n=1时，就只有只一个路径，走完就回推了。
	}
	else if (x > 1)
	{
		Hanoi(x - 1, qs, js, zz);//每次一碰到函数就跳转到函数定义的位置，直接跳转到23行再进入
		move(qs, js);
		Hanoi(x - 1, zz, qs, js);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int j = pow(2, i) - 1;
	printf("最少需要的次数是%d\n", j);
	Hanoi(i, 'A', 'B', 'C');
	return 0;
}


