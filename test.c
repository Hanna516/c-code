#define _CRT_SECURE_NO_WARNINGS	1

#include<stdio.h>

//��д����ģ���û���¼����ֻ�ܵ����Σ�ֻ�����������룬������������ȷ����ʾ��¼�ɹ���
//�����ξ�����������˳�ϵͳ

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
		printf("����������:>");
		scanf("%s\n", password);
		if (strcmp(password, "123456")==0)//==���ܱȽ��������Ƿ���ȣ�Ӧʹ�ÿ⺯��strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("����������������˳�����\n");
	}
	return 0;
}


//��дһ�δ�����ʾ����ַ��������ƶ������м���

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
		//��Ϣһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ������-cls-���ϵͳ��Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

*/

//дһ�δ����������arr�������ҵ�����7

/*����һ�����ַ�
* int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz-1;//���±�
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
			printf("�ҵ��ˣ��±���: %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
*/

/*������     
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
			printf("�ҵ��ˣ��±���: %d\n", i); 
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	return 0;
}
*/


//��1!+2!+...+10!

/*����һ             
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

/*������
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


//��n!

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


//1-100�������

/*����һ
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

/*������
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