#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(char* p, char* q)
//{
//	int i = 0, j = 0;
//	size_t sz1 = strlen(p);
//	size_t sz2 = strlen(q);
//	if (p > q)
//		j = q;
//	else if (p < q)
//		j = p;
//	else
//		j = p;
//	for (i = 0; i < j + 1; i++)
//	{
//		if (p[i] == q[i])
//			continue;
//		else if (p[i] > q[i])
//			return 1;
//		else
//			return -1;
//	}
//	return 0;
//}
//int main()
//{
//	int ret = my_strcmp("abcdef", "abc");
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* p, const char* q)
//{
//	assert(p && q);
//	while (*p == *q)
//	{
//		if (*p == '\0')
//			return 0;
//		p++;
//		q++;
//	}
//	/*if (*p > *q)
//		return 1;
//	else
//		return -1;*/
//	return *p - *q;
//}
//int main()
//{
//	int ret = my_strcmp("abcdef", "abc");
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc12345";
//	char arr2[20] = "###########";
//	char arr3[20] = "###############";
//	strncpy(arr2, arr1, 3);
//	strcpy(arr3, arr1, 9);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);//不够用\0来补
//	return 0;
//}

//char* my_strncpy(char* p, const char* q, int i)
//{
//	int j = 0;
// assert(p && q);
//	char* ret = p;
//	while (j < i)
//	{
//		p[j] = q[j];
//		j++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abc12345";
//	char arr2[20] = "##########";
//	char* p = my_strncpy(arr2, arr1, 3);
//	printf("%s\n", p);
//}

//int my_strncmp(const char* p, const char* q, int x)
//{
//	int i = 0;
//	assert(p != NULL);
//	assert(q != NULL);
//	for (i = 0; i < x; i++)
//	{
//		if (p[i] == q[i])
//			continue;
//		else
//			return p[i] - q[i];
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//	int ret = my_strncmp(arr1, arr2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strncat(char* p, const char* q, int x)
//{
//	char* ret = p;
//	assert(p != NULL);
//	assert(q != NULL);
//	while (*p != '\0')
//	{
//		p++;
//	}
//	int i = 0;
//	for (i = 0; i < x; i++, p++)
//	{
//		*p = q[i];
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s\n", my_strncat(arr1, arr2, 8));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	printf("%s\n", str1);
//	return 0;
//}

//int main()
//{
//    char str[] = "- This, a sample string.";
//    char* pch;
//    printf("Splitting string \"%s\" into tokens:\n", str);
//    pch = strtok(str, " ,.-");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = strtok(NULL, " ,.-");
//    }
//    return 0;
//}

//int main()
//{
//	char arr1[] = "jlu@1234.abc/qwe/";
//	char* sep = "@./";
//	char* ptr = strtok(arr1, sep);
//	while (ptr != NULL)
//	{
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, sep);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefghidef";
//	char arr2[] = "def";
//	char* ret = strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//strstr的模拟

//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	if (*str2 == '\0')//规定
//		return str1;
//	while (cp != '\0')
//	{
//		s1 = cp;//cp就是从哪个位置开始查找，记录了可能找到匹配字符串的起始位置
//		s2 = str2;
//		while ((*s1 == *s2) && (*s2 != '\0') && (*s1 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	const char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("没找到\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}



