#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//getchar()的用法
int main() {
	int ch = 0;
	//不加ctrl+z:单个单个字符地获取，不会停
	//ctrl+Z:才可以停
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}




//int main() {
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}

	//while (i <= 10) {
	//	if (i == 5)
	//		break;//结束循环，输出1234
	//	printf("%d", i);
	//	i++;
	//}
	//while (1)
	//{
		//printf("hehe\n");
	//}
	//return 0;
	

//}


//switch允许嵌套使用
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//switch多输出一致
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("周末");
//		break;
//	default:
//		printf("输出错误！");
//	}
//
//	return 0;
//}


//switch判断星期几
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}



//if-else语句
//多情况判断繁琐
//int main() {
//	//if-else
//	int day = 0;
//	scanf("%d",&day);//输入的值放在这个位置
//	if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");
//	else if (5 == day)
//		printf("星期5\n");
//	else if (6 == day)
//		printf("星期6\n");
//	else if (7 == day)
//		printf("星期天\n");
//	return 0;
//}


//int main() {

	//判断是否奇数
	//int num = 5;
	//if (num % 2 == 0) {
	//	printf("num=%d是偶数\n", num);
	//}
	//else
	//{
	//	printf("num=%d是奇数\n", num);
	//}

	////输出0-100之间的奇数
	////方式二
	//int i = 1;
	//while (i <= 100) {
	//	printf("%d ", i);
	//	i += 2;
	//}



	//方式一
	// int i =0;
	//while (i<=100)
	//{
		//if (i % 2 == 1) {
			//printf("%d ",i);
		//}
		//i++;
	//}

	
	//int num = 4;
	//if (5 == num) {
		//printf("hehe\n");
	//}
	//if (num = 5) {	//  =赋值（==才是判断相等）
	//	printf("hehe\n");//可以打印hehe
	//}


	//int a = 0;
	//int b = 2;
	//if (a == 1) {
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//}


	//输出语句不止一条时要用括号括起来
	//int age = 10;
	//if (age < 18) {
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("长寿");
	//}


	//多分支写法二
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("长寿");
	//}


	//多分支写法一
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("长寿");

	//双分支语句
	//if (age < 18)
		//printf("未成年\n");
	//else
		//printf("成年\n");
	

	//单分支语句
	//if (age < 18)
		//printf("未成年\n");
	//return 0;
//}