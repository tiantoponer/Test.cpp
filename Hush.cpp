#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define UNSUCCESS 0
#define OVERFLOW -1
#define OK 1
#define ERROR -1
#define MAXNUM 9999
typedef int Status;
typedef int KeyType;

typedef struct {
	KeyType key;
}RcdType;

typedef struct {
	RcdType* rcd;
	int size;
	int count;
	int* tag;
}HashTable;

int hashsize[] = { 11,31,61,127,251,503 };
int index = 0;

Status InitHaspTable(HashTable& H, int size) {
	int i;
	H.rcd = (RcdType*)malloc(sizeof(RcdType) * size);
	H.tag = (int*)malloc(sizeof(int) * size);
	if (NULL == H.rcd || NULL == H.tag)return OVERFLOW; 
	KeyType maxNum = MAXNUM;
	for (i = 0; i < size; i++) {
		H.tag[i] = 0;
		H.rcd[i].key = maxNum;
	}
	H.size = size;
	H.count = 0;
	return OK;
}

int Hash(KeyType key, int m) {
	return (3 * key) % m;
}

void collision(int& p, int m)
{
	p = (p + 1) % m;
}

Status SearchHssh(HashTable H, KeyType key, int& p, int& c) {
	p = Hash(key, H.size);
	int h = p;
	c = 0;
	while ((1 == H.tag[p] && H.rcd[p].key != key) || -1 == H.tag[p])
	{
		collision(p, H.size); c++;
	}
	if (1 == H.tag[p] && key == H.rcd[p].key)return SUCCESS;
	else return UNSUCCESS;
}

void printHash(HashTable H)
{
	int i;
	printf("ket: ");
	for (i = 0; i < H.size; i++)
		printf("%3d ", H.rcd[i].key);
	printf("\n\n");
}

Status InserytHash(HashTable& H, KeyType key);

Status recreataHash(HashTable& H)
{
	RcdType* orcd;
	int* otag, osize, i;
	orcd = H.rcd;
	otag = H.tag;
	osize = H.size;

	InitHaspTable(H, hashsize[index++]);
	for (i = 0; i < osize; i++)
	{
		if (i == otag[i])
		{
			InserytHash(H, orcd[i].key);
		}
	}
	return OK;
}

Status InserytHash(HashTable& H, KeyType key)
{
	int p, c;
	if (UNSUCCESS == SearchHssh(H, key, p, c)) {
		H.rcd[p].key = key;
		H.tag[p] = 1;
		H.count++;
		return SUCCESS;
	}
	else recreataHash(H);
	return UNSUCCESS;
}

Status DeleteHash(HashTable& H, KeyType key)
{
	int p, c;
	if (SUCCESS == SearchHssh(H, key, p, c))
	{
		H.tag[p] = -1;
		H.count--;
		return SUCCESS;
	}
	else return UNSUCCESS;
}
