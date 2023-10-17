#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//struct Stu
//{
//	int i;
//	int arr1[0];
//};
//int main()
//{
//	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	p->i = 10;
//	printf("%d\n", p->i);
//	for (i = 0; i < 10; i++)
//	{
//		p->arr1[i] = i;
//		printf("%d ", p->arr1[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//	int* ptr = realloc(p, 15 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	for (i = 10; i < 15; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof("c:\code\test.txt"));//这样不行，因为sizeof是内存空间，所以是15，算上'\0
//	printf("%zd\n", sizeof("abc"));
//	printf("%zd\n", strlen("c:\code\test.txt"));//14
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE * pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//⼆进制的形式写到⽂件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("D:\\桌面\\test test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* Pf = fopen("test.txt", "w");
//	if (Pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char i = '0';
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, Pf);
//	}
//	fclose(Pf);
//	Pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int* test(int* nums, int n)
//{
//    int* p = (int*)malloc(2 * (n * sizeof(int)));
//    if (p == NULL)
//    {
//        perror("malloc");
//        return 1;
//    }
//    else
//    {
//        int* ans = p;
//        int i = 0;
//        for (i = 0; i < 2 * n; i++)
//        {
//            if (i < n)
//            {
//                ans[i] = nums[i];
//            }
//            else
//            {
//                ans[i] = nums[i - n];
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//
//}

//int main()
//{
//	int** p = (int**)malloc(3 * sizeof(int*));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		int* ptr1 = (int*)malloc(5 * sizeof(int));
//		int* ptr2 = (int*)malloc(5 * sizeof(int));
//		int* ptr3 = (int*)malloc(5 * sizeof(int));
//		if ((ptr1 == NULL) || (ptr2 == NULL) || (ptr3 == NULL))
//		{
//			perror("malloc");
//			return 1;
//		}
//		else
//		{
//			*(p + 0) = ptr1;
//			*(p + 1) = ptr2;
//			*(p + 2) = ptr3;
//			int i = 0, j = 0;
//			for (i = 0; i < 3; i++)
//			{
//				for (j = 0; j < 5; j++)
//				{
//					* (*(p + i) + j) = j;
//					printf("%d ", p[i][j]);
//				}
//				printf("\n");
//			}
//		}
//		free(ptr1), ptr1 = NULL;
//		free(ptr2), ptr2 = NULL;
//		free(ptr3), ptr3 = NULL;
//		free(p), p = NULL;
//	}
//}

//int* getConcatenation(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = numsSize * 2;
//    int* ans = (int*)malloc(sizeof(int) * (*returnSize));
//    if (ans == NULL)
//    {
//        perror("malloc");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i <  (*returnSize); i++)
//    {
//        if (i < numsSize)
//        {
//            ans[i] = nums[i];
//        }
//        else
//        {
//            ans[i] = nums[i - numsSize];
//        }
//    }
//    return ans;
//}

