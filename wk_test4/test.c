#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n;
	int i;
	double sum = 0.0;

	scanf("%d",&n);
	for ( i = 1; i <= n; i++)
	{
		sum += 1.0 / i;//将求出的值转成double类型
	}
	printf("f(%d)=%f\n",n,sum);

	return 0;
}


//goto
//int main() {
//	int x;
//	int one, two, five;
//
//	scanf("%d",&x);
//
//	for ( one = 1; one < x*10; one++)
//	{
//		for (two = 1; two < x * 10 / 2;two++) {
//			for ( five = 1; five < x* 10/5; five++)
//			{
//				if (one + two*2 + five*5 == x*10) {
//					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
//						one,two,five,x);
//					goto out;
//				}
//			}
//		}
//	}
//	out:
//	return 0;
//}

//数硬币
//int main() {
//	int x;
//	int one, two, five;
//	int exit = 1;
//
//	scanf("%d",&x);
//
//	for ( one = 1; one < x*10; one++)
//	{
//		for (two = 1; two < x * 10 / 2;two++) {
//			for ( five = 1; five < x* 10/5; five++)
//			{
//				if (one + two*2 + five*5 == x*10) {
//					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
//						one,two,five,x);
//					exit = 1;
//					break;
//				}
//			}
//			if (exit == 1) break;
//		}
//		if (exit == 1) break;
//	}
//	return 0;
//}


//前50个素数
//int main() {
//	int x;
//	x = 6;
//	int cnt = 0;//加一个计数器
//
//	//while (cnt < 50)
//	for(x = 2; cnt < 50; x++)
//	{
//		int i;
//		int isPrime = 1;//x是素数
//		for ( i = 2; i < x; i++)
//		{
//			if (x % i == 0) {
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime == 1)
//		{
//			printf("%d ",x);
//			cnt++;
//		}
//		x++;//注意之前for循环有x++的动作，此处也要加上，否则无法更新数
//	}
//	printf("\n");
//
//	return 0;
//}


//到100的素数
//int main() {
//	int x;
//	
//
//	//scanf("%d",&x);
//	x = 6;
//
//	for (x = 2; x < 100; x++) {
//		int i;
//		int isPrime = 1;
//		//通过证伪来证实它不是素数
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0) { //可以被整除，表明不是素数
//				//printf("不是素数\n");
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime == 1)
//		{
//			printf("%d ",x);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//常见错误
//int main() {
//	int age = 0;
//	double salary = 4000;
//
//	age = 55;
//	if (age = 0) { //把age的值改了，改成0，把传入if的值改成0,是0条件不成立
//		salary = salary * 1.2;
//		printf("%f\n", salary);
//	}
//	return 0;
//}


//整数求逆
//int main() {
//	int x;
//	//scanf("%d", &x);
//	x = 700;
//
//	int digit;
//	int ret = 0;
//	//循环做逆序输出
//
//	//输出：700 -> 7
//	while (x > 0)
//	{
//		digit = x % 10;//表示每一位
//		//printf("%d",digit);//输出每一位
//		ret = ret * 10 + digit; //原来的结果往左边移1位再加digit
//		printf("x = %d,digit = %d,ret = %d\n", x,digit,ret);//调试
//		x /= 10;
//	}
//
//	//输出：700-->007
//	//while (x > 0)
//	//{
//	//	digit = x % 10;//表示每一位
//	//	printf("%d",digit);//循环的每一轮输出digit
//	//	ret = ret * 10 + digit; //原来的结果往左边移1位再加digit
//	//	//printf("x = %d,digit = %d,ret = %d\n", x, digit, ret);//调试
//	//	x /= 10;
//	//}
//
//	return 0;
//}


//int main() {
//
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//	printf("我已经想好了一个1到100之间的数");
//	do {
//		printf("猜猜这个1到100之间的数:");
//		scanf("%d",&a);
//		count++;
//		if (a > number)
//		{
//			printf("你猜的数大了。");
//		}
//		else if (a < number) {
//			printf("你猜的数小了。");
//		}
//	} while (a != number);
//	printf("太好了，你用了%d次就猜到了答案。\n",count);//最多7次可猜到
//	return 0;
//}


//随机数
//int main() {
//	srand(time(0));
//	int a = rand();
//	printf("%d\n",a% 100); //每次得到一个100以内的随机数 [0,99]
//
//	return 0;
//}


//算平均数
//int main() {
//	int number;
//	int sum = 0;
//	int count = 0;	
//
//	//只要number不是-1就把它加进来
//	scanf("%d",&number);//只做一次
//	while(number != -1)
//	{
//		sum += number;
//		count++;
//		scanf("%d", &number);//后面输入的数
//	}
//
//	printf("%f\n",1.0* sum / count);//想让输出的是浮点数，乘上1.0
//	
//	return 0;
//}


//循环计数
//int main() {
//	int n = 3;
//
//	while (n >=0)
//	{
//		n--;
//		printf("%d ", n);
//	}
//	printf("发射\n");
//
//	return 0;
//}

//循环计算：log2 x
//int main() {
//	int x;
//	int ret = -1;
//
//	scanf("%d",&x);
//	int t = x;
//	while (x > 0)
//	{
//		x /= 2;
//		ret++;
//	}
//	
//	printf("log2 of %d is %d.",t,ret);
//	return 0;
//}


//switch-case
//int main() {
//	//const int MRN = 2;
//	int type;
//
//	scanf("%d",&type);
//
//	switch (type)
//	{
//	case 1:
//		printf("你好");
//		break;
//	//case MRN://C99 ONLY,此处报错
//	case 2:
//		printf("早上好");
//		break;
//	case 3:
//		printf("晚上好");
//		break;
//	case 4:
//		printf("再见");
//		break;
//	default:
//		printf("啊，什么啊？");
//		break;
//	}
//	
//	return 0;
//}