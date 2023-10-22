#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Swap(int* nums, int x, int y)
//{
//	int tmp = nums[y];
//	nums[y] = x;
//	return tmp;
//}
//void rotate(int* nums, int numsSize, int k)
//{
//	int count = numsSize;
//	if (0 == k)
//	{
//		;
//	}
//	else
//	{
//		int i = 0;
//		int j = (i + k) % numsSize;
//		int tmp = Swap(nums, nums[i], j);
//		i = j;
//		count--;
//		while (count)
//		{
//			if (i == 0)
//			{
//
//			}
//			j = (i + k) % numsSize;
//			tmp = Swap(nums, tmp, j);
//			i = j;
//			count--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3 ,4 ,5 ,6 ,7, 8, 9, 10 };
//	rotate(arr, 10, 3);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void swap(int* a, int* b)
//{
//    int t;
//    t = *a;
//    *a = *b;
//    *b = t;
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    int cnt = 0;
//    int temp, p;
//    for (int start = 0; start < numsSize; start++)
//    {
//        temp = nums[start];
//        p = start;
//        do
//        {
//            p = (p + k) % numsSize;
//            swap(&temp, &nums[p]);
//            cnt++;
//        } while (p != start);
//        if (cnt == numsSize) break;
//    }
//}

