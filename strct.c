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
//初始化
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//也可以为-1
	ps->capacity = 0;
}
//插入
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
//释放
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//删除
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
//栈顶
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//大小
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}