#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h> //����strcpy
#include<math.h>//����sqrt

#include "add.h"

//������
int main() {
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d", sum);
	return 0;
}



//��ʽ���ʣ�Ƕ�׷���
//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//��ʽ���ʣ�Ƕ�׺����󳤶�
//int main() {
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n",len);
//	//2:��ʽ����
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//void Add(int* p) {
//	(*p)++;
//}
//
//int main() {
//	int num = 0;
//	//���ú�����ʹ��numÿ������1
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}


//����ʵ�ֶ��ֲ���
//int binary_search(int arr[], int k, int sz) {//������һ�����飬�ռ��˷����أ�ֻ������Ԫ��
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //�м�Ԫ�ص��±�
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main() {
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��������±꣬�Ҳ�������-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//���ݹ�ȥ��arr��Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1) {
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}

//�ж��Ƿ�����
//int is_leap_year(int y) {
//	if (((y%4==0) && (y%100!=0)) || (y%400 ==0))
//	{
//		return 1;
//	}
//
//	return 0;
//}
//
//int main() {
//	int year = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�����
//		if (1 == is_leap_year(year)) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//�ж��Ƿ�������
//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j < n;j++) {
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	//if (j == n)
//	//{
//	//	return 1;
//	//}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//��ӡ100-200֮�������
//int main() {
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//��ָ��ķ������
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main() {
//	//int a = 10;
//	//int* pa = &a;//paָ�����
//	//*pa = 20;//�����ò�����ָ��a
//	//printf("%d\n",a);
//	//���Ľ���
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n",a,b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//��������
//�޷���ֵ,ֱ�Ӹ�ֵ����
//����Ľ���
// �βΣ���ʽ����-��ʽ�ϵĲ������Ѻ������õ�ʱ��a,b�в�ʵ���� 
//void Swap(int x,int y) 
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main() {
//	//���Ľ���
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n",a,b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//memset
//memory - �ڴ� - set - ����

//���������Ľϴ�ֵ 
//���庯��
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int get_max(int x, int y) {
//	return (x>y)?(x):(y);
//}
//
////���������Ľϴ�ֵ 
//int main() {
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a,b);
//	printf("max = %d\n",max);
//	return 0;
//}

//int main() {
//	char arr[] = "hello world";
//	memset(arr,'*',5);//��*���õ�arr�Ŀ�ʼ��һ��������Ϊ5
//	//***** world
//	printf("%s\n", arr);
//	return 0;
//}


//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	//��arr1������arr2��
//	strcpy(arr2, arr1); //����Դͷ
//	//char arr2[20] = "bit\0########";
//	printf("%s\n",arr2);
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ��������й�
//	return 0;
//}

//int Add(int x,int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}