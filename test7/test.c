#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main() {
	return 0;
}



//int count = 0;
//int Fib(int n)
//{
//	if (n==3) //���Ե�3��쳲��������ļ���
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//
//	int a = 1;
//	int b = 1;
//	int c = 1;//��ֵ��Ϊ1��Fn=1��Fn=2ʱ��ȷ
//	while (n > 2) {//n�Ǽ���Ĵ�������1�κ͵�2�β����㡣����n=4,n--���������μ��ɽ���
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//50
// 49 48
// 48 47 47 46
// 47 46 46 45 46 45 45 44
// 
//���n��쳲�������
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - ������������
//	ret = Fib(n);
//	printf("ret = %d\n",ret);
//	printf("count = %d\n", count);
//	return 0;
//}



//��n�Ľ׳�
//int Facl1(int n) 
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
//
////n�Ľ׳˵ĸĽ�
//int Facl2(int n) 
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl2(n - 1);
//}
//
//int main() 
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str) 
//{
//	//�����ַ����ĳ���
//	//�ж��ǲ���/0�����Ǿ�++
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}

//��������ʱ���������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
////�Ѵ��»�С
//// my_strlen("bit")
////1+my_strlen("it")
////1+1+my_strlen("t")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//
//int main() {
//	char arr[] = "bit";
//	//int len = strlen(arr); //���ַ�������
//	//printf("%d\n", len);
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ�����������������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//
//	return 0;
//}

//void print(int n) {
//	if (n > 9) {  //������2λ��
//		print(n / 10);  // 1234/10=123,��123���ش�ӡ
//	}
//	printf("%d ",n%10);//��ӡ4
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("���������֣�");
//	scanf("%d", &num);//1234
//	//�ݹ�:�����Լ������Լ�
//	print(num);
//	//print(1234)  ����ȡģ���Եõ�4����1234���������
//	//print(123) 4  �ȴ�ӡ123���ٴ�ӡ4
//	//print(12) 3 4  �ȴ�ӡ12 �ٴ�ӡ3,4
//	//print(1) 2 3 4 ��ӡ1�����ش�ӡ����
//	//ÿ�δӺ����в���һλ��������ģ��С�ˣ���ԭ���⣬ֻ��1λ�����ò�
//
//	return 0;
//}

//��򵥵ĵݹ�
//int main() 
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//#include "add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}