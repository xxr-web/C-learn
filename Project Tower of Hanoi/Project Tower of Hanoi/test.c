#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 1;
//	printf("%d\n", i);
//	return 0;
//}

//��n-1������A����C�Ƶ�B
//��A�ϵ����һ������A�Ƶ�C
//��ʣ���n-1��������B����A�Ƶ�C
//abc����ʼ����ת������յ�
//ABC��ʵ�ʵ�����

void move(char a, char b)
{
	printf("%c��%c", a, b);
	printf("\n");
}

void Hanoi(int x, char qs, char zz, char js)
{
	if (1 == x)
	{
		move(qs, js);//��n=1ʱ����ֻ��ֻһ��·��������ͻ����ˡ�
	}
	else if (x > 1)
	{
		Hanoi(x - 1, qs, js, zz);//ÿ��һ������������ת�����������λ�ã�ֱ����ת��23���ٽ���
		move(qs, js);
		Hanoi(x - 1, zz, qs, js);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int j = pow(2, i) - 1;
	printf("������Ҫ�Ĵ�����%d\n", j);
	Hanoi(i, 'A', 'B', 'C');
	return 0;
}


