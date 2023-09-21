#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "ghijk";
//	printf("%s\n", strncpy(arr1, arr2, 3));
//	return 0;
//}

//��C���ԵĿ⺯�������һЩ�����룬���������õĹ����з������ִ���Ҫ��¼����������0,1,2
//����ֵ�����������������Ĵ�����Ϣ����Ԫ�ص�ַ
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char* ret = strerror(i);
//		printf("%d : %s\n", i, ret);
//	}
//	return 0;
//}

//���⺯������ʧ��ʱ����Ѵ������¼��errno���������
//errno��ȫ�ֱ���

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	memcpy(arr1, arr2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	void* ret = dest;
//	assert(dest && source);
//	while (num)
//	{
//		*(char*)dest = *(char*)source;
//		dest = (char*)dest + 1;
//		source = (char*)source + 1;
//		num--;
//	}
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	my_memcpy(arr1, arr2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

void* my_memcpy(void* dest, const void* source, size_t num)
{
	void* ret = dest;
	assert(dest && source);
	while (num)
	{
		*(char*)dest = *(char*)source;
		dest = (char*)dest + 1;
		source = (char*)source + 1;
		num--;
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	my_memcpy(arr1, arr2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}


