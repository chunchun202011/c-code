#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//����ʱ���ж���䣩
int main() {
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);

	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im <0) //���������Ľ��Ϊ��ʱ��˵��Сʱ��λ��Сʱ-1
	{
		im = 60 + im;
		ih--;
	}
	printf("ʱ�����%dСʱ%d�֡�\n",ih,im);
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


//��ƽ��ֵ
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double c = (a + b) / 2.0;
//	printf("%d��%d��ƽ��ֵΪ��%f\n", a, b, c);
//	return 0;
//}


//����ʱ���
// �ο���
//int main() {
//	//����ʱ���
//	int hour1, minute1;
//	int hour2, minute2;
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//	int t1 = hour1 * 60 + minute1;
//	int t2 = hour2 * 60 + minute2;
//	int t = t2 - t1;
//	printf("����ʱ���ʱ���Ϊ��%dСʱ%d�֡�", t / 60, t % 60);
//	return 0;
//
//}

//my-homework
//int main() {
//	//����ʱ���
//	int hour1 = 0;
//	int hour2 = 0;
//	int minute1 = 0;
//	int minute2 = 0;
//	printf("%������t1��Сʱ,���ӣ�");
//	scanf("%d %d", &hour1, &minute1);
//	printf("%������t2��Сʱ,���ӣ�");
//	scanf("%d %d", &hour2, &minute2);
//	int t1 = hour1 * 60 + minute1;
//	int t2 = hour2 * 60 + minute2;
//	int t = t2 - t1;
//	printf("����ʱ���ʱ���Ϊ��%dСʱ %d����",t/60,t%60);
//	return 0;
//
//}