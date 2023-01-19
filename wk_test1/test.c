#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//计算时间差（判断语句）
int main() {
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);

	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im <0) //分钟数减的结果为负时，说明小时借位，小时-1
	{
		im = 60 + im;
		ih--;
	}
	printf("时间差是%d小时%d分。\n",ih,im);
	return 0;
}

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