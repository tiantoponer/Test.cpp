// text.10.31.c.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
#include<stdlib.h>
//int fblj(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fblj(n - 1) + fblj(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf_s("%d", &n);
//	num = fblj(n);
//	printf("%d", num);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//short为2字节，int为4个字节
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		*(p+i) = 0;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{                       //44为一个字节
//	int a = 0x11223344;//44332211
//	char* p = (char*)&a;//char*p只访问一个字节
//	*p = 0;
//	printf("%x\n", a);
//	return 0;
//}



//int i;//全局变量不初始化默认是0
//int main()
//{
//	i--;              //无符号数与有符号数比较大小，有符号数会转换成无符号数
//	if (i > sizeof(i))//sizeof()计算变量/类型所占内存的大小--是无符号数，-1转换成无符号数很大
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6  a=6
//	b = ++c, c++, ++a, a++;//c=8  a=8  b=7
//	b += a++ + c;   //a=9  b=7+8+8
//	printf("a=%d b=%d c=%d", a, b, c);
//	int k = 0;
//	k = 1, 2, 3, 4;
//	printf("%d", k);
//	return 0;
//}


//计算数字二进制（补码）一的个数
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_bit_one2(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one3(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);//13 ----1101    a=12    1100     a=8    1000
//		count++;        //12-----1100    a=11    1011     a=7    0111
//	}               //按位与-----1100    a=8     1000            0000
//	return count; 
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//如果a为负数 a=-1
//	//   源码    1000000000000000000000000001
//	//   反码    1111111111111111111111111110
//	//   补码    1111111111111111111111111111
//	int count = count_bit_one(a);
//	int count2 = count_bit_one2(a);
//	int count3 = count_bit_one3(a);
//	printf("count=%d\n", count);
//	printf("count2=%d\n", count2);
//	printf("count3=%d", count3);
//	int num = 10;
//	int i = 0;
//	i = (num >> 0) & 1;
//	printf("%d", i);
//	//system("pause");//system()是库函数---pause是停止
//	return 0;
//}


//求两个数二进制不同的数
//int count_bit_diff(int n, int m)
//{
//	int count = 0;
//	int tmp = n ^ m;///        ---1111 15
//	while (tmp)          //    ---1001 9
//	{                  //       --0110 6
//		tmp = tmp & (tmp - 1); // 0110   0101   0100
//		count++;       //         0100   0011   0000
// 	}
//	return count;
//}
//int main()
//{
//	int n, m = 0;
//	scanf("%d%d", &n, &m);
//	int count = count_bit_diff(n, m);
//	printf("count=%d", count);
//	return 0;
//}

//打印一个数的二进制数
//1 << i 是将1左移i位，即第i位为1，其余位为0；
//例如1 << 2 则0001->0100
//n & (1 << i)是将左移i位的1与n进行按位与，即为保留n的第i位，其余位置零
//r果n第i位为0，则n & (1 << i)的值为0
//否则不为0
//常用if(n & (1 << i) == 0)用于判断n的第i位是否为0
//
//void print(int n)
//{
//	int i = 0;
//	for (i = 31;i >= 0;i--)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//
//}
//void printjo(int n)
//{
//
//	int i = 0;
//	for (i = 30;i >= 0;i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}printf("\n");
//	for (i = 31;i >= 0;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	printjo(n);
//	return 0;
//}
//  


//通过数字地址打印数组
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



//九九乘法表
//void printf_board(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf_board(n);
//	return 0;
//}




//将数组的元素交换位置
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void cheange_arr(char arr[])
//{
//	int left = 0;
//	int right = 0;
//	//right = strlen(arr)-1;
//	right = my_strlen(arr)-1;
//	while (right > left)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	cheange_arr(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//通过递归来交换数组元素的位置
//void change_arr_tow(char arr[])
//{
//	int tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	len--;
//	if ((len-1) >= 2)
//		change_arr_tow(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	change_arr_tow(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//输入一个数求数的每个位上的和
//int digitsum(unsigned int num)
//{        
//	if (num % 10 != 0)
//	{
//		return digitsum(num / 10) +num%10; //可以靠返回值来进行递归的相加
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = digitsum(num);
//	printf("red=%d", ret);
//
//	return 0;
//}




//计算n的k次方
//int Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return Pow(n, k - 1) * n;
//	}
//}
//double POW(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (POW(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//	    return POW(n, k - 1) * n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	if (k > 0)
//	{
//		int ret = pow(n, k);
//		int ret1 = Pow(n, k);
//		printf("ret=%d\n", ret);
//		printf("ret1=%d", ret1);
//	}
//	else
//	{
//		double ret2 = POW(n, k);
//		printf("%lf", ret2);
//	}
//	return 0;
////}






//结构体
//stu -- 结构体标题    struct stu --- 结构体类型
//struct stu
//{
//	char name[20];
//	short age;      //在内存中没占空间
//	char tele[12];  //定义一个结构体类型  
//	char sex[5];
//}s1,s2, s3;//s1,s2,s3都是全局变量

//typedef struct stu //typedef是给结构体重新起名字
//{
//	char name[20];
//	short age;      //在内存中没占空间
//	char tele[12];  //定义一个结构体类型  
//	char sex[5];
//}stu;   //stu是类型
//int main()
//{                  //s是局部变量 
//	struct stu s1;//创建结构体变量
//	stu s2;
//	return 0;
//}




//struct s
//{
//	char arr1[20];
//	int a;
//	double c;
//
//};
//struct T
//{
//	char ch[20];
//	struct s S;
//	int num;
//	char *p;
//};
//int main()
//{
//	char arr[] = "helo bit";
//	struct T t = { "helo world",{"arr123",12,3.14},156,arr};
//	printf("%s\n", t.ch);
//	printf("%s", t.p);
//	return 0;
//}




//结构体引用--两种方法
//结构体传参要传结构体地址
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//void print1(stu tmp)
//{
//	printf("name  %s\n", tmp.name);
//	printf("age   %d\n", tmp.age);
//	printf("tele  %s\n", tmp.tele);
//	printf("sex   %s\n", tmp.sex);
//}
//void print2(stu *p)//print2比print1要好，因为1的tmp是形参会临时拷贝一份S --占的空间内存大
//{                  //print2则是传地址，不会拷贝一份S
//	printf("name  %s\n", p->name);
//	printf("age   %d\n", p->age);
//	printf("tele  %s\n", p->tele);
//	printf("sex   %s\n", p->sex);
//}
//int main()
//{
//	struct stu S = { "张三",19,"15625131213","男" };
//	print1(S);
//	printf("\n");
//	print2(&S);
//	return 0;
//}




//Debus 和 Release
// F5--启动调试--经常用与跳到下一个断点处
//F9--切换断点--代码执行到断点处停下来
//F10-- 逐过程走
//F11-- 逐语句走，可以进入到函数内部里
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100;i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0;i <= 12;i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int ret = 1;
//		for (j = 1;j <= i;j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", &i);
//	printf("%p", arr);
//	/*for (i = 0;i <= 12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	return 0;
//}



//自己创建函数来将一字符串拷贝到另一个字符串里
//void my_strcpy(char* dist, char* src)
//{
//	while (*src != '\0')
//	{
//		*dist = *src;
//		dist++;
//		src++;
//	}
//	*dist = *src;
//}
//void my_strcpy1(char* dist, char* src)
//{
//	while (*dist++ = *src++)
//	{
//		;
//	}
//}
//void my_strcpy2(char* dist, char* src)
//{
//	if (dist != NULL && src != NULL)
//	{
//		while (*dist++ = *src++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy3(char* dist, char* src)
//{
//	assert(dist != NULL);
//	assert(src != NULL);//断言---用来找出错误
//	while (*dist++ = *src++)
//	{
//		;
//	}
//}                      //const--用来锁定数值不可以更改
//void my_strcpy4(char* dist,const char* src)
//{
//	assert(dist != NULL);
//	assert(src != NULL);//断言---用来找出错误
//	while (*dist++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy5(char* dist, const char* src)
//{
//	char* ret = dist;
//	assert(dist != NULL);
//	assert(src != NULL);//断言---用来找出错误
//	while (*dist++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	//my_strcpy(arr1, arr2);
//	//my_strcpy1(arr1, arr2);
//	//my_strcpy2(arr1, NULL);
//	//my_strcpy3(arr1, NULL);
//	//my_strcpy4(arr1, arr2);
//	my_strcpy5(arr1, arr2);
//	printf("%s\n", my_strcpy5(arr1, arr2));
//	printf("%s", arr1);
//	return 0;
//}





//const的用法
//int main()
//{
//     int num = 10;
//	int n = 100;
//	const int* p = &num;//const放在指针*的左边不能通过*p改值---进而不能改num的值
//	//int*const  p = &num;//const放在指针*的右边不能改p的值---可以改num的值
//	p = 0;
//	//p = &n;err
//	printf("%d\n", num);
//	return 0;
//} 


//strlen自创的函数
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);//保证指针的有效性
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//2022.11.6---T1faker没有赢的英雄联盟全球总决赛的冠军，我的青春正式结束了，明年我就要去参军了。
//原码--反码--补码----都是整形
// 无符号数--原，反，补相同
// 有符号数--正数--原，反，补相同
// 有符号数--负数--原码的第一个数字是1--1表示负号   --0表示正号
//                 反码--符号位不变，其他位按位取反
//                 补码--反码加1
// 如-8
// 100000000000000000000000000000001000
// 111111111111111111111111111111110111
// 111111111111111111111111111111111000
//



//判断数字在内存的存储方式是小端还是大端
//int main()
//{
//	int a = 1;
//	char* p =(char*)& a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//}
//用函数的方法解决
//i/*nt check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0*/;
	//第二种写法
	// int a = 1;
	//char* p = (char*)&a;
	//return *p;
	//返回1--小端
	//返回0--大端
	//第三种写法
	// int a = 1;
	//return *(char*)&a;
//}
//指针类型的意义
//1.指针类型决定了指针解引用操作字符可以访问几个字节，int*p *p--访问4个字节 char*p *p--访问1个字节
//2.指针类型决定了指针+1 -1的大小-- int*p p+1--跳过4个字节  char*p p+1--跳过1个字节
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端");
//	if(ret==0)
//		printf("大端");
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	//11111111111111111111111111111111
//	//10000000000000000000000001000000  原码
//	//11111111111111111111111110111111  反码
//	//11111111111111111111111111000000  补码
//	//char a                   1000000  原码
//	// %u打印的是无符号的十进制整数
//	//           原，反，补，相同
//	//char a 整型提升
//	//11111111111111111111111111000000
//	// char 有符号数的范围是-128到127
//	// char 无符号数的范围是0到255                        
//	//                         
//	printf("%u", a);
//	return 0;
////}
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//		sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };//char的范围是-128到127   --超过的会转换成-128到127
//	int i = 0;           //-129变成127
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//找到'\0'；停止
//	return 0;                 //\0的ASMII是0
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0;i <= 255;i++)
//	{
//		printf("%d hello world\n",i);
//		Sleep(100);
//	}
//	return 0;
//}
//unsigned 特别容易导致死循环
//int main()
//{
//	int n = 9;
//	float* p = (float*)&n;
//	printf("n的值是%d\n", n);
//	printf("*p的值是%f\n", *p);
//	*p = 9.0;
//	printf("n的值是%d\n", n);
//	printf("*p的值是%f\n", *p);
//	return 0;
//}




//指针的进阶
//void text(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	text(arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	printf("%s\n", p1);
//	printf("%c\n", *p1);
//	return 0;
//}
//int main()
//{//数组名就是首元素地址
//	 char arr1[] = "abcdef";//arr1和arr2可以被修改，因此arr1和arr2存储的地址不同
//	 char arr2[] = "abcdef";//
//	 const char *arr3 = "abcdef";//arr3和arr4是常量字符串不可以被修改--为了节省空间
//	 const char *arr4 = "abcdef";//它们存储的地址是一样的
//	 if (arr1 == arr2)
//	 {
//		 printf("hehe\n");
//	 }
//	 else
//		 printf("haha\n");
//	 if (arr3 == arr4)
//	 {
//		 printf("1\n");
//	 }
//	 else
//		 printf("2\n");
//	 printf("%d\n", arr1);
//	 printf("%d\n", arr2);
//	 printf("%d\n", arr3);
//	 printf("%d\n", arr4);
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符串数组
//	int* arrp[4] = { 0 };//指针数组（存放指针的）
//	char* chp[5] = { 0 };//指针数组（存放指针的）
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ", arr[i]);
//		printf(" %d", *(arr[i]));
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i]) + j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//arr--数组首元素的地址
//	//&arr[0]--数组首元素的地址
//	//&arr--数组的地址 ---存放在数组指针里
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//上面的p就是数组指针
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (* pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int(*pa)[10] = &arr;
//	int *p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", *(*pa+i));//*pa==arr--首元素地址
//	//}
//	/*for (i = 0;i < 10;i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < x;i++)
//	{
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//参数是指针
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < x;i++)
//	{
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ", *((*p + i) + j));//等于下面的
//			printf("%d ", ( * (p + i))[j]);//四个全部等价的
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr是数组首元素地址
//	//print2(arr, 3, 5);//二维数组的首元素地址是每列的首元素地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}
//int arr[5] --arr是一个5个元素的整形数组
//int *parr1[10] --parr1是一个数组，数组有10个元素，每个元素的类型是int*  parr1是指针数组
//int (*parr2)[10] --parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int  parr2是数组指针 
//int (*parr3[10])[5] --parr3是一个数组，该数组有10个元素，每个元素是一个数组指针
                        //该数组指针指向的数组有5个元素，每个元素是int 

//void text1(int* p)
//{
//	printf("%d\n", *(p));
//}
//void text2(char* p)
//{
//	printf("%x\n", p);
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	text1(&a);
//	text1(pa);
//	char ch = 'w';
//	char* pch = &ch;
//	text2(&ch);
//	text2(pch);
//	return 0;
//}
//void text(int** p)
//{
//	printf("%d\n", **p);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pn = &p;
//	text(pn);
//	text(&p);
//	int* arr[10] = { 0 };
//	text(arr);
//	return 0;
//}
//函数指针
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//在函数里&函数==函数 
//	//&add==add
//	//函数指针是存放函数的地址
//	int a = 10;
//	int b = 20;
//	printf("%d\n", add(a, b));
//	printf("%p\n", add);
//	printf("%p\n", &add);
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa);
//	return 0;
//}
//(*(viod(*)())0)()
// signal是一个函数声明
// signal函数的参数有2个，第一个int,第二个是函数指针，该函数指针指向的函数的参数是int，返回类型 是void
// signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void 
//void (*signal(int,void(*)(int)))(int )
//typedef unsigned int  unit;
//typedef void(*fun_s)(int);
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int)=add;
//	printf("%d\n", (p)(2, 3));//指针数组可以不用解引用就可以使用函数
//	printf("%d\n", (*p)(2, 3));//指针要解引用
//	printf("%d\n", p(2, 3));
//	printf("%d\n", add(2, 3));
//	//err  printf("%d\n", *p(2, 3));*的优先级比较低没有（）高；p(2,3)先产生结果在解引用是不行的
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{    //函数指针数组
//	int(* arr[4])(int, int) = {add,sub,mul,Div};
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", arr[i](2, 3));
//	}
//	return 0;
//}
//char* my_strcpy(char* dist, char* src)
//{
//	while (src != '\0')
//	{
//		dist = src;
//		dist++;
//		src++;
//	}
//	return dist;
//}
//int main()
//{
//	char arr1[] ="#############";
//	char arr2[] = "bit";
//	printf("%s\n", *(my_strcpy(arr1, arr2)));
//	char* (*pstr)(char*, char*) = my_strcpy;
//	char* (*pstr1[1])(char*, char*) = { my_strcpy };
//	printf("%s\n", pstr(arr1,arr2));
//	printf("%s\n", (*pstr1)(arr1,arr2));
//}
//函数指针数组
//计算器
//转移表
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void mune()
//{
//	printf("#####################\n");
//	printf("### 1.add  2.sub   ##\n");
//	printf("### 3.mul  4.div   ##\n");
//	printf("### 5.xor  0.exit  ##\n");
//	printf("#####################\n");
//}
////int main()
////{
////	int x = 0;int y = 0;
////	int input = 0;
////	do
////	{
////		mune();
////		scanf("%d", &input);
////		int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
////		if (input >= 1 && input <= 5)
////		{
////			printf("请输入两个操作数\n");
////			scanf("%d%d", &x, &y);
////			int ret = (*pfarr[input])(x, y);
////			printf("%d\n", ret);
////		}
////		 else if (input == 0)
////			printf("退出\n");
////		else if(input>5 || input<0)
////			printf("选择错误\n");
////	} while (input);
////	return 0;
////}
////回调函数
//void fun(int(* pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		mune();
//	    scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			fun(Add);
//			break;
//		case 2:
//			fun(Sub);
//			break;
//		case 3:
//			fun(Mul);
//			break;
//		case 4:
//			fun(Div);
//			break;
//		case 5:
//			fun(Xor);
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*parr[10])(int, int) = { add };
//	//函数指针数组指针
//	//pparr是一个数组指针，指向的每个元素是一个数组指针int(*)(int,int)
//	int(*(*pparr)[10])(int, int) = &parr;
//	return 0;
//}
//回调函数
//void print(int str)
//{
//	printf("hello:%d\n",str);
//}
//void text(void(*Pa)(int))
//{
//	printf("hehe\n");
//	Pa(123);
//}
//int main()
//{
//	text(print);
//	return 0;
//}
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j ] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void text1()
//{
//	int arr[10] = { 9,8,7,6,5,4,1,2,3,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//Bubble_sort(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int com_float(const void* e1, const void* e2)
//{
//	return ((int)( * (float*)e1 - *(float*)e2));
//}
//void text2()
//{
//	float f[10] = { 1.1,2.2,3.3,9.9,8.8,7.7,6.6,5.5,4.4,0.1 };
//	int i = 0;
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), com_float);
//	//Bubble_sort(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void text3()
//{
//	struct stu s[3] = { {"zhangs",20},{"tianweijian",19}, {"kasia",24} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
//}
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void text4()
//{
//	struct stu s[3] = { {"zhangs",20},{"tianweijian",19}, {"kasia",24} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//}
//void swap(char* buf1, char* buf2, int wid)
//{
//	int i = 0;
//	for (i - 0;i < wid;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void Bubble_sort(const void* base,int sz,int wid,int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (cmp((char*)base + j * wid, (char*)base + (j + 1) * wid) > 0)
//			{
//				swap((char*)base + j * wid, (char*)base + (j + 1) * wid, wid);
//			}
//		}
//	}
//}
//void text5()
//{
//	int arr[10] = { 9,8,7,4,5,6,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	//text1();
//	//printf("\n");
//	//text2();
//	//text3();
//	//text4();
//	text5();
//	return 0;
//}
////int main()
////{
////	int a = 10;
////	void* p = &a;
////	char ch = 'w';
////	p = &ch;
////	//void*可以接任意类型的指针的地址
////	//p=1;  --err 但不能进行解引用操作
////	//p++； --err 不能进行加减整数的操作
////	return 0;
////}
//int main()
//{
////	//整形数组
////	//a数组名代表首元素的地址，但有两个例外
////	//1.sizeof(a)  --代表整个数组的大小--单位是字节
////	//2.&a（数组名）  --数组名代表整个数组
////	int a[] = { 1,2,3,4 };
////	printf("%d\n", sizeof(a));// 16 sizeof(a)计算的a的大小--单位字节
////	printf("%d\n", sizeof(a+0));//4\8 第一个元素的地址
////	printf("%d\n", sizeof(*a));// 4 第一个元素的大小（*a）就是首元素地址解引用--第一个元素的大小(int类型)
////	printf("%d\n", sizeof(a+1));//4/8 第二个元素的地址
////	printf("%d\n", sizeof(a[1]));//4 第二个元素(int 类型)
////	printf("%d\n", sizeof(&a));// 4/8 &取出来的是地址，地址都是4/8个字节
////	printf("%d\n", sizeof(*&a));//16 首个数组
////	printf("%d\n", sizeof(&a+1));// 4/8 下一个类型的地址，a后面的地址
////	printf("%d\n", sizeof(&a[0]));//4/8 首元素的地址
////	printf("%d\n", sizeof(&a[0]+1));//4/8 第二个元素的地址
//
//
//
//
////字符数组
//	// char arr[] = { 'a','b','c','d','e','f' };
//	////printf("%d\n",sizeof(arr));//6 ---sizeof(arr)计算数组的大小
//	////printf("%d\n", sizeof(arr+0));//8
//	////printf("%d\n", sizeof(*arr));//1
//	////printf("%d\n", sizeof(arr[1]));//1
//	////printf("%d\n", sizeof(&arr));//8
//	////printf("%d\n", sizeof(&arr+1));//8
//	////printf("%d\n", sizeof(&arr[0]+1));//8
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr+0));
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&*arr));
//	//printf("%d\n", strlen(&*arr+1));
//	//printf("%d\n", strlen(&arr[1] + 1));
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a[0]+1);
//	printf("%p\n", a + 1);
//
//
//	printf("%d\n", sizeof(a));//3*4*4 ---sizeof(数组名)--计算数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4----计算第一行，第一列的元素的大小
//	printf("%d\n", sizeof(a[0]));//16---计算的第一行的大小，a[0]相当于第一行作为一维数组的第一个元素
//	printf("%d\n", sizeof(a[0]+1));//4 a[0]放在表达式是a[0]代表首元素的地址--a[0]+1相当于a[0][1]
//	printf("%d\n", sizeof(*(a[0]+1)));//4
//	//               a是二维数组的数组名，没有sizeof(数组名）也没有&（数组名），a是首元素的地址，（第一行的地址）
//	printf("%d\n", sizeof(a+1));//4--a+1是地址  a+1是第二行的地址| 二维数组的首元素是第一行，把二维数组看成一维数组
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4 --第二行的地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16
//	printf("%d\n", sizeof(*a));//16 --a是第一行的地址
//	printf("%d\n", sizeof(a[3]));//
//
//
//	return 0;
//}

//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//3. 除此之外所有的数组名都表示首元素的地址
//


//指针笔试题
// 第一题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}

//第二题
//struct test
//{
//	int num;//8
//	char* pcname;//1
//	short sdate;//2
//	char cha[2];//2
//	short sba[4];//8
//}*p;
////假设p的值为0x10000,如下表达式的值分别是都是？
//// 结构体 test 的大小是20个字节--在32位
////
//int main()
//{
//	p = (struct test*)0x1000000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//第三题import
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//(&a+1)是a后面的地址，ptr1[-1]=*(ptr1+(-1))=*(ptr1-1)
//	int* ptr2 = (int*)((int)a + 1);//int类型的地址是4个字节,+1是跳过一个字节，
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//                           a的地址是0x010 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//                                                    2 00 00 00
//	//%x---打印十六进制的整数
//	return 0;
//}


//第四题
//

//第五题
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//
//第六题
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,6,7,8,9 };
//	int* p = arr;
//	//*(p + 2) == p[2] == arr[2] == (arr + 2);
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//aa二维数组，数组名代表第一行的地址，+1代表第二行的地址
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = *(aa + 1);
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//第七题
//int main()
//{
//	char a[] = {'work','at','ali'};
//	char* p = a;
//	p++;
//	printf("%s\n", *p);
//	return 0;
//}


//交换字符串的位置
//void charge(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (right > left)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[256];
//	//scanf("%s", &arr);
//	gets_s(arr);
//	charge(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i <b;i++)
//	{
//	    sum = sum + a * pow(10, i);
//		ret = sum + ret;
//	}
//	printf("%d", ret);
//	return 0;
//}


//水仙花
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int ret = i;
//		int n = 1;
//		int sum = 0;
//		while (ret/=10)
//		{
//			n++;
//		}
//		int tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp%10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}




//打印*
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n-i-1;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2*(n-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1元1瓶，2个空瓶可以换1瓶
//int main()
//{
//	int moneny = 0;
//	int sum = 0;
//	int empty = 0;
//	scanf("%d", &moneny);
//	sum = moneny;
//	empty = moneny;
//	//int sum = moneny;
//	//int empty = moneny;
//	while (empty >= 2)
//	{
//		sum += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}0x0000004EFA35F7D8
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptarr = (int*)(&arr + 1);
//	printf("%d %d", *(arr + 1), *(ptarr - 1));
//	return 0;
//}

//旋转字符串
//void left_move1(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0;i < k;i++)
//	{
//		int len = strlen(arr);
//		char tmp = *(arr);
//		int j = 0;
//		for (j = 0;j <len-1 ;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//void reverse(char* left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<=right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move2(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr, arr+len-1);
//}
//int is_left_move(char* arr, char* arr2)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < len;i++)
//	{
//		left_move2(arr, 1);
//		if (arr == arr2)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[] = "bcdefa";
//	int ret = is_left_move(arr, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	//left_move1(arr, 2);
//	//left_move2(arr, 3);
//	//printf("%s", arr);
//	return 0;
//}
// 
// 
// 
//int is_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "defabc";
//	int ret= is_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//

//杨氏矩阵
//int found(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col;
//	while (x <= 2 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int found1(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py-1;
//	while (x <= 2 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 1;
//	int x = 3;
//	int y = 3;
//	//int ret = found(arr, k, 3, 3);
//	int ret = found1(arr, k, &x, &y);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//	printf("下标是：[%d][%d]", x, y);
//	return 0;
//}

//my_strcop
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "ab";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//	///*if (*str1 > *str2)
//	//{
//	//	return 1;
//	//}
//	//else if (*str1 < *str2)
//	//{
//	//	return -1;
//	//}*/
//	
//}
//int main()
//{
//	char arr1[] = "abcq";
//	char arr2[] = "abcd";
//	int ret = strcmp(arr1, arr2);
//	int ret1 = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}
//char* my_strncpy(char* str1, char* str2, int k)
//{
//	char* ret = str1;
//	int i = 0;
//	for (i = 0;i < k;i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdeaaaaa";
//	char arr2[] = "hello bit";
//	my_strncpy(arr1, arr2, 5);
//	//strncpy(arr1, arr2, 5);
//	return 0;
//}
//char* my_strncat( char* str1, char* str2, int k)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++)
//	{
//		;
//	}
//		while (*str1++ = *str2++)
//		{
//			;
//		}
//	return ret;
//
//}
//int main()
//{
//	char arr1[30] = "abcdef\0***************";
//	char arr2[] = "hello bit";
//	my_strncat(arr1, arr2, 12);
//	//strncat(arr1, arr2, 12);
//	return 0;
//}
//int my_strncmp(const char* str1,const char* str2, int k)
//{
//	assert(str1 && str2);
//	while (k--)
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		str1++;
//		str2++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[] = "abcqwe";
//	int ret= strncmp(arr1, arr2,11);
//	//int ret= my_strncmp(arr1, arr2, 11);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr
//const char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//	{
//		return str2;
//	}
//	const char* cur = str1;
//	while (*cur!='\0')
//	{
//		const char* p1 = cur;
//		const char* p2 = str2;
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cur;
//		}
//		if (*p1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//}
//int main()
//{
//	const char* p1 = "abbbcdde";
//	const char* p2 = "bbcp";
//	//const char* tmp = strstr(p, p2);
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok
//int main()
//{
//	char arr[] = "twj@gool.com";
//	const char* p = "@.";
//	char buff[1024] = { 0 };
//	char* ret=NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	const FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("file onpen success\n");
//	}
//	return 0;
//}
#include<ctype.h>
//int main()
//{
//	//char arr ='a';
//	////int ret = islower(arr);
//	//int ret =is
//	//printf("%d\n", ret);
//	/*char ch = tolower('Q');
//	putchar(ch);
//	printf("\n");
//	char ch1 = toupper('q');
//	putchar(ch1);*/
//	char arr[] = "I AM A Hero";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//struct S
//{
//	char nane[20];
//	int age;
//};
//void* my_memcpy( void* dest,const void* scr,unsigned int num)
//{
//	char* tmp1 = (char*)dest;
//	
//	while (num)
//	{
//		*(char*)dest = *(char*)scr;
//		++(char*)dest;
//		++(char* )scr;
//	}
//	return tmp1;
//}
//int main()
//{
//
//	struct S arr3[] = {{"张三",20}, {"李四",30}};
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr2));
//	return 0;
// }
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3, };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n",ret);
//	return 0;
//}
//


//结构体内存对齐
//vs 
//所有类型与第一个类型的起始地址对齐
// 对齐的地址倍数是其类型所占字节数
// 如int的对齐数是4
// vs里最大对齐数是8个字节
// 嵌套结构体的按其结构体的最大对齐数对齐 
//
//struct s1
//{
//	char a;
//	int b;
//	char c;
//};
//struct s2
//{
//	char a;
//	char c;
//	int b;
//};
//struct s3
//{
//	int a;
//	char b;
//	int f;
//	char c;
//
//};
//int main()
//{
//	struct s1 a1 = { 0 };
//	struct s2 a2 = { 0 };
//	struct s3 a3 = { 0 };
//
//	printf("%d\n", sizeof(a1));
//	printf("%d\n", sizeof(a2));
//	printf("%d\n", sizeof(a3));
//
//
//	return 0;
//}

//设置对齐数
//#pragma pack(4)
//struct s
//{
//	char a;
//	double b;
//};
//#pragma pack()
//#pragma pack(1)
//struct s
//{
//	char a;
//	double b;
//};
//#pragma pack()
//int main()
//{
//	struct s a={'a',1.0};
//	printf("%d\n", sizeof(a));
//	return 0;
//}

//offsetof()
// 不是函数而是宏
//计算结构体中的变量相当于起始偏移量的大小
#include<stddef.h>
//struct s
//{
//	char a;
//	int b;
//	double c;
//};
//int main()
//{
//	printf("%d\n",(int)offsetof(struct s, a));
//	printf("%d\n", (int)offsetof(struct s, b));
//	printf("%d\n", (int) offsetof(struct s, c));
//
//	return 0;
//}
//struct S
//{
//	char a;
//	int b;
//	double c;
//};
////void Init(struct S tmp)
////{
////	tmp.a= 'w';
////	tmp.b = 100;           这种是不行的
////	tmp.c = 3.1415926;
////}
////
////传值 print1  要创建临时结构体 所占空间更大 栈的压榨过大 导致性能下降
//void Init(struct S* tmp)
//{
//	tmp->a = 'w';
//	tmp->b = 100;
//	tmp->c = 3.1415926;
//}
//void print1(struct S tmp)
//{
//	printf("%c %d %lf", tmp.a, tmp.b, tmp.c);
//
//}
////传址 print2更好 传地址只是4个字节
////       可以加const来不该变值
//void print2(const struct S* tmp)
//{
//	printf("%c %d %lf", tmp->a, tmp->b, tmp->c);
//
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//&s 可以修改s的值 
//	print1(s);//传s不能修改s的值   --tmp是s的一份临时拷贝
//	print2(&s);   //&s  ---用法是->    
//	return 0;
//}

//位段----      网页的开发
//位是二进制位
//位段的内存空间开辟是  按1个字节或   4个字节  的空间开辟的
//位段的可移植性低
// 位段的问题
// int类型的不确定  有的是unsigned int 
// 位段数的位最大数不确定 --int 32 --有的 int 16 --16位机器
// 位段是从左向右还是从右向左不确定
// 位段的没有利用的剩余位是丢弃还是使用不确定
// 
//struct s
//{
//	int a : 2;//2是两个比特位 --两个二进制位--只表示 0 1 2 3 
//	int b : 5; // 8个比特位==1个字节
//	int c : 10;
//	int d : 30;
//};
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
////一次开辟 1个字节   从右向左开辟  不够就重新开辟新空间  
//int main()
//{
//	struct S s={0};
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//枚举---  一一列举
//enum sex    //可能取的值   只能取枚举常量的值
//{
//	MALE,//0
//	FAMALE,//1    //枚举常量的值默认初始值
//	SECRET //2
//};
//enum color
//{
//	RED =2,
//	BLUED=4,     //赋初始值 --后面不可以修改 
//	GREEN=8
//};
//int main()
//{
//	enum sex s = MALE;
//	printf("%d %d %d\n", MALE, FAMALE, SECRET);
//	printf("%d %d %d\n", RED, BLUED, GREEN);
//	return 0;
//}


//联合体--共用体
//用a的时候不能用c,  用c是不能用a;
//union un
//{
//	char a;
//	int c;
//};
//int main()
//{
//	union un u = { 0 };
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}
//int check_sym()
//{
//  /*int k=1;
//	char* pa = (char*)&k;
//	if (*pa == 1)
//	{
//		return 1;
//	}
//	else
//		return 0;*/
//	union un
//	{
//		char a[];
//		int i;
//	}u;
//	u.i = 1;
//	return u.a;
//}
//int main()
//{
//	
//	int ret = check_sym();
//	if ( ret== 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//union un
//{
//	int a;
//	//         联合体的大小是最大对齐数的倍数
//	char b[5];
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//动态内存

//1 创建变量
// int a =10;  局部变量 -- 栈区
// int g_a =10; 全局变量 -- 静态区
// 
//
#include<errno.h>
//int main()
//{                       //不要开辟0个字节
//	int* p =(int*) malloc(10 * 4);//malloc 要检查是否成功开辟
//	if (p == NULL)     //malloc 的类型是void* 
//	{                        
//		//打印错误原因的一个方式  
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("正常使用空间\n");
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//当动态内存不使用
//	//可以使用free()
//	//free(NULL); 可以但什么都没干
//	free(p);//mallo开辟后要free
//	p = NULL;//
//	return 0;
//}
//
//int main()
//{
//	//calloc 会把值初始化为0
//	 // void* calloc(,)
//	int* p = (int*)calloc(10, sizeof(int));
//	//要检查动态内存开辟是否成功
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}
//	//动态空间不想用
//	//要使用free（）函数 -- 释放
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc()函数可以调整内存空间的大小
// 如果使用的后面空间足够大，就会返回原来的地址
// 如果不够大，就会返回一个新的地址
// 前面的空间不删除了，
// 而是将空间存储的数据拷贝的新的地方去
// 可以让 旧的地址=新的地址 --来使用相同名字的指针
// 用完后要用free()函数释放
// 
//
//int main()
//{
//	 int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			*(p+i) = i;
//		}
//	}
//	 int* p1 =(int*) realloc(p,80);
//	 p = p1;
//
//	int j = 0;
//	for (j = 10;j < 20;j++)
//	{
//		*(p+j) = j;
//	}
//	for (j = 0;j < 20;j++)
//	{
//		printf("%d ", *(p + j));
//	}
//	return 0;


//不要对空指针解引用
//如果malloc()没有创建成功就是非法操作
//所有要判断p是否为空指针
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;//err
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//动态内存不要越界访问 ---有很大的问题
//int main()
//{
//	int* p = (int*)malloc(50);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 100;i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}





//不要对非动态内存开辟的空间所有free()
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}



//不要使用free（）释放部分动态内存开辟的空间
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*p++ = i;//p指向的是p的在后面的地址
//	}
//	free(p);
//	//free(p-10) right
//	p = NULL;
//	return 0;
//}


//不要对同一块动态内存多次使用free释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	// 可以用 避免  p = NULL;
//	//........//
//	free(p);
//	return 0;
//}


//对动态内存忘记释放（内存泄露）
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//		int* p1 =(int*) realloc(p, 80);
//		if (p1 != NULL)
//		{
//			printf("%s\n", strerror(errno));
//		}
//		else
//			p = p1;*/
//
//	//上面等价于下面的
//	int* p = (int*)realloc(NULL, 40);
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	return  p = (char*)malloc(100);
//}
//void GetMemory1(char** p)
//{
//	* p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	//str= GetMemory(&( * str));
//	GetMemory1(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//char* GetMemory()
//{
//	char p[] = "hallo world";//局部变量 是放在栈空间上的
//	return p;//返回栈空间的地址是有问题的
//	         //函数使用完后--栈空间的内存就会销毁
//}
//void Test()
//{
//	char* str = NULL;
//	str =(char*) GetMemory;
//	printf(str);//  打印的是随机值
// }
//int main()
//{
//	Test();
//	return 0;
//}
//int* text()
//{
//	//可以加static来改变局部变量的生命周期
//	static int a = 0;//放1在静态区
//	return &a;
//}
//int main()
//{
//	int* p = NULL;
//	p= text();
//	*p = 10;
//	printf("%d", *p);
//	return 0;
//}
//int* test()
//{
//	int* str = (int*)malloc(40);//可以 因为是在堆上创建的
//	return str;                // 如果 不free释放 空间就存在
//}
//int main()
//{
//	int* p = test();
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//柔性数组
// 比下面的要好               （内存碎片）--动态内存之间有间隔
// 1.开辟的内存是连续的，减少了空间的浪费
// 2.所有malloc 和 free 的次数少 减少出错
// 3.效率更高 --在动态内存开辟是连续的，访问的速度更快                    
//               寄存器 -- cpu
//             高速缓存
//               内存         内存访问是在其80%的旁边继续访问的---连续存储--访问更快
//               硬盘
//struct S
//{
//	char a;
//	int arr[];//未知数组大小  大小是可变的
//};
//int main()
//{
//	printf("%d", sizeof(struct S));
//	//int i = 0;
//	//struct S* ps =(struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
//	//if (ps != NULL)
//	//{
//	//	ps->a = 'q';
//	//	for (i = 0;i < 5;i++)
//	//	{
//	//		ps->arr[i] = i;
//	//	}
//	//}
//	//struct S* ptr = (struct S*)realloc(ps,41);
//	//if (ptr != NULL)
//	//{
//	//	ps = ptr;
//	//}
//	//for (i = 5; i < 10;i++)
//	//{
//	//	ps->arr[i] = i;
//	//}
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", ps->arr[i]);
//	//}
//	////释放
//	//free(ps);
//	//ps = NULL;
//	return 0;
//}
//
//struct S
//{
//	int a;
//	int* p;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->p = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		*(ps->p+i) = i;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", *(ps->p + i));
//	}
//	int* str = (int*)realloc(ps->p, 40);
//	if (str != NULL)
//	{
//		ps->p = str;
//	}
//	for (i = 5;i < 10;i++)
//	{
//		*(ps->p + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->p[i]);
//	}
//	free(ps->p);
//	ps->p = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//int main()
//{
//	//fopen("..")  上级路径
//	//fopen()
//	FILE* pf= fopen("D:\\try\\text.c++\\text.10.31.c\\text.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite= fopen("TEXT.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		fputc('b', pfWrite);
//		fputc('i', pfWrite);
//		fputc('t', pfWrite);
//	}
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("TEXT.txt", "r");
//	if ( pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	/*char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hello\n",pf);
//	fputs("bit\n", pf);*/
////	fgets(buf, 1024, pf);
////	puts(buf);
////	//printf("%s", buf);
////	fgets(buf, 1024, pf);
////	puts(buf);
////
//////	printf("%s", buf);
////	fclose(pf);
//	//pf = NULL;
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	//fputs(buf,stdout);
//	gets_s(buf);
//	puts(buf);
//	return 0;
//}
//struct S
//{
//	int a;
//	float b;
//	char arr[20];
//};
//int main()
//{
//	/*struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	} 
//	fprintf(pf, "%d %lf %s", s.a, s.b, s.arr);*/
//	/*struct S s;
//	fscanf(stdin, "%d %f %s", &(s.a), &(s.b), s.arr);
//	fprintf(stdout, "%d %f %s", s.a, s.b, s.arr);*/
//	struct S s = { 100,3.14f,"bit" };
//	struct S tmp = { 0 };
//	char buf[100]={0};
//	sprintf(buf, "%d %f %s", s.a, s.b, s.arr);//将结构体的数据转换成字符串
//	printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.a), &(tmp.b), tmp.arr);//
//	printf("%d %f %s", tmp.a, tmp.b, tmp.arr);
//	return 0;
//}




//scanf/printf 是针对标准输入流/标准输出流的 格式输入/输出语句
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式输入/输出语句
//sscanf 是从字符串中读取格式化的数据
// sprintf 是把格式化数据输出成（存储到）字符串
//

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	//struct S s = { "张三",20,90.5f };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("text.txt", "rb");//wb 为二进制的形式存储
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch= fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d\n",pos);
//	rewind(pf);//让文件指针回到起始位置
//	int pos1 = ftell(pf);
//	printf("%d\n", pos1);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof



//perror
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("onpen file text.txt");
//		return 0;
//	}
//	int ch = 0;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))//ferror读取文件错误，返回值为非0  为真
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))//feof读取文件已经读完了 返回值为非0  为真 遇到EOF
//	                   	//是读取失败，还是读取完
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(long));
//	//printf("%s\n", __FILE__);//预定义符号
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//写日志
//	int arr[10] = { 0 };
//	int i = 0;
//	FILE* pf = fopen("lon.txt", "w");
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d daty:%s time%s i=%d\n",__FILE__ ,__LINE__, __DATE__, __TIME__, arr[i]);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define STR "hello"
//#define CASE break;case//使用switch case语句可以省略break
//#define do_forver for(;;)//死循环
//int main()
//{
//	do_forver
//		printf("goolmen\n");
//	//printf("%s",STR);
//	/*int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//		CASE 1:
//		printf("hehe1");
//		CASE 2:
//		printf("nihao2\n");
//		CASE 3:
//		printf("buhao3\n");
//	}*/
//	return 0;
//}

//宏是#define 里有参数           #define MAX 100
// 字符串里的宏是不用进行替换的  printf("MAX")---MAX
// 宏是没有递归的
//#define A(x) 2*(x)*x+1//宏不是传参的而是替换的
//int main()
//{
//	int num = A(2 + 3);
//	printf("%d\n", num);
//	return 0;
//}
//#define DOUBLE(X) X+X
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//=int ret =10 * 5 + 5;
//	printf("%d\n", ret);
//	return 0;
//}




// # 和 ## 
//void print(int x)
//{   函数的办法是不行的
//	printf("the value of a is %d", x);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	return 0;
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
//#define CAT(X,Y) X##Y
//int main()
//{
//	int class2 = 2022;
//	printf("%d\n", CAT(class, 2));
////  printf("%d\n",class##2); 等价的
////  printf("%d\n",class2);   等价的
//	return 0;
//}
//float Max2(float x, float y)
//{
//	return ((x > y) ? x : y);
//}
//#define MAX(X,Y) (X>Y)?(X):(Y)//宏相对函数的缺点
//int main()                    //宏如果很大 那代码量也变大
//{                             //宏不能调试
//	float c = 2.0f;           //宏的类型无关 不够严谨 更任意写出问题   优势是灵活
//	float d = 3.0f;           //宏可能代来符号优先级的问题 导致容易出错
//	float max = Max2(c, d);//  函数传带有副作用的表达式 不会出错 而宏是替换 容易出现问题
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	//反汇编要执行很多汇编代码
//	max = MAX(c, d);
//
//
//	//int a = 10;
//	//int b = 11;//所有使用有副作用的 要考虑清楚   一般不要带有副作用的宏的参数
//	//int max = MAX(a++, b++);//等价
//	//int max = (a++ > b++) ? (a++) : (b++);
//	////          10 >  11              12
//	//// 执行完   11    12              13              
//	//printf("%d\n", max);//12
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//13
//
//	return 0;
//}
//宏可以传类型
//#define MALLOC(NUM,TYPE) (TYPE*)malloc(NUM*sizeof(TYPE))
//int main()
//{
//	int* p1 = (int*)malloc(10 * sizeof(int));
//	//if
//	int* p2 = MALLOC(10, int);
//	return 0;
//}


//ifdef
//endif
//#define DEBUG 1
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = 0;
//#if 1//#if 常量表达式 为真执行 
//		printf("%d ", arr[i]);
//#endif
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif

//#if 1==1
//	printf("hehe\n");
//#elif 2==1
//	printf("nana\n");
//#else
//	printf("hello\n");
//#endif
//	return 0;
//}

//防止头文件被多次包含--导致代码冗余
//第一种写法
//#ifndef __ADD_A__//如果__ADD_A__被定义为假   没有被定义为真
//#define __ADD_A__
//	int Add(int x, int y);
//#endif
////第二种写法
//#pragma once
//	int Add(int x, int y);

//#include<>  的引用场景不一样
//#include""  使用c语言的头文件用<>
	        //自己写的用""    ""包含了<> ""的文件更大 访问更慢 
//#define OFFSETOF(struct_name,struct_type) (int)&(((struct_name*)0)->struct_type)
//struct S                             //                 
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}
//int* fun()
//{
//	int a = 1;
//	return &a;
//}
//int* fun1()
//{
//	int a = 1;
//	return &a;
//}
//int main()
//{
//	printf("%p\n", fun());
//	printf("%p\n", fun1());
//	printf("%p\n", fun());
//
//	return 0;
//}