#define _CRT_SECURE_NO_WARNINGS	1

#include<stdio.h>

//������������ֵ

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

//�⺯��strcpy�÷�-�ַ�������
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

//�⺯�� memset-memory �ڴ�  set-����

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

//�Զ��庯��

/*
* //���庯��
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
	//������ʹ��
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/

//дһ�κ��������������α�������

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
	int* pa = &a;//paָ�����
	*pa = 20;//�����ò���
	printf("%d\n", a);
	return 0;
}
*/

#include<math.h> 

//��ӡ100-200�������

/*
* 
//����������1��֮����0
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
		//�ж��Ƿ�Ϊ����
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
*/

//дһ�κ����ж��Ƿ�������

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

//����һ�������������еĶ��ֲ���

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
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ���,�±��ǣ�%d\n", ret); 
	}
	return 0;
}
*/

//дһ������ÿ����һ�Σ�numֵ�ͼ�1

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

//��ʽ����

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

//���������Ͷ���

#include"add.h"

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
