#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int max(int a, int b) {
	//int ret
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	//return ret;
}
int main() {
	int a, b, c;
	a = 5;
	b = 6;
	c = max(10,12);
	c = max(a, b);
	c = max(c, 23);
	max(23, 45);
	printf("%d\n",max(a,b));
	return 0;
}


//求和函数
//void sum(int begin,int end) 
//{
//	int i;
//	int sum = 0;
//
//	for ( i = begin; i <end; i++)
//	{
//		sum += i;
//	}
//	printf("%d到%d的和是%d\n",begin,end,sum);
//}
//
//int main() 
//{
//	sum(1, 10);
//	sum(20, 30);
//	sum(35, 45);
//
//	return 0;
//}


//int isPrime(int i) {
//	int ret = i;
//	int k;
//	for ( k = 2; k < i-1; k++)
//	{
//		if (i % k == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//
////函数
//int main() {
//	int m, n;
//	int sum = 0;
//	int cnt = 0;
//	int i;
//
//	scanf("%d %d",&m,&n);
//
//	if (m == 1) m = 2;
//	for ( i = m; i <=n; i++)
//	{
//		if ( isPrime(i) ) {
//			sum += i;
//			cnt++;
//		}
//	}
//	printf("%d %d\n",cnt,sum);
//	return 0;
//}


//散列计算：统计每种数字出现的次数
//int main() {
//	const int number = 10;
//	int x;
//	int count[10]; //int count[number];//ONLY C99
//	int i;
//	
//	//初始化数组：数组不会得到自动的初始值，需要初始化才能使用
//	for ( i = 0; i < 10; i++)
//	{
//		count[i] = 0;
//	}
//	scanf("%d", &x);
//	
//	while (x != -1)
//	{
//		if (x >= 0 && x <= 9) {
//			count[x]++; //数到对应的数，让对应的计数器加1
//		}
//		scanf("%d", &x);
//	}
//	//遍历数组输出
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d:%d\n", i, count[i]);
//	}
//	return 0;
//}


//计算确定数据量的平均数
//int main() {
//	int x;
//	double sum = 0.0;
//	int cnt=1;
//	printf("请输入数字的数量");
//	scanf("%d",&cnt);
//	if (cnt > 0)
//	{
//		//int number[cnt]; //C99 ONLY
//		scanf("%d",&x);
//		while (x != -1)
//		{
//			number[cnt] = x;
//			sum += x;
//			cnt++;
//			scanf("%d",&x);
//		}
//	}
//	return 0;
//}

////如何记录很多数
//int main() {
//	int x;
//	double sum = 0;
//	int cnt = 0;
//	int number[100];//数组
//	scanf("%d",&x);
//	while (x != -1)
//	{
//		number[cnt] = x; //将x赋值到数组中某个单元
//		//调试代码
//		{
//			int i = 0;
//			printf("%d\t",cnt); //输出cnt的值
//			for  (i = 0; i <=cnt; i++)
//			{
//				printf("%d\t",number[i]); //观察数组的值是怎么变化的
//			}
//			printf("\n");
//		}
//		sum += x;
//		cnt++; //不断递增
//		scanf("%d", &x);
//	}
//	if (cnt > 0)
//	{
//		printf("%f\n",sum/cnt);
//		int i;
//		for ( i = 0; i < cnt; i++) //遍历整个数组
//		{
//			if (number[i] > sum / cnt) { //把符合条件的数找出来
//				printf("%d\n",number[i]);
//			}
//		}
//	}
//	return 0;
//}


//计算输入数的平均数
//int main() {
//	int x;
//	double sum = 0;
//	int cnt = 0; //计算输入的数有多少个
//	scanf("%d",&x);
//	while (x != -1) //输入的数不等于-1时
//	{
//		sum += x; 
//		cnt++;
//		scanf("%d", &x);
//	}
//
//	if (cnt > 0)
//	{
//		printf("%f\n",sum/cnt);
//	}
//	return 0;
//}