#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//正序分解整数
int main() {
	int x;
	//int t = 0;//构建倒过来那个数。没有给初始值，不能直接用，故t=0
	scanf("%d",&x);//此处给x赋初始值

	//x = 13425;
	// 13425 / 10000 -> 1  (最高位)  o
	// 13425 % 10000 -> 3425 (把高位撇掉)
	// 10000 / 10 -> 1000 
	// 3425 / 1000 -> 3   o
	// 3425 % 1000 -> 425
	// 1000 / 10 -> 100
	// 425 / 100 -> 4   o
	// 425 % 100 -> 25
	// 100 / 10 -> 10
	// 25 / 10 -> 2   o
	// 25 % 10 -> 5
	// 10 / 10 -> 1
	// 5 / 1 -> 5   o
	// 5 % 1 -> 5
	// 1 / 10 -> 0
	//

	//int cnt = 0;
	int mask = 1;
	int t = x; //用t来做运算，保持x不变

	//do
	//{
	//	x /= 10;
	//	mask *= 10;
	//	cnt++;
	////} while (x > 0); //让循环少跑一轮，因为13425输出1后面5个0，故x>9
	//} while (x > 9);
	//但do-while循环只针对特定的数成立，若x=1(x为个位数时)则不成立，多跑了一轮，故我们改成while循环

	while (t > 9)
	{
		t /= 10;
		mask *= 10;
	}
	printf("x=%d,mask=%d\n",x,mask);

	//printf("mask=%d,cnt=%d\n",mask,cnt);

	//int mask = 10000;
	//10的cnt-1次方
	//int mask = pow(10, cnt - 1);//可以这样构建，但更好的方法是让mask在cnt增加的时候不断地递增

	do{
		int d = x / mask;
		printf("%d", d);
		if (mask > 9)
		{
			printf(" ");
		}
		x %= mask;
		mask /= 10;
		//printf("x=%d,mask=%d,d=%d\n",x,mask,d);
	} while (mask > 0);
	

	//逆序的结果
	//do
	//{
	//	int d = x % 10;
	//	t = t * 10 + d;
	//	x /= 10;
	//} while (x > 0);
	//printf("t=%d\n",t);

	//逆序的结果
	//do
	//{
	//	int d = x % 10; //取出个位数
	//	printf("%d",d);//解决末尾空格问题，先不加空格
	//	//前几位才输出空格
	//	if ( x >= 10) //或x>9
	//	{
	//		printf(" ");
	//	}
	//	x /= 10; //得到x去掉最后一位的前几位
	//} while (x > 0);
	//printf("\n");

	return 0;

}


/*
* 如果b=0,计算结束，a就是最大公约数；
* 否则，计算a除以b的余数，让a=b,b=余数,回到第一步。
a = 12, b = 18，用 t 来记录余数
让a= b,b=余数（交换）
a % b = 12  (a<b)
a    b      t
12    18   12
18     12    6
12      6      0
6        0
*/
//老师的代码
//int main() {
//	int a, b;
//	int t;
//	scanf("%d %d",&a,&b);
//	while (b != 0) {
//		t = a % b;
//		a = b;
//		b = t;
//		printf("a=%d,b=%d,t=%d\n",a,b,t);
//	}
//	printf("gcd=%d\n",a);
//	return 0;
//}


//自己的代码
//int main() {
//	int a, b;
//	int t = 0;
//	int ret = 1;
//	scanf("%d %d",&a,&b);
//	int a1, a2;
//	a1 = a;
//	a2 = b;
//
//	while (b != 0)
//	{
//		
//		t = a % b;
//		a = b;
//		b = t;
//	}
//
//	if (b == 0)
//	{
//		ret = a;
//	}
//	printf("%d %d的最大公约数为：%d",a1,a2,ret);
//
//	return 0;
//}


//求最大公约数
//int main() {
//	//枚举
//	int a, b;
//	int min;
//
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		min = a;
//	}
//	else
//	{
//		min = b;
//	}
//	int ret = 0;
//	int i;
//	for ( i = 1; i < min; i++)
//	{
//		//分别看a,b能不能被整除，但此时的i还不是最终的结果，需要找到最大公约数
//		//故继续for循环判断
//		if (a % i == 0) {
//			if (b % i == 0)
//			{
//				ret = i;
//			}
//		}
//	}
//	printf("%d和%d的最大公约数是%d.\n", a, b, ret);
//
//	return 0;
//}


////循环求和
////1 - 1/2 + 1 / 3 - 1 / 4 + ... + 1 / n
//int main() {
//	int n;
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//
//	scanf("%d",&n);
//	for ( i = 1; i < n; i++)
//	{
//		sum += sign* 1.0 * 1 / i;
//		sign = -sign;
//	}
//	printf("f(%d)=%f\n",n,sum);
//
//	return 0;
//}



//循环求和
//1+1/2+1/3+1/4+...+1/n
//int main() {
//	int n;
//	int i;
//	double sum = 0.0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += 1.0 / i;//将求出的值转成double类型
//	}
//	printf("f(%d)=%f\n", n, sum);
//
//	return 0;
//}