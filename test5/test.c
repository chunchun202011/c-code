#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//����goto�Ĺػ�����whileѭ��
int main() {
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - ִ��ϵͳ����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//goto�����ȷ�÷�
//�ػ�����
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺>");
//	scanf("%s", input);
//	if (strcmp(input,"������") == 0)//�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

// goto����
//int main() {
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//goto��ѭ��
//int main() {
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}


//��������Ϸ
//1.���Ի��������һ�������
//2.������
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
//	printf("������\n");
//	//��ʱ����������������������ʼ��
//	//time_t time()
//	//1.����һ�������
//	// time_t time(time_t*timer)
//	//time_t
//	ret = rand()%100+1; //����0-100������ģ100����������100�ڣ�
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//�ڹ�����ֻ��Ҫ����һ�μ��ɣ���ҪƵ������
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�žų˷���
//int main() {
//	int i = 0;
//	int j = 0;
//	//ȷ����ӡ9��
//	for ( i = 1; i <= 9; i++)
//	{
//		//��ӡ1��
//		for (j = 1; j <= i; j++) {
//			//%2d:��ӡ2λ�����Ҷ���
//			//%-2d:��ӡ2λ���������
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��10�����������ֵ
//int main() {
//	int arr[] = { -1,2,3,4,5,6,7,8,9,10 };
//	//int max = 0;//���ֵ,����������ֵ����Ϊȫ�Ǹ����Ļ�0Ϊ���ֵ
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


//�������:����1/1-1/2+1/3-1/4+1/5...+1/99-1/100
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

//�������9������9�ı���
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100;i++) {
//		if (i % 10 == 9) {	//��9��β��10������
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9) {	//��9������10������
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
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2) {
//	//for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		// 2.������֮ǰ
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
//		//1.�Գ���
//		//����2 --> i-1������
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
		//�ж�year�ܷ�Ϊ����
		//1.�ܱ�4�������Ҳ��ܱ�100����������
		//2.�ܱ�400����������
	//	if (year % 4 == 0 && year % 100 != 0) {
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0)//Ҫ��else if���������������Ǹ������Ļ��ظ�
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
//	printf("һ����%d������", count);
//	return 0;
//}


//�����Լ����շת�����
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n) { //!=0,����Ϊ��
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//��ӡ1-100������3�ı���������
//int main() 
//{
//	printf("��ӡ1-100������3�ı���������");
//	int i = 1;
//	for ( i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�������������С����
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d,%d,%d", &a, &b, &c);
//	scanf("%d%d%d", &a, &b, &c); //ʲô��û�ӣ�����̨�ɼӿո�
//	//�㷨ʵ��
//	//a�з����ֵ
//	// b��֮
//	//c�з���Сֵ
//
//	if (a < b) {
//		int tmp = a;
//		//������a,b��ֵ��ʹ��a�Ŵ�ֵ
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		//������a,b��ֵ��ʹ��a�Ŵ�ֵ
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		//������a,b��ֵ��ʹ��a�Ŵ�ֵ
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}