#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b[] = { 1, 2, 3, 4 };
	int c[3][4] = {0};//��ά����Ҳ�ǰ���˳�����еģ���һά��������
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
	//���ǲ���ȫ��ʼ��
	printf("%d\n", sizeof(ch1[12]));
	printf("%d\n", sizeof(ch2[12]));
	//
	printf("%d\n", strlen(ch3));//�õ��ĳ���Ϊ4
	printf("%d\n", strlen(ch4));//�õ����Ǵ��ڵ���4������ֵ
	//
	printf("%d\n", sizeof(b));   //16   ֻ�е��������������ʱ�������������
	printf("%d\n", sizeof(b + 0));     //4   b�൱����Ԫ�ص�ַ������ָ�����ͣ�32ƽ̨������ָ�����ʹ�С����4���ֽ�
	printf("%d\n", sizeof(*b));     //4     ָ�������Ԫ�أ�
	printf("%d\n", sizeof(b + 1));     //4      b�൱����Ԫ�ص�ַ��+1���Ƿ�����һ��Ԫ�ص�ַ
	printf("%d\n", sizeof(b[1]));     //4     b[1]����ڶ���Ԫ�أ����͵��ֽڳ���Ϊ4
	printf("%d\n", sizeof(&b));     //4      ��ַ���ֽڳ���Ϊ4
	printf("%d\n", sizeof(&b + 1));     //4
	printf("%d\n", sizeof(&b[0]));     //4
	printf("%d\n", sizeof(&b[0] + 1));      //4
	//
	printf("%d\n", sizeof(c));    //48     c������������һ��4������16���ֽڣ����й�48���ֽ�
	printf("%d\n", sizeof(c[0][0]));     //4     ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(c[0]));    //16     c[0]�����һ������������һ�й�16���ֽ�
	printf("%d\n", sizeof(c[0] + 1));    //4    c[0]+1���൱��&a[0][1]����ַΪ4���ֽ�
	printf("%d\n", sizeof(c + 1));     //4     c�����һ�еĵ�ַ��c+1����ڶ��еĵ�ַ
	printf("%d\n", sizeof(&c[0] + 1));    //4   ����ڶ��еĵ�ַ
	printf("%d\n", sizeof(*c));    //16    ȡ���ǵ�һ�еĵ�ַ
	printf("%d\n", sizeof(c[3]));    //16   sizeof�����ݲ��������㣬�������Ƕ��Ǵ�
	system("pause");
	return 0;
}