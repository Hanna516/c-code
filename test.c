#define _CRT_SECURE_NO_WARNINGS	1

#include<stdio.h>

//计算两个数的值

/*
* int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/

//库函数strcpy用法-字符串拷贝
#include<string.h>

/*
* int main()
{
	char arr1[] = "bit";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
*/

//库函数 memset-memory 内存  set-设置

/*
* int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//***** world
	return 0;
}
*/

//自定义函数

/*
* //定义函数
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	//函数的使用
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/

//写一段函数交换两个整形变量内容

/*
* void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	//int tmp = 0;
	//
	printf("a=%d b=%d\n", a, b);
	//Swap1(a,b);
	Swap2(&a,&b);
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/

/*
* int main()
{
	int a = 10;
	int* pa = &a;//pa指针变量
	*pa = 20;//解引用操作
	printf("%d\n", a);
	return 0;
}
*/

#include<math.h> 

//打印100-200间的素数

/*
* 
//是素数返回1反之返回0
int is_prime(int n)
{
	//2->n-1
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
*/

//写一段函数判断是否是闰年

/*
* int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}
*/

//体现一段整形有序数列的二分查找

/*
* int binry_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{ 
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binry_search(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了,下标是：%d\n", ret); 
	}
	return 0;
}
*/

//写一个函数每调用一次，num值就加1

/*
* int Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);//1
	Add(&num);
	printf("num = %d\n", num);//2
	Add(&num);
	printf("num = %d\n", num);//3
	return 0;
}
*/

//链式访问

/*
* int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));
	return 0;
}
*/

//函数声明和定义

#include"add.h"

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
