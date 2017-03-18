#define _CRT_SELECT_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// 求一个素数，需要判断是否除了1和自己 还有没有其余的余数
// 所以，我们需要将这个数从2开始，一直取余数，直到自己，看得到的结果有没有0，如果有0，那么就说明不是余数
// 当然，有优化的，不需要从2到自己，只需要从2到自己的平方根就行了，在一定程度上减少了循环次数
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
	printf("请输入一个数字:");
	scanf_s("%d", &a);
	if (Perimer(a) == 0)
	{
		printf("该数字不是素数\n");
	}
	else
	{
		printf("该数字是素数\n");
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