#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", 100);
//	int sum = Add(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* ptr = (int*)realloc(p, 11 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//		return 1;
//	}
//	else
//	{
//		printf("%p\n%p\n", p, ptr);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* ptr = (int*)realloc(p, 11 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//		return 1;
//	}
//	else
//	{
//		printf("%p\n%p\n", p, ptr);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* ptr = (int*)realloc(p, 11 * sizeof(int));
//	if (ptr == NULL)//��ֹ��Ϊptr�ǿ�ָ��ֱ�Ӹ���p�󣬾�p��ԭ�ȵ�����Ū����
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		p = ptr;
//		ptr = NULL;//�˴�������free(ptr)�������Ļ�pҲ��������
//		int i = 0;
//		for (i = 0; i < 11; i++)
//		{
//			p[i] = i;
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(1000000000);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	printf("%d\n", *p);
//	free(p);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//#include <string.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10, b = 10;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __DATE__);
//	return 0;
//}

//#define do_forever for(;;)
//
//int main()
//{
//	//printf("%d\n", 1);
//	do_forever
//		printf("%d", 1);//for ( ; ; )����ѭ��
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);//((x++) > (y++) ? (x++) : (y++));//��ΪС�ڣ�����x++�Ͳ�ִ����
//	printf("x=%d y=%d z=%d\n", x, y, z);//����Ľ����ʲô��//6 10 9
//}

#define M 100

int main()
{
	printf("M = %d\n", M);//��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������M = %d�е�M�ǲ��ᱻ�滻�ġ�
	return 0;
}

//���޷����ԣ�Ԥ������Ѿ��Ѻ껻���ˣ����Ե���ִ�й�����ˣ��޷����е��ԡ�