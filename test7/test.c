#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main() {
	return 0;
}



//int count = 0;
//int Fib(int n)
//{
//	if (n==3) //测试第3个斐波那契数的计算
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
//	int c = 1;//初值赋为1，Fn=1和Fn=2时正确
//	while (n > 2) {//n是计算的次数，第1次和第2次不用算。假设n=4,n--传进来两次即可结束
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
//求第n个斐波那契数
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n",ret);
//	printf("count = %d\n", count);
//	return 0;
//}



//求n的阶乘
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
////n的阶乘的改进
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
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str) 
//{
//	//计算字符串的长度
//	//判断是不是/0，不是就++
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}

//不保存临时变量的情况
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
////把大事化小
//// my_strlen("bit")
////1+my_strlen("it")
////1+1+my_strlen("t")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//
//int main() {
//	char arr[] = "bit";
//	//int len = strlen(arr); //求字符串长度
//	//printf("%d\n", len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数，而是首元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}

//void print(int n) {
//	if (n > 9) {  //至少是2位数
//		print(n / 10);  // 1234/10=123,把123传回打印
//	}
//	printf("%d ",n%10);//打印4
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("请输入数字：");
//	scanf("%d", &num);//1234
//	//递归:函数自己调用自己
//	print(num);
//	//print(1234)  数字取模可以得到4，把1234拆成两部分
//	//print(123) 4  先打印123，再打印4
//	//print(12) 3 4  先打印12 再打印3,4
//	//print(1) 2 3 4 打印1，返回打印其他
//	//每次从函数中拆下一位，函数规模变小了，简化原问题，只有1位数不用拆
//
//	return 0;
//}

//最简单的递归
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