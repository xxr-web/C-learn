#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	//�ַ����ຯ��,�ж��ַ������
//	int ret = islower('q');
//	int ret1 = islower('Q');
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}

//int main()
//{
//	char ch = '0';
//	ch = getchar();
//	if (islower(ch) != 0)
//		printf("%d\n", 1);
//	else
//		printf("%d\n", 0);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str[] = "i am a student.";
//	size_t sz = strlen(str);
//	for (int i = 0; i < (int)sz; i++)
//	{
//		if (islower(str[i]) != 0)
//		{
//			//str[i] = str[i] - 32;
//			str[i] -= 32;
//		}
//	}
//	puts(str);
//	printf("%s\n", str);
//	return 0;
//}

//2.�ַ�ת������
//int main()
//{
//	char str[] = "i am a student.";
//	size_t sz = strlen(str);
//	for (int i = 0; i < (int)sz; i++)
//	{
//		if (islower(str[i]) != 0)
//		{
//			//str[i] = str[i] - 32;
//			//str[i] -= 32;
//			str[i] = toupper(str[i]);
//		}
//	}
//	puts(str);
//	printf("%s\n", str);
//	return 0;
//}

//3.strlenģ��ʵ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	int i = 0;
//	while (*p != '\0')
//	{
//		i++;
//		p++;
//	}
//	printf("%d\n", i);
//	return 0;
//}

//typedef unsigned int ui;
//int main()
//{
//	ui a = 3;
//	ui b = 6;
//	ui c = a - b;//��ɲ���֮���ٲ������
//	printf("%u", c);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") < 0)//strlen�ķ���ֵ��size_t���޷�������
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//#include <assert.h>
//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(p + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t sz = my_strlen(arr);
//	printf("%zd\n", sz);
//	return 0;
//}

//#include <assert.h>
//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	const char* s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - p;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t sz = my_strlen(arr);
//	printf("%zd\n", sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "Hello bit !";
//	char arr2[] = "##############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//������ԭ�ַ�����\0�������ڴ˽�ֹ
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[4] = "abc";
//	//char* p = "abcdef";
//	char arr2[] = "abcdef";
//	//strcpy(p, arr1);
//	//printf("%s\n", p);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//void my_strcpy(char* p, char* q)
//{
//	size_t sz = strlen(q);
//	for (int i = 0; i <= sz; i++)
//	{
//		*(p + i) = *(q + i);
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "0";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//Դͷ����
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//�Ż�
//
//	while ((*dest++ = *src++))//'\0'��ASCII��ֵ����0������ѭ����������һ����ֵ���ʽ���жϵ���*dest++
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[20] = "0";
//	char* p = my_strcpy(arr2, arr1);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[100] = "hello";
//	strcat(arr1, " world!");
//	puts(arr1);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//#include <assert.h>
//char* my_strcat(char* p, const char* q)
//{
//	char* ret = p;
//	assert(p && q);
//	while (*p != '\0')
//	{
//		p++;
//	}
//	while (*p = *q)
//	{
//		p++;
//		q++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	my_strcat(arr1, arr1);//�����Լ�׷���Լ�
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//size_t my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	size_t sz = my_strlen(arr);
//	printf("%zd\n", sz);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcpy(char* p, const char* q)
//{
//	char* ret = p;
//	assert(p && q);
//	while (*p = *q)
//	{
//		p++;
//		q++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}













 