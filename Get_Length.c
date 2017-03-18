#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b[] = { 1, 2, 3, 4 };
	int c[3][4] = {0};//二维数组也是按照顺序排列的，与一维数组类似
	int a = 0;
	int arr[10] = { 0 };
	char ch[12];
	char ch1[12] = "abcd";
	char ch2[12] = { 'a', 'b', 'c', 'd' };
	char ch3[] = "abcd";
	char ch4[] = { 'a', 'b', 'c', 'd' };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	//
	printf("%d\n", sizeof(int [10]));
	printf("%d\n", sizeof(arr));
	//
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(char [12]));
	//
	//都是不完全初始化
	printf("%d\n", sizeof(ch1[12]));
	printf("%d\n", sizeof(ch2[12]));
	//
	printf("%d\n", strlen(ch3));//得到的长度为4
	printf("%d\n", strlen(ch4));//得到的是大于等于4的任意值
	//
	printf("%d\n", sizeof(b));   //16   只有单独存放数组名的时候代表整个数组
	printf("%d\n", sizeof(b + 0));     //4   b相当于首元素地址，代表指针类型，32平台下所有指针类型大小都是4个字节
	printf("%d\n", sizeof(*b));     //4     指针访问首元素，
	printf("%d\n", sizeof(b + 1));     //4      b相当于首元素地址，+1就是访问下一个元素地址
	printf("%d\n", sizeof(b[1]));     //4     b[1]代表第二个元素，整型的字节长度为4
	printf("%d\n", sizeof(&b));     //4      地址的字节长度为4
	printf("%d\n", sizeof(&b + 1));     //4
	printf("%d\n", sizeof(&b[0]));     //4
	printf("%d\n", sizeof(&b[0] + 1));      //4
	//
	printf("%d\n", sizeof(c));    //48     c代表数组名，一行4个数，16个字节，三行共48个字节
	printf("%d\n", sizeof(c[0][0]));     //4     首元素的地址
	printf("%d\n", sizeof(c[0]));    //16     c[0]代表第一行数组名，第一行共16个字节
	printf("%d\n", sizeof(c[0] + 1));    //4    c[0]+1就相当于&a[0][1]，地址为4个字节
	printf("%d\n", sizeof(c + 1));     //4     c代表第一行的地址，c+1代表第二行的地址
	printf("%d\n", sizeof(&c[0] + 1));    //4   代表第二行的地址
	printf("%d\n", sizeof(*c));    //16    取的是第一行的地址
	printf("%d\n", sizeof(c[3]));    //16   sizeof的内容不参与运算，无论它是对是错
	system("pause");
	return 0;
}