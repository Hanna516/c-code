#define _CRT_SECURE_NO_WARNINGS	1

#include<stdio.h>

//编写代码模拟用户登录，且只能登三次（只许输三次密码，若密码输入正确则提示登录成功）
//若三次均输入错误则退出系统

/*
* 
*/
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s\n", password);
		if (strcmp(password, "123456")==0)//==不能比较两个数是否相等，应使用库函数strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，请退出程序\n");
	}
	return 0;
}


//编写一段代码演示多个字符从两端移动，向中间汇聚

/*
*
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcom to bit!!!!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//err
	int right = strlen(arr1)-1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);
		system("cls");//执行系统命令的一个函数-cls-清空系统屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

*/

//写一段代码在有序的arr数组中找到数字7

/*方法一：二分法
* int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz-1;//右下标
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是: %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
*/

/*方法二     
* int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0; 
	int sz = sizeof(arr) / sizeof(0);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是: %d\n", i); 
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}
*/


//求1!+2!+...+10!

/*方法一             
* int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}
*/

/*方法二
* int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret=1;
		for (i= 1; i <= n; i++)
		{
			ret = ret * i; 
		}
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}
*/


//求n!

/*
* int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}
*/


//1-100间的奇数

/*方法一
* int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d", i);
		i += 2;
	}
	return 0;
}
*/

/*方法二
* int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf(" %d", i);
		i++; 
	}
	return 0;
}
*/