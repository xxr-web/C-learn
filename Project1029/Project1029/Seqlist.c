#define _CRT_SECURE_NO_WARNINGS
#include "Seqlist.h"

void SLInit(SL* ps1)
{
	assert(ps1);
	ps1->a = NULL;
	ps1->size = 0;
	ps1->capcity = 0;
}

void SLprint(SL* ps1)
{
	assert(ps1);
	for (int i = 0; i < ps1->size; i++)
	{
		printf("%d ", ps1->a[i]);
	}
	printf("\n");
}

void capcitycheck(SL* ps1)
{
	assert(ps1);
	if (ps1->size == ps1->capcity)
	{
		int newcapcity = ps1->capcity == 0 ? 4 : 2 * (ps1->capcity);//��0���Ǿ���4���������ǾͶ�����
		SLDataType* tmp = realloc(ps1->a, sizeof(SLDataType) * newcapcity);
		if (tmp == NULL)
		{
			perror("realloc");
			return;
		}
		ps1->a = tmp;
		ps1->capcity = newcapcity;
	}
}

void SeqListPushBack(SL* psl, SLDataType x)
{
	assert(psl);
	capcitycheck(psl);
	psl->a[psl->size] = x;
	psl->size++;
}

void SeqListPushFront(SL* psl, SLDataType x)
{
	assert(psl);
	capcitycheck(psl);
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[0] = x;
	psl->size++;
}

void SeqListPopBack(SL* psl)
{
	/*if (psl->size <= 0)
	{
		return;
	}*///����ļ��
	assert(psl->size > 0);//������飬ֱ�ӱ���
	psl->size--;//1.ֱ����Ч�ռ䲻������ 2.�ٴ�β���ʱ�����ֱ�Ӹ����ˡ�
	//���ˣ��Ͳ�ɾ��
}

void SeqListPopFront(SL* psl)
{
	assert(psl->size > 0);
	int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		++begin;
	}
	psl->size--;
}

void SLInsert(SL* ps1, int pos, SLDataType x)//˳����0��ʼ��������Ҫ���pos
{
	assert(ps1);
	assert((pos >= 0) && (pos <= ps1->size));
	capcitycheck(ps1);
	int end = ps1->size - 1;
	while (end >= pos)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[pos] = x;
	ps1->size++;
}

void SLErase(SL* ps1, int pos)
{
	assert(ps1);
	assert((pos >= 0) && (pos <= ps1->size));
	int begin = pos + 1;
	while (begin < ps1->size)
	{
		ps1->a[begin - 1] = ps1->a[begin];
		--begin;
	}
	ps1->size--;
}

void SLDesroy(SL* ps1)
{
	if (ps1->a != NULL)
	{
		free(ps1->a);
		ps1->a = NULL;
		ps1->size = 0;
		ps1->capcity = 0;
	}
}

//Ϊʲô������±��0��ʼ��Ϊ�˺�ָ���߼���Ǣ,a[0] = *(a + 0)

