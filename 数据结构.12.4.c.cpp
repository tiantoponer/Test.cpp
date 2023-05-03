#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	long long *arr= (long long*)malloc(sizeof(long long) * (k));
//	if (arr == NULL)
//	{
//		return 0;
//	}
//	arr[0] = 1;
//	arr[1] = 1;
//	for (i = 2;i < k;i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	unsigned long long sum = 0;
//	for (i = 0;i < k;i++)
//	{
//		sum += arr[i];
//	}
//	printf("%lld",sum);
//	free(arr);
//	arr = NULL;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 0,2,3,5,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int i = 0;
//	int ret = 0;
//	for (i = 0;i <= sz;i++)
//	{
//		if (i < sz)
//			ret = ret + i - arr[i];
//		else if (i == sz)
//			ret += i;
//	}
//	printf("%d", ret);*/
//	//第二种方法 --异或
//	int x = 0;
//	int i = 0;
//	for (i = 0;i <= sz;i++)
//	{
//		x^= i;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		x ^= arr[i];
//	}
//	printf("%d", x);
//	return 0;
//}


//旋转
//void Rever(int* arr, int left, int right)
//{
//	int tmp = 0;
//	while (right >left)
//	{
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int k = 0;
//	scanf("%d", &k);
//	//int tmp[] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	if (k >= sz)
//		k %= sz;
//	Rever(arr, 0,sz - k-1);
//	Rever(arr, sz - k , sz-1);
//	Rever(arr, 0, sz-1);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
	//int i = 0;
	//for (i = 0;i < sz;i++)
	//{
	//	if (i < k)
	//	{
	//		tmp[i] = arr[i +sz-k];
	//	}
	//	if (i >= k)
	//	{
	//		tmp[i] = arr[i - k];
	//	}
	//	/*if (i < k)
	//	{
	//		arr2[i] = arr[sz - k + i];
	//	}
	//	else
	//	{
	//		arr2[i] = arr[i-k];
	//	}*/
	//}
	//for (i = 0;i < sz;i++)
	//{
	//	arr[i] = tmp[i];
	//	printf("%d ", arr[i]);
	//}
//	return 0;
//}
 
#include<assert.h>
//顺序表
//typedef struct SequentialList
//{
//	int* a;
//	int size;
//	int capacity;
//}SL;
//void SeqListMemAdd(SL*p)
//{
//	if (p->size == p->capacity)
//	{
//		int newcapacity = p->capacity == 0 ? 4 : p->capacity * 2;
//		int* tmp = (int*)realloc(p->a, newcapacity * sizeof(int));
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		p->a = tmp;
//		p->capacity = newcapacity;
//	}
//}
//void SeqListInit(SL* p)
//{
//	p->a = NULL;
//	p->capacity = 0;
//	p->size = 0;
//}
//void SeqListPrint(SL*p)
//{
//	int i = 0;
//	for (i = 0;i < p->size;i++)
//	{
//		printf("%d ", p->a[i]);
//	}
//	printf("\n");
//}
//void SeqListDestry(SL*p)
//{
//	free(p->a);
//	p->a = NULL;
//}
//void SeqListPustBack(SL* p, int x)
//{
//	SeqListMemAdd(p);
//	p->a[p->size] = x;
//	p->size++;
//}
//void SeqListPopFront(SL* p)
//{
//	assert(p->size > 0);
//	int begin = 1;
//	while (begin<p->size)
//	{
//		p->a[begin-1] = p->a[begin];
//		begin++;
//	}
//	p->size--;
//}
//void SeqListDelBack(SL*p)
//{
//	assert(p->size > 0);
//	p->a[p->size - 1] = NULL;
//	p->size--;
//}
//void SeqListPustFornt(SL*p,int x)
//{
//	//assert(p->size > 0);
//	//p->size--;
//	int end = p->size - 1;
//	while (end>=0)
//	{
//		p->a[end + 1] = p->a[end];
//		end--;
//	}
//	p->a[0] = x;
//	SeqListMemAdd(p);
//	p->size++;
//}
////找到返回x的下标，没找到返回-1
//int SeqListFind(SL* p, int x)
//{
//	int i = 0;
//	for (i = 0;i < p->size;i++)
//	{
//		if (p->a[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
////指定下标插入数字
//void SeqListInset(SL* p, int pos, int x)
//{
//	assert(pos>=0 && pos<=p->size);
//	SeqListMemAdd(p);
//	int i = 0;
//	for (i = p->size - 1; i >= pos;i--)
//	{
//		p->a[i + 1] = p->a[i];
//	}
//	p->a[pos] = x;
//	p->size++;
//}
////删除指定位置的数字
//void SeqListErase(SL* p, int pos)
//{
//	int i = 0;
//	for (i = pos; i <p->size;i++)
//	{
//		p->a[i] = p->a[i+1];
//	}
//	p->size--;
//}
//void SeqListTEXT1()
//{
//	SL sl;
//	SeqListInit(&sl);
//	SeqListPustBack(&sl, 1);
//	SeqListPustBack(&sl, 2);
//	SeqListPustBack(&sl, 3);
//	SeqListPustBack(&sl, 4);
//	SeqListPustBack(&sl, 5);
//	SeqListPustBack(&sl, 6);
//	SeqListPrint(&sl);
//
//	SeqListPustFornt(&sl, 10);
//	SeqListPustFornt(&sl, 20);
//	SeqListPustFornt(&sl, 30);
//
//	SeqListDelBack(&sl);
//	SeqListPrint(&sl);
//	SeqListDestry(&sl);
//}
//void SeqListTEXT2()
//{
//	SL sl;
//	SeqListInit(&sl);
//
//	SeqListPustBack(&sl, 1);
//	SeqListPustBack(&sl, 2);
//	SeqListPustBack(&sl, 3);
//	SeqListPustBack(&sl, 4);
//	SeqListPustBack(&sl, 5);
//	SeqListPustBack(&sl, 6);
//	SeqListInset(&sl, 4, 10);
//	/*int ret= SeqListFind(&sl, 40);
//	printf("%d", ret);*/
//	//SeqListPrint(&sl);
//	//SeqListPopFront(&sl);
//	SeqListErase(&sl, 3);
//	SeqListPrint(&sl);
//
//	SeqListDestry(&sl);
//
//
//}
//int main()
//{
//	//SeqListTEXT1();
//	SeqListTEXT2();
//	return 0;
//}






//单链表
//单链表的缺陷还是很多的，单纯单链表增删查找的意义不大
//1. 很多OJ题考单链表
//2. 单链表更多的是去更复杂数据结构的子结构 。 哈希表 
//
//typedef int LLTYPE;
//typedef struct LinkList
//{
//	LLTYPE data;
//	struct LinkList* next;
//}LL;
////开辟空间
//LL* BuyLinkListNode(int x)
//{
//	LL* newcode = (LL*)malloc(sizeof(LL));
//	newcode->data = x;
//	newcode->next = NULL;
//	return newcode;
//}
////打印
//void LinkListPrint(LL* phead)
//{
//	LL* cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
////尾插
//void LinkListPushBack(LL** pphead, LLTYPE x)
//{
//	assert(pphead);
//	LL*newcode =BuyLinkListNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newcode;
//	}
//	else
//	{
//		LL* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail =tail->next;
//		}
//		tail->next = newcode;
//	}
//}
//void LinkListPushFront(LL**pphead,LLTYPE x)
//{
//	LL* newcode = BuyLinkListNode(x);
//	newcode->next = *pphead;
//	*pphead = newcode;
//}
////尾删 
//void LinkListPopBack(LL** pphead)
//{
//	//第一种写法
//	/*LL* tail = *pphead;
//	LL* prev = *pphead;
//	while (tail->next != NULL)
//	{
//		prev = tail;
//		tail = tail->next;
//	}
//	prev->next = NULL;
//	free(tail);
//	tail = NULL;*/
//	//第二种写法
//	assert(*pphead);
//	if ((*pphead)->next==NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		LL* tail = *pphead;
//		while (tail->next->next)
//		{
//			tail = tail->next;
//		}
//		free(tail->next);
//		tail->next = NULL;
//	}
//}
////头删
//void LinkListPopFront(LL** pphead)
//{
//	assert(*pphead);
//	LL* head = (*pphead)->next;
//	free(*pphead);
//	*pphead = NULL;
//	*pphead = head;
//}
////内存销毁
//void LinkListBreak(LL** pphead)
//{
//	assert(pphead);
//	//LL* cur = (* pphed)->next;
//	//while ((*pphed)->next)
//	//{
//	//	free(*pphed);
//	//	*pphed = cur;
//	//	cur = (*pphed)->next;
//	//}
//	//*pphed = NULL;
//	LL* cur = *pphead;
//	while (cur)
//	{
//		LL*next = (*pphead)->next;
//		free(pphead);
//		cur = next;
//	}
//	*pphead = NULL;
//}
////查找下标所对应的值
//LL* LinkListFindNum(LL* phead,int x)
//{
//	LL* cur = phead;
//	while (x--)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}
////查找值所对应的下标
//LL* LinkListFindPos(LL* phead, LLTYPE x)
//{
//	LL* cur = phead;
//
//	while (cur)
//	{
//		if (cur->data == x)
//			return cur;
//		else
//			cur = cur->next;
//	}
//	return NULL;
//}
////创建
//void LinkListInsert(LL** pphead,int x,LLTYPE y)
//{
//	if (x == 0)
//	{
//		LinkListPushFront(pphead, y);
//	}
//	else
//	{
//		LL* newcode = BuyLinkListNode(y);
//		LL* cur = *pphead;
//		while (x-- != 1)
//		{
//			cur = cur->next;
//		}
//		LL* tmp = cur->next;
//		cur->next = newcode;
//		cur = cur->next;
//		cur->next = tmp;
//	}
//	
//}
////删除
//void LinkListErase(LL** pphead,int pos)
//{
//	assert(*pphead);
//	if (pos == 0)
//	{
//		LinkListPopFront(pphead);
//	}
//	else
//	{
//		LL* cur = LinkListFindNum(*pphead, pos - 1);
//		LL* cur1 = LinkListFindNum(*pphead, pos);
//		LL* cur2 = LinkListFindNum(*pphead, pos + 1);
//		cur->next = cur2;
//		free(cur1);
//		cur1 = NULL;
//	}
//}
//void LLtext1()
//{
//	LL* plist = NULL;
//	LinkListPushBack(&plist, 1);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 3);
//	
//	LL* tmp = LinkListFindNum(plist, 0);
//	printf("%d\n", tmp->data);
//	LinkListPrint(plist);
//	LinkListBreak(&plist);
//
//	
//}
//void LLtext2()
//{
//	LL* plist = NULL;
//	LinkListPushBack(&plist, 1);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 3);
//	LinkListPushBack(&plist, 4);
//	LinkListPushBack(&plist, 5);
//	LinkListErase(&plist, 2);
//
//	//LinkListInsert(&plist, 2, 10);
//	LinkListPrint(plist);
//	LinkListBreak(&plist);
//}
//void text1()
//{
//	LL* plist = NULL;
//	LinkListPushBack(&plist, 1);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 3);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 4);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 2);
//	LinkListPushBack(&plist, 5);
//	LL* pos = LinkListFindPos(plist, 2);
//	int i = 0;
//	while (pos)
//	{
//		printf("第%dpos的节点是：%p->%d\n", i++, pos, pos->data);
//		pos = LinkListFindPos(pos->next, 2);
//	}
// }
//void text2()
//{
//	LL* plist = NULL;
//	LinkListPushBack(&plist, 1);
//	LinkListPushBack(&plist, 2);
//	LinkListInsert(&plist, 0, 10);
//	LinkListErase(&plist, 0);
//	LinkListPrint(plist);
//}
//int main()
//{
//	//LLtext1();
//	//LLtext2();
//	//text1();
//	text2();
//	return 0;
//}



//双向链表
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//	struct ListNode* prev;
//}LN;
//
//LN* ListNodeInit()
//{
//	LN* head = (LN*)malloc(sizeof(LN));
//	head->next = head;
//	head->prev = head;
//	return head;
//}
////创建
//LN* BuyNewNode(int x)
//{
//	LN* NewNode = (LN*)malloc(sizeof(LN));
//	NewNode->val = x;
//	return NewNode;
//}
//LN* FindList(LN* phead, int pos)
//{
//	pos += 1;
//	while (pos--)
//	{
//		phead = phead->next;
//	}
//	return phead;
//}
////尾插
//void ListPushBack(LN* phead,int x)
//{
//	assert(phead);
//	LN* tail = phead->prev;
//	LN* cur = (LN*)malloc(sizeof(LN));
//	cur->val = x;
//
//	tail->next = cur;
//	cur->prev = tail;
//	phead->prev = cur;
//	cur->next = phead;
//}
//void ListPopBack(LN* phead)
//{
//	assert(phead);
//	assert(phead->next != phead);
//	LN* tail = phead->prev;
//	LN* newtail = tail->prev;
//	phead->prev = newtail;
//	newtail->next = phead;
//	free(tail);
//	tail = NULL;
//}
//void ListPushFront(LN* phead, int x)
//{
//	assert(phead);
//	LN* newhead = (LN*)malloc(sizeof(LN));
//	newhead->val = x;
//	LN* head = phead->next;
//	phead->next = newhead;
//	newhead->prev = phead;
//	newhead->next = head;
//	head->prev = newhead;
//}
//void ListPopFront(LN* phead)
//{
//	assert(phead);
//	assert(phead->next != phead);
//	LN* head = phead->next;
//	phead->next = phead->next->next;
//	phead->next->next->prev = phead;
//	free(head);
//	head = NULL;
//}
//void ListPrint(LN* phead)
//{
//	assert(phead);
//	LN* cur = phead->next;
//	while (cur != phead)
//	{
//		printf("%d ", cur->val);
//		cur = cur->next;
//	}
//	printf("\n");
//}
////在pos前面插入
//void ListInsert(LN* pos, int x)
//{
//	assert(pos);
//	LN* Prev = pos->prev;
//	LN* newnode = BuyNewNode(x);
//	Prev->next = newnode;
//	newnode->prev = Prev;
//	newnode->next = pos;
//	pos->prev = newnode;
//}
////在pos前面删除
//void ListErase(LN* pos)
//{
//	assert(pos);
//	LN* Next = pos->next;
//	LN* Prev = pos->prev;
//	Prev->next = Next;
//	Next->prev = Prev;
//	free(pos);
//}
//void ListDestroy(LN* phead)
//{
//	assert(phead);
//	LN* cur = phead->next;
//	while (cur != phead)
//	{
//		LN*next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(phead);
//	phead = NULL;
//}
//void text1()
//{
//	LN* pl = ListNodeInit();
//	ListPushBack(pl, 1);
//	ListPushBack(pl, 2);
//	ListPushBack(pl, 3);
//	ListPushBack(pl, 4);
//	ListPushBack(pl, 5);
//	ListPopBack(pl);
//	ListPushFront(pl, 10);
//	ListPopFront(pl);
//	ListPrint(pl);
//}
//
//void text2()
//{
//	LN* pl = ListNodeInit();
//	ListPushBack(pl, 1);
//	ListPushBack(pl, 2);
//	ListPushBack(pl, 3);
//	ListPushBack(pl, 4);
//
//	ListInsert(FindList(pl, 3), 10);
//	ListPrint(pl);
//	ListErase(FindList(pl, 2));
//	ListDestroy(pl);
//	
//
//}
//int main()
//{
//	//text1();
//	text2();
//	return 0;
//}






//栈
//typedef int STDataType;
//typedef struct stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
////初始化
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->top = 0;//也可以为-1
//	ps->capacity = 0;
//}
////插入
//void StackPush(ST* ps ,STDataType x)
//{
//	if (ps->capacity == ps->top)
//	{
//		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(ST) * newcapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = x;
//	ps->top++;
//}
////释放
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->capacity = ps->top = 0;
//}
////删除
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	ps->top--;
//}
////栈顶
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
////大小
//int StackSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
////判断是否为空
//bool StackEmtpy(ST* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//void text1()
//{
//	ST st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	printf("%d ", StackTop(&st));
//	StackPop(&st);
//	printf("%d ", StackTop(&st));
//	StackPop(&st);
//	StackPush(&st, 5);
//	StackPush(&st, 6);
//	while (!StackEmtpy(&st))
//	{
//		printf("%d ", StackTop(&st));
//		StackPop(&st);
//	}
//
//}
//int main()
//{
//	text1();
//	return 0;
//}





//队列
//typedef int QDateType;
//typedef struct QueueCode
//{
//	struct QueueCode* next;
//	QDateType val;
//}QNode;
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//}Queue;
////初始化
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->head = NULL;
//	pq->tail = NULL;
//}
////销毁
//void QueueDestroy(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->head;
//	while (cur != NULL)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//}
////插入
//void QueuePush(Queue* pq ,QDateType x)
//{
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (pq->head == NULL)
//	{
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//}
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head);
//	assert(!QueueEmpty(pq));
//	QNode* newhead = pq->head->next;
//	free(pq->head);
//	pq->head = newhead;
//	//如果被删完了tail变成野指针
//	//要制 空
//	if (pq->head == NULL)
//	{
//		pq->tail = NULL;
//	}
//}
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//	return pq->head == NULL;
//}
//QDateType QueueBack(Queue*pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	return pq->tail->val;
//}
//QDateType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->val;
//}
//int QueeuSize(Queue* pq)
//{
//	assert(pq);
//	int n = 0;
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		n++;
//		cur = cur->next;
//	}
//	return n;
//}
//void text1()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//
//	QueueDestroy(&q);
//}
//int main()
//{
//	text1();
//	return 0;
//}



//顺序串
//typedef struct SString
//{
//	char ch[256]={0};//存储串的一维数组
//	int len=0;//串的当前长度
//}SString;
////字符串比较是非为主串
//int index(SString MainString, SString Substring)
//{
//	int i = 0, j = 0;
//	while (i <= MainString.len && j <= Substring.len)
//	{
//		if (MainString.ch[i] == Substring.ch[j]) 
//		{ i++;j++; }
//		else
//		{
//			i = i - j + 2;j = 0;
//		}
//	}
//	if (j <= Substring.len)
//		return 1;
//	else
//		return 0;
//}
//void SStringPush(SString* p, char x)
//{
//	assert(p);
//	p->ch[p->len] = x;
//
//	p->len++;
//}
//void text1()
//{
//	SString sl;
//	
//	SStringPush(&sl, 'a');
//	SStringPush(&sl, 'b');
//	SStringPush(&sl, 'c');
//	SStringPush(&sl, 'd');
//	SStringPush(&sl, 'e');
//	int i = 0;
//	for (i = 0;i < sl.len;i++)
//	{
//		printf("%d ", sl.ch[i]);
//	}
//
//}
//int main()
//{
//	//text1();
//	return 0;
//}






//typedef struct BiTree
//{
//	char data;
//	struct BiTree* lchild;
//	struct BiTree* rchild;
//}BiTree,*BiNode;
//BiNode TreeCreate()
//{
//	BiNode T;
//	char a;
//	scanf("%c", &a);
//	if (a == '\0') return NULL;
//	else
//	{
//		T = (BiNode)malloc(sizeof(BiTree));
//		T->data = a;
//		T->lchild = TreeCreate();
//		T->rchild = TreeCreate();
//
//	}
//	return T;
//}
//int main()
//{
//	
//	return 0;
//}
#include<stack.h>
#include<stack.h>
//树的节点
typedef struct tree_node
{
	struct tree_node* left;
	struct tree_node* right;
	char key;
}tree_node;
//创建一个节点
tree_node* tree_create_node(char key);
//创建一颗二叉树
tree_node* tree_create();

//前序遍历 |递归式|（中->左->右）
void pre_order_traverse1(tree_node* node);
//前序遍历 |非递归式|（中->左->右）
void pre_order_traverse2(tree_node* node);

//中序遍历 |递归式|（左->中->右）
void in_order_traverse1(tree_node* node);
//中序遍历 |非递归式|（左->中->右）
void in_order_traverse2(tree_node* node);

//后序遍历 |递归式|（左->右->中）
void post_order_traveser1(tree_node* node);
//后序遍历 |非递归式|（左->右->中）(先按中->右->左的顺序入输出栈，再从输出栈输出）
void post_order_traveser2(tree_node* node);

//层次遍历
void level_traverse(tree_node* root);
//创建一个节点
tree_node* tree_create_node(char key)
{
	tree_node* node = (struct tree_node*)malloc(sizeof(struct tree_node));
	if (node == NULL)
		return NULL;
	node->key = key;
	node->left = NULL;
	node->right = NULL;

	return node;
}

//创建一颗二叉树
tree_node* tree_create()
{
	char str;
	tree_node* cur;

	scanf_s("%c", &str, 1);
	if (str == '#')
		cur = NULL;
	else
	{
		cur = tree_create_node(str);
		cur->left = tree_create();
		cur->right = tree_create();
	}
	return cur;
}

//前序遍历 |递归式|（中->左->右）
void pre_order_traverse1(tree_node* node)
{
	if (node != NULL)
	{
		printf("%c\t", node->key);
		pre_order_traverse1(node->left);
		pre_order_traverse1(node->right);
	}
}
//前序遍历 |非递归式|（中->左->右）
void pre_order_traverse2(tree_node* node)
{
	std::stack<tree_node*>stack;
	tree_node* cur = node;

	while (cur != NULL || !stack.empty())
	{
		if (cur != NULL)
		{
			printf("%c\t", cur->key);
			stack.push(cur);
			cur = cur->left;
		}
		else
		{
			cur = std::move(stack.top());
			stack.pop();
			cur = cur->right;
		}//end_if
	}//end_while
	return;
}


//中序遍历 |递归式|（左->中->右）
void in_order_traverse1(tree_node* node)
{
	if (node != NULL)
	{
		in_order_traverse1(node->left);
		printf("%c\t", node->key);
		in_order_traverse1(node->right);
	}
	return;
}

//中序遍历 |非递归式|（左->中->右）
void in_order_traverse2(tree_node* node)
{
	std::stack<tree_node*>stack;
	tree_node* cur = node;
	while (cur != NULL || !stack.empty())
	{
		if (cur != NULL)
		{
			stack.push(cur);
			cur = cur->left;
		}
		else
		{
			cur = std::move(stack.top());
			stack.pop();
			printf("%c\t", cur->key);
			cur = cur->right;
		}//end_if
	}//end_while
	return;
}

//后序遍历 |递归式|（左->右->中）
void post_order_traveser1(tree_node* node)
{
	if (node != NULL)
	{
		post_order_traveser1(node->left);
		post_order_traveser1(node->right);
		printf("%c\t", node->key);
	}
	return;
}

//后序遍历 |非递归式|（左->右->中）(先按中->右->左的顺序入输出栈，再从输出栈输出）
void post_order_traveser2(tree_node* node)
{
	std::stack<tree_node*>stack;
	std::stack<char>print;
	tree_node* cur = node;
	while (cur != NULL || !stack.empty())
	{
		if (cur != NULL)
		{
			print.push(cur->key);
			stack.push(cur);
			cur = cur->right;
		}
		else
		{
			cur = std::move(stack.top());
			stack.pop();
			cur = cur->left;
		}//end_if
	}//end_while

	while (!print.empty())
	{
		printf("%c\t", print.top());
		print.pop();
	}//end_while
}

//层次遍历
void level_traverse(tree_node* root)
{
	std::queue<tree_node*>queue;

	if (root != NULL)
		queue.push(root);

	while (!queue.empty())
	{
		tree_node* cur = queue.front();
		printf("%c\t", cur->key);
		queue.pop();

		if (cur->left != NULL)
			queue.push(cur->left);
		if (cur->right != NULL)
			queue.push(cur->right);
	}//end_while

	return;
}


int main()
{
	/* A-B-D-#-#-E-#-#-C-F-#-#-G-#-# */
	tree_node* tree = tree_create();

	printf("\n前序遍历1：");
	pre_order_traverse1(tree);

	printf("\n前序遍历2：");
	pre_order_traverse2(tree);

	printf("\n中序遍历1：");
	in_order_traverse1(tree);

	printf("\n中序遍历2：");
	in_order_traverse2(tree);

	printf("\n后序遍历1：");
	post_order_traveser1(tree);

	printf("\n后序遍历2：");
	post_order_traveser2(tree);

	printf("\n层次遍历：");
	level_traverse(tree);

	printf("\n");
	return 0;
}
