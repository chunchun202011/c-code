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
		sum += 1.0 / i;//�������ֵת��double����
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
//					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",
//						one,two,five,x);
//					goto out;
//				}
//			}
//		}
//	}
//	out:
//	return 0;
//}

//��Ӳ��
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
//					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",
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


//ǰ50������
//int main() {
//	int x;
//	x = 6;
//	int cnt = 0;//��һ��������
//
//	//while (cnt < 50)
//	for(x = 2; cnt < 50; x++)
//	{
//		int i;
//		int isPrime = 1;//x������
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
//		x++;//ע��֮ǰforѭ����x++�Ķ������˴�ҲҪ���ϣ������޷�������
//	}
//	printf("\n");
//
//	return 0;
//}


//��100������
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
//		//ͨ��֤α��֤ʵ����������
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0) { //���Ա�������������������
//				//printf("��������\n");
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


//��������
//int main() {
//	int age = 0;
//	double salary = 4000;
//
//	age = 55;
//	if (age = 0) { //��age��ֵ���ˣ��ĳ�0���Ѵ���if��ֵ�ĳ�0,��0����������
//		salary = salary * 1.2;
//		printf("%f\n", salary);
//	}
//	return 0;
//}


//��������
//int main() {
//	int x;
//	//scanf("%d", &x);
//	x = 700;
//
//	int digit;
//	int ret = 0;
//	//ѭ�����������
//
//	//�����700 -> 7
//	while (x > 0)
//	{
//		digit = x % 10;//��ʾÿһλ
//		//printf("%d",digit);//���ÿһλ
//		ret = ret * 10 + digit; //ԭ���Ľ���������1λ�ټ�digit
//		printf("x = %d,digit = %d,ret = %d\n", x,digit,ret);//����
//		x /= 10;
//	}
//
//	//�����700-->007
//	//while (x > 0)
//	//{
//	//	digit = x % 10;//��ʾÿһλ
//	//	printf("%d",digit);//ѭ����ÿһ�����digit
//	//	ret = ret * 10 + digit; //ԭ���Ľ���������1λ�ټ�digit
//	//	//printf("x = %d,digit = %d,ret = %d\n", x, digit, ret);//����
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
//	printf("���Ѿ������һ��1��100֮�����");
//	do {
//		printf("�²����1��100֮�����:");
//		scanf("%d",&a);
//		count++;
//		if (a > number)
//		{
//			printf("��µ������ˡ�");
//		}
//		else if (a < number) {
//			printf("��µ���С�ˡ�");
//		}
//	} while (a != number);
//	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n",count);//���7�οɲµ�
//	return 0;
//}


//�����
//int main() {
//	srand(time(0));
//	int a = rand();
//	printf("%d\n",a% 100); //ÿ�εõ�һ��100���ڵ������ [0,99]
//
//	return 0;
//}


//��ƽ����
//int main() {
//	int number;
//	int sum = 0;
//	int count = 0;	
//
//	//ֻҪnumber����-1�Ͱ����ӽ���
//	scanf("%d",&number);//ֻ��һ��
//	while(number != -1)
//	{
//		sum += number;
//		count++;
//		scanf("%d", &number);//�����������
//	}
//
//	printf("%f\n",1.0* sum / count);//����������Ǹ�����������1.0
//	
//	return 0;
//}


//ѭ������
//int main() {
//	int n = 3;
//
//	while (n >=0)
//	{
//		n--;
//		printf("%d ", n);
//	}
//	printf("����\n");
//
//	return 0;
//}

//ѭ�����㣺log2 x
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
//		printf("���");
//		break;
//	//case MRN://C99 ONLY,�˴�����
//	case 2:
//		printf("���Ϻ�");
//		break;
//	case 3:
//		printf("���Ϻ�");
//		break;
//	case 4:
//		printf("�ټ�");
//		break;
//	default:
//		printf("����ʲô����");
//		break;
//	}
//	
//	return 0;
//}