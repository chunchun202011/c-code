#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
//if-else
int main() {
	int f;
	int x;
	scanf("%d",&x);
	if (x < 0)
	{
		f = -1;
	}
	else if (x == 0) {
		f = 0;
	}
	else
	{
		f = 2 * x;
	}
	printf("%d",f);
	return 0;
}

//比较3个数大小
//int main() {
//	int a, b, c;
//	scanf("%d %d %d",&a,&b,&c);
//
//	int max = 0;
//	if (a > b)
//	{
//		if (a > c) {
//			max = a;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	else
//	{
//		if (b>c)
//		{
//			max = b;
//		}
//		else {
//			max = c;
//		}
//	}
//
//	printf("The max is %d",max);
//	return 0;
//}


//逗号表达式
//int main() {
//	int i;
//	i = 3 + 4, 5 + 6;
//
//	printf("%d\n",i);
//
//	return 0;
//}

////短路与测试
//int main() {
//	int a = -1;
//	if (a > 0 && a++ < 1)
//	{
//		printf("OK\n");
//	}
//	printf("%d\n",a);
//	return 0;
//}

//int main() {
//	bool b = 6 > 5;
//	bool t = true;
//	t = 2; //t的类型是一个整数，可以过编译运行,bool输出的是一个整数而不是true
//	printf("%d\n",b);//1
//	return 0;
//}

//阶乘
// for循环
//int main() {
//	int n;
//
//	scanf("%d", &n);
//	int fact = 1;
//
//	int i = n;//用i暂存
//	//for ( i = 2; i <= n; i++)
//	//{
//	//	fact *= i;
//	//}
//	
//	//倒过来的循环
//	for (; n > 1; n--)
//	{
//		fact *= n;
//	}
//
//	printf("%d!=%d\n",i,fact);
//
//	return 0;
//}


//阶乘：while循环
//int main() {
//	int n;
//
//	scanf("%d",&n);
//	int fact = 1;
//
//	int i = 1;
//	while (i <= n)
//	{
//		fact *= i;//fact = fact * i;
//		i++;
//	}
//
//	printf("%d!=%d\n",n,fact);
//	return 0;
//}



//判断几位数
// do-while循环
//int main() {
//	int x;
//	scanf("%d\n", &x);
//	int n = 0;
//	do
//	{
//		x /= 10;
//		n++;
//	} while (x>0); //小心do-while后面的分号
//	printf("%d\n", n);
//	return 0;
//}

//while循环
//int main() {
//	int x;
//	int n = 0;
//
//	scanf("%d", &x);
//	//n++;
//	//x /= 10;
//	//printf("x=%d,n=%d\n", x, n);
//
//	while (x > 0)
//	{
//		n++;
//		x /= 10;//做除法后赋值给原来的x
//		printf("x=%d,n=%d\n", x, n);
//	}
//	printf("%d\n", n);
//
//	return 0;
//}


// if语句
//int main() {
//	int x;
//	int n = 0;
//
//	scanf("%d",&x);
//	
//	n++;
//	x /= 10;
//	if (x > 0)
//	{
//		n++;
//		n /= 10;
//		if (x>0)
//		{
//			n++;
//			x /= 10;
//			if ...
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main() {
//	//计算机的程序写的是步骤，不是关系
//	int x;
//	int n = 1;
//
//	scanf("%d", &x);
//
//	//从高处往下判断，低处的已经隐含了高处的含义（如>99已经隐含的判断了这个数<1000）
//	if (x>999)
//	{
//		n = 4;
//	}
//	else if (x > 99) {
//		n = 3;
//	}
//	else if(x>9)
//	{
//		n = 2;
//	}
//
//	printf("%d\n",n);
//	return 0;
//}

//判断成绩
//int main() {
//	const int PASS = 60;
//	int score;
//
//	printf("请输入成绩：");
//	scanf("%d", &score);
//
//	printf("你输入的成绩是%d.\n",score);
//	if (score < PASS)
//	{
//		printf("很遗憾，这个成绩没有及格。");
//	}
//	else
//	{
//		printf("祝贺你，这个成绩及格了。");
//	}
//	printf("再见\n");
//	return 0;
//}


//比较两个数的大小
// 方案3
//int main() {
//	int a, b;
//	int max = 0;
//	
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//
//	max = b;
//	if (a > b)
//	{
//		max = a;
//	}
//
//	printf("大的那个数是%d\n",max);
//
//	return 0;
//}

// 方案2
//int main() {
//	int a, b;
//	int max = 0;
//
//	printf("请输入两个整数：");
//	scanf("%d %d",&a,&b);
//
//	if (a>b)
//	{
//		max = a;
//	}
//	else {
//		max = b;
//	}
//
//	printf("大的那个是%d\n",max);
//
//	return 0;
//}


//方案1
//int main() {
//	int a, b;
//	
//	printf("请输入两个整数：");
//	scanf("%d %d",&a,&b);
//
//	int max = 0;
//	if (a > b)
//	{
//		max = a;
//	}
//	if (b > a)
//	{
//		max = b;
//	}
//	printf("大的那个是%d\n",max);
//	return 0;
//}

//int main() {
//	const int MINOR = 35; //常量定义
//	int age = 0;
//
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//
//	printf("你的年龄是%d岁。\n",age);
//
//	if (age < MINOR)
//	{
//		printf("年轻是美好的，");
//	}
//
//	printf("年龄决定了你的精神世界，好好珍惜吧。\n");
//	return 0;
//}

//找零计算器
//int main() {
//	//初始化
//	int price = 0;
//	int bill = 0;
//	//读入票面和金额
//	printf("请输入金额：");
//	scanf("%d", &price);
//	printf("请输入票面：");
//	scanf("%d",&bill);
//	//计算找零
//	if (bill > price) {
//		printf("应该找您：%d\n", bill - price);
//	}
//	else
//	{
//		printf("你的钱不够\n");
//	}
//	return 0;
//}


//关系运算结果
//int main() {
//	printf("%d\n",5==3); //0
//	printf("%d\n", 5 > 3);//1
//	printf("%d\n", 5 <= 3);//0
//	return 0;
//}

//计算时间差（判断语句）
//int main() {
//	int hour1, minute1;
//	int hour2, minute2;
//
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//
//	int ih = hour2 - hour1;
//	int im = minute2 - minute1;
//	if (im <0) //分钟数减的结果为负时，说明小时借位，小时-1
//	{
//		im = 60 + im;
//		ih--;
//	}
//	printf("时间差是%d小时%d分。\n",ih,im);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 10;
//	printf("a++=%d\n",a++);
//	printf("a=%d\n", a);
//	printf("++a=%d\n", ++a);
//	printf("a=%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//    printf("************\n");
//    printf("  Welcome   \n");
//    printf("************\n");
//    return 0;
//}

//int main() {
//	int a = 5;
//	int b = 6;
//	int t = a;
//	a = b;
//	b = t;
//	return 0;
//}


//求平均值
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double c = (a + b) / 2.0;
//	printf("%d和%d的平均值为：%f\n", a, b, c);
//	return 0;
//}


//计算时间差
// 参考答案
//int main() {
//	//计算时间差
//	int hour1, minute1;
//	int hour2, minute2;
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//	int t1 = hour1 * 60 + minute1;
//	int t2 = hour2 * 60 + minute2;
//	int t = t2 - t1;
//	printf("两段时间的时间差为：%d小时%d分。", t / 60, t % 60);
//	return 0;
//
//}

//my-homework
//int main() {
//	//计算时间差
//	int hour1 = 0;
//	int hour2 = 0;
//	int minute1 = 0;
//	int minute2 = 0;
//	printf("%请输入t1的小时,分钟：");
//	scanf("%d %d", &hour1, &minute1);
//	printf("%请输入t2的小时,分钟：");
//	scanf("%d %d", &hour2, &minute2);
//	int t1 = hour1 * 60 + minute1;
//	int t2 = hour2 * 60 + minute2;
//	int t = t2 - t1;
//	printf("两段时间的时间差为：%d小时 %d分钟",t/60,t%60);
//	return 0;
//
//}