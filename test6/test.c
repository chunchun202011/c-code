#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h> //引入strcpy
#include<math.h>//引入sqrt

#include "add.h"

//主函数
int main() {
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d", sum);
	return 0;
}



//链式访问，嵌套访问
//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//链式访问：嵌套函数求长度
//int main() {
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n",len);
//	//2:链式访问
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//void Add(int* p) {
//	(*p)++;
//}
//
//int main() {
//	int num = 0;
//	//调用函数，使得num每次增加1
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}


//函数实现二分查找
//int binary_search(int arr[], int k, int sz) {//创建了一份数组，空间浪费严重，只传了首元素
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //中间元素的下标
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
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回数的下标，找不到返回-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//传递过去的arr首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1) {
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}

//判断是否闰年
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
//		//判断year是否闰年
//		if (1 == is_leap_year(year)) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//判断是否是素数
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

//打印100-200之间的素数
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


//用指针的方法解决
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
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
//	//int* pa = &a;//pa指针变量
//	//*pa = 20;//解引用操作，指向a
//	//printf("%d\n",a);
//	//数的交换
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n",a,b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//交换函数
//无返回值,直接赋值即可
//错误的交换
// 形参：形式参数-形式上的参数，把函数调用的时候a,b有才实例化 
//void Swap(int x,int y) 
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main() {
//	//数的交换
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n",a,b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//memset
//memory - 内存 - set - 设置

//找两个数的较大值 
//定义函数
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
////找两个数的较大值 
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a,b);
//	printf("max = %d\n",max);
//	return 0;
//}

//int main() {
//	char arr[] = "hello world";
//	memset(arr,'*',5);//把*设置到arr的开始第一个，长度为5
//	//***** world
//	printf("%s\n", arr);
//	return 0;
//}


//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	//把arr1拷贝到arr2上
//	strcpy(arr2, arr1); //对象，源头
//	//char arr2[20] = "bit\0########";
//	printf("%s\n",arr2);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
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