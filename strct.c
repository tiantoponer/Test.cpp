#include<assert.h>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
//��ʼ��
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//Ҳ����Ϊ-1
	ps->capacity = 0;
}
//����
void StackPush(ST* ps ,STDataType x)
{
	if (ps->capacity == ps->top)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(ST) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//�ͷ�
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//ɾ��
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
//ջ��
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//��С
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}