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

//�Ƚ�3������С
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


//���ű��ʽ
//int main() {
//	int i;
//	i = 3 + 4, 5 + 6;
//
//	printf("%d\n",i);
//
//	return 0;
//}

////��·�����
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
//	t = 2; //t��������һ�����������Թ���������,bool�������һ������������true
//	printf("%d\n",b);//1
//	return 0;
//}

//�׳�
// forѭ��
//int main() {
//	int n;
//
//	scanf("%d", &n);
//	int fact = 1;
//
//	int i = n;//��i�ݴ�
//	//for ( i = 2; i <= n; i++)
//	//{
//	//	fact *= i;
//	//}
//	
//	//��������ѭ��
//	for (; n > 1; n--)
//	{
//		fact *= n;
//	}
//
//	printf("%d!=%d\n",i,fact);
//
//	return 0;
//}


//�׳ˣ�whileѭ��
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



//�жϼ�λ��
// do-whileѭ��
//int main() {
//	int x;
//	scanf("%d\n", &x);
//	int n = 0;
//	do
//	{
//		x /= 10;
//		n++;
//	} while (x>0); //С��do-while����ķֺ�
//	printf("%d\n", n);
//	return 0;
//}

//whileѭ��
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
//		x /= 10;//��������ֵ��ԭ����x
//		printf("x=%d,n=%d\n", x, n);
//	}
//	printf("%d\n", n);
//
//	return 0;
//}


// if���
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
//	//������ĳ���д���ǲ��裬���ǹ�ϵ
//	int x;
//	int n = 1;
//
//	scanf("%d", &x);
//
//	//�Ӹߴ������жϣ��ʹ����Ѿ������˸ߴ��ĺ��壨��>99�Ѿ��������ж��������<1000��
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

//�жϳɼ�
//int main() {
//	const int PASS = 60;
//	int score;
//
//	printf("������ɼ���");
//	scanf("%d", &score);
//
//	printf("������ĳɼ���%d.\n",score);
//	if (score < PASS)
//	{
//		printf("���ź�������ɼ�û�м���");
//	}
//	else
//	{
//		printf("ף���㣬����ɼ������ˡ�");
//	}
//	printf("�ټ�\n");
//	return 0;
//}


//�Ƚ��������Ĵ�С
// ����3
//int main() {
//	int a, b;
//	int max = 0;
//	
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//
//	max = b;
//	if (a > b)
//	{
//		max = a;
//	}
//
//	printf("����Ǹ�����%d\n",max);
//
//	return 0;
//}

// ����2
//int main() {
//	int a, b;
//	int max = 0;
//
//	printf("����������������");
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
//	printf("����Ǹ���%d\n",max);
//
//	return 0;
//}


//����1
//int main() {
//	int a, b;
//	
//	printf("����������������");
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
//	printf("����Ǹ���%d\n",max);
//	return 0;
//}

//int main() {
//	const int MINOR = 35; //��������
//	int age = 0;
//
//	printf("������������䣺");
//	scanf("%d", &age);
//
//	printf("���������%d�ꡣ\n",age);
//
//	if (age < MINOR)
//	{
//		printf("���������õģ�");
//	}
//
//	printf("�����������ľ������磬�ú���ϧ�ɡ�\n");
//	return 0;
//}

//���������
//int main() {
//	//��ʼ��
//	int price = 0;
//	int bill = 0;
//	//����Ʊ��ͽ��
//	printf("�������");
//	scanf("%d", &price);
//	printf("������Ʊ�棺");
//	scanf("%d",&bill);
//	//��������
//	if (bill > price) {
//		printf("Ӧ��������%d\n", bill - price);
//	}
//	else
//	{
//		printf("���Ǯ����\n");
//	}
//	return 0;
//}


//��ϵ������
//int main() {
//	printf("%d\n",5==3); //0
//	printf("%d\n", 5 > 3);//1
//	printf("%d\n", 5 <= 3);//0
//	return 0;
//}

//����ʱ���ж���䣩
//int main() {
//	int hour1, minute1;
//	int hour2, minute2;
//
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//
//	int ih = hour2 - hour1;
//	int im = minute2 - minute1;
//	if (im <0) //���������Ľ��Ϊ��ʱ��˵��Сʱ��λ��Сʱ-1
//	{
//		im = 60 + im;
//		ih--;
//	}
//	printf("ʱ�����%dСʱ%d�֡�\n",ih,im);
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