#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

/**
 * 判断素数
 * 
 * \return 
 */
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

//构造素数表
int main(void) {
	const int number = 10;
	int prime[10] = { 2 };
	int count = 1;
	int i = 3;

	//while之前输出一个表头
	{
		int i;
		printf("\t\t");
		for (i = 0; i < number; i++)
		{
			printf("%d\t", i);
		}
		printf("\n");
	}

	while (count < number)
	{
		if (isPrime(i,prime,count)) {
			prime[count++] = i;
		}

		//加入调试输出语句
		//在程序里平白无故加入大括号，往往为了调试
		{
			printf("i=%d \tcnt=%d\t",i,count);
			int i;
			for ( i = 0; i < number; i++)
			{
				printf("%d\t",prime[i]);
			}
			printf("\n");
		}
		i++;
	}

	for ( i = 0; i < number; i++)
	{
		printf("%d",prime[i]);
		if ((i + 1) % 5) printf("\t");
		else	printf("\n");
	}
	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {
	int ret = 1;
	int i;
	for ( i = 0; i < numberOfKnownPrimes; i++)
	{
		if (x % knownPrimes[i] == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}


//int main() {
//	int x;
//	scanf("%d",&x);
//	if (isPrime(x))
//	{
//		printf("%d是素数\n",x);
//	}
//	else {
//		printf("%d不是素数\n", x);
//	}
//	return 0;
//}


//循环sqrt(x)次
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1 || (x % 2 == 0 && x != 2)) //1不是素数，2是素数，排除2的情况
//	{
//		ret = 0;
//	}
//
//	for ( i = 3; i < sqrt(x); i+=2)
//	{
//		if (x % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return 0;
//}


//去掉偶数：从3到x-1，每次+2
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	//先判断是不是偶数，如果x是偶数，立刻
//	if (x == 1 || (x % 2 == 0 && x != 2))
//		ret = 0;
//	
//
//	//i只判断奇数的情况 要循环(n-3)/2+1遍
//	//当n很大时就是n/2遍
//	for (i = 3; i < x; i += 2)
//	{
//		if (x % i == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}


//从2到x-1测试是否可以整除
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1)
//	{
//		ret = 0;
//	}
//	//从2到x-1测试是否可以整除
//	for ( i = 2; i < x; i++)
//	{
//		if (x % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}



/**
 * 找出key在数组a中的位置
 * @param key 要寻找的数字
 * @param a 要寻找的数组
 * @param length 数组a的长度
 * 
 * \return 如果找到，返回其在a中的位置;如果找不到则返回-1
 */
//int search(int key, int a[], int length);
//
//int main() {
//	int a[] = {2,4,6,7,1,3,5,7,9,11,13,23,14,32};
	//int a[13] = { 2 };
	//初始化方法一
	//int a[13] = {0};
	//初始化方法二
	//for ( i = 0; i < 13; i++)
	//{
	//	a[i] = 0;
	//}


	//int a[] = { [1] = 2,4,[5] = 6 };
	//int i = 0;
	//printf("%lu\n",sizeof(a)); //数组a的大小：24
	//printf("%lu\n", sizeof(a[0]));//a的一个单元大小：4
	//printf("%lu\n", sizeof(a) / sizeof(a[0])); //元素的个数：24 / 4 = 6

	//for ( i = 0; i < sizeof(a) / sizeof(a[0]); i++) //计算数组大小方法
	//{
	//	printf("%d\t",a[i]);
	//}
	//printf("\n");


//	int x;
//	int loc;
//	printf("请输入一个数字：");
//	scanf("%d",&x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc != -1)
//	{
//		printf("%d在第%d个位置上\n",x,loc);
//	}
//	else {
//		printf("%d不存在\n",x);
//	}
//	
//	return 0;
//}
//
//int search(int key,int a[],int length) { //数组作为参数传递
//	int ret = -1;
//	int i;
//	for ( i = 0; i < length; i++)
//	{
//		if (a[i] == key) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
