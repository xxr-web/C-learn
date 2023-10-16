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
//    // 其他代码...
//
//    return 0;
//}

#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX * 4);
//	if (p == NULL)
//	{
//		perror("malloc");//要加双引号
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
//		//业务处理
//	}
//	else
//	{
//		return 1;
//	}
//	//扩展容量
//
//	//代码1 - 直接将realloc的返回值放到ptr中
//	//ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)，失败了会变成空指针，原来的变量也丢失了
//
//	//代码2 - 先将realloc函数的返回值放在p中，不为NULL，在放ptr中
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}//如果是情况2, ptr会被自动free掉了

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* ptr = NULL;
//	ptr = (int*)realloc(p, 40000);
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//当realloc函数的第一个参数是NULL指针时，功能类似于malloc函数
//}

//申请的空间，但是一直不释放 一直占用着，这部分内存不能被使用，内存泄漏。
//如果是一个一直在跑的程序，内存泄漏很可怕

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//申请的动态内存分配给了P，但是函数结束后，p直接销毁，p的地址再也没有人记得，malloc申请的空间没有机会释放，导致内存泄漏
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//对NULL指针进行解引用，导致程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
