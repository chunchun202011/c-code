#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//代替goto的关机程序：while循环
int main() {
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - 执行系统命令
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入：>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//goto语句正确用法
//关机程序
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入：>");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

// goto跳过
//int main() {
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//goto死循环
//int main() {
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}


//猜数字游戏
//1.电脑会随机生成一个随机数
//2.猜数字
//void menu()
//{
//	printf("******************************\n");
//	printf("**** 1.play     0.exit    ****\n");
//	printf("******************************\n");
//}
//
////RAND_MAX 0-32767
//
//void game() 
//{
//	int ret = 0;
//	int guess = 0;
//	printf("猜数字\n");
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time()
//	//1.生成一个随机数
//	// time_t time(time_t*timer)
//	//time_t
//	ret = rand()%100+1; //生成0-100的数（模100可以让他在100内）
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//在工程里只需要调用一次即可，不要频繁设置
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//九九乘法表
//int main() {
//	int i = 0;
//	int j = 0;
//	//确定打印9行
//	for ( i = 1; i <= 9; i++)
//	{
//		//打印1行
//		for (j = 1; j <= i; j++) {
//			//%2d:打印2位数，右对齐
//			//%-2d:打印2位数，左对齐
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求10个整数的最大值
//int main() {
//	int arr[] = { -1,2,3,4,5,6,7,8,9,10 };
//	//int max = 0;//最大值,不能这样赋值，因为全是负数的话0为最大值
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}


//分数求和:计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum += flag* 1.0 / i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3...
//	//1+0+0+0...=1
//	printf("%lf", sum);
//	return 0;
//}

//输出含有9的数和9的倍数
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100;i++) {
//		if (i % 10 == 9) {	//以9结尾，10个数字
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9) {	//被9整除，10个数字
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for ( a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2) {
//	//for (i = 100; i <= 200; i++) {
//		//判断i是否为素数
//		//素数判断的规则
//		// 2.到根号之前
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//		//1.试除法
//		//产生2 --> i-1的数字
//		//int j = 0;
//		//for ( j = 2; j < i; j++)
//		//{
//			//if (i%j==0) {
//				//break;
//			//}
//		//}
//		//if (j==i)
//		//{
//			//printf("%d ", i);
//			//count++;
//		//}
//	//}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main() 
//{
//	int year = 0;
//	int count = 0;
	//for (year = 1000; year <= 2000; year++) {
		//判断year能否为闰年
		//1.能被4整除并且不能被100整除是闰年
		//2.能被400整除是闰年
	//	if (year % 4 == 0 && year % 100 != 0) {
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0)//要用else if，否则满足上面那个条件的会重复
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//}
//	for ( year =1000; year <=2000 ; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年", count);
//	return 0;
//}


//求最大公约数：辗转相除法
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n) { //!=0,条件为真
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//打印1-100的所有3的倍数的数字
//int main() 
//{
//	printf("打印1-100的所有3的倍数的数字");
//	int i = 1;
//	for ( i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//输出三个数按大小排列
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数：");
//	scanf("%d,%d,%d", &a, &b, &c);
//	scanf("%d%d%d", &a, &b, &c); //什么都没加：控制台可加空格
//	//算法实现
//	//a中放最大值
//	// b次之
//	//c中放最小值
//
//	if (a < b) {
//		int tmp = a;
//		//交换了a,b的值，使得a放大值
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		//交换了a,b的值，使得a放大值
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		//交换了a,b的值，使得a放大值
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}