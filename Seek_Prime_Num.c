#define _CRT_SELECT_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// ��һ����������Ҫ�ж��Ƿ����1���Լ� ����û�����������
// ���ԣ�������Ҫ���������2��ʼ��һֱȡ������ֱ���Լ������õ��Ľ����û��0�������0����ô��˵����������
// ��Ȼ�����Ż��ģ�����Ҫ��2���Լ���ֻ��Ҫ��2���Լ���ƽ���������ˣ���һ���̶��ϼ�����ѭ������
int Perimer(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
		{
			break;
		}
		
		else
		{
			printf("%d ", num);
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a = 0;
	printf("������һ������:");
	scanf_s("%d", &a);
	if (Perimer(a) == 0)
	{
		printf("�����ֲ�������\n");
	}
	else
	{
		printf("������������\n");
	}
	system("pause");
	return 0;
}


//int main()
//{
//	int n, k;
//	for (n = 100; n <= 200;n++)
//	{
//		for (k = 2; k <= n; k++)
//		{
//			if (n%k == 0)break;
//		}
//		if (k > sqrt(n) + 1)
//		{
//			printf("%d\t",n);
//		}
//	}
//	system("pause");
//	return 0;
//}