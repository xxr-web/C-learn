#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	free(p);
//	p = NULL;
//	assert(p);
//	printf("%zd\n", sizeof(p));
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//
//int main() {
//    FILE* file = fopen("nonexistent_file.txt", "r");
//    if (file == NULL) {
//        perror("Error");
//        return 1;
//    }
//
//    // ��������...
//
//    return 0;
//}

#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX * 4);
//	if (p == NULL)
//	{
//		perror("malloc");//Ҫ��˫����
//		return 1;
//	}
//}

//int main()
//{
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//ҵ����
//	}
//	else
//	{
//		return 1;
//	}
//	//��չ����
//
//	//����1 - ֱ�ӽ�realloc�ķ���ֵ�ŵ�ptr��
//	//ptr = (int*)realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)��ʧ���˻��ɿ�ָ�룬ԭ���ı���Ҳ��ʧ��
//
//	//����2 - �Ƚ�realloc�����ķ���ֵ����p�У���ΪNULL���ڷ�ptr��
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//ҵ����
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}//��������2, ptr�ᱻ�Զ�free����

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* ptr = NULL;
//	ptr = (int*)realloc(p, 40000);
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//��realloc�����ĵ�һ��������NULLָ��ʱ������������malloc����
//}

//����Ŀռ䣬����һֱ���ͷ� һֱռ���ţ��ⲿ���ڴ治�ܱ�ʹ�ã��ڴ�й©��
//�����һ��һֱ���ܵĳ����ڴ�й©�ܿ���

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//����Ķ�̬�ڴ�������P�����Ǻ���������pֱ�����٣�p�ĵ�ַ��Ҳû���˼ǵã�malloc����Ŀռ�û�л����ͷţ������ڴ�й©
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//��NULLָ����н����ã����³������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//���˺�����p�����Ŀռ��Ѿ��������ˣ�����ջ�ռ䣨�ֲ���������ַ��str�Ѿ���Ұָ�� 
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�ڴ�ռ��Ѿ����ͷţ��Ƿ�����
//		printf(str);
//	}
//}

//struct Stu
//{
//	int i;
//	char a;
//	int arr[0];
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct Stu));
//	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	p->i = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	struct Stu* ptr = realloc(p, sizeof(struct Stu) + 15 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	return 0;
//}

struct Stu
{
	int i;
	char a;
	int arr[0];
};

int main()
{
	printf("%zd\n", sizeof(struct Stu));
	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	int i = 0;
	p->i = 100;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}