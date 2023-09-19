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
//	printf("%s\n", arr3);//≤ªπª”√\0¿¥≤π
//	return 0;
//}

//char* my_strncpy(char* p, char* q, int i)
//{
//	int j = 0;
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

int main()
{

}
