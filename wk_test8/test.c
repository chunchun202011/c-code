#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//C����ֻ�ܴ�ֵ�����ܴ�����������ʹ����һ��
void swap(int a,int b);

int main() {
	int a = 5;
	int b = 6;

	swap(a, b);

	printf("a =%d b=%d\n",a,b);

	return 0;
}

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}


////���Ͳ�ƥ��
//void cheer(int i) {
//	printf("cheer %d\n", i);
//}
//
//int main() {
//	cheer(2.4);
//	return 0;
//}


//main����д�ں���ǰ����ȷ�÷�
//void sum(int begin, int end); //������ԭ������
////void sum(int , int ); 
////void sum(int a, int b);
//
//int main() {
//	sum(1, 10); // int sum(int ,int)
//	sum(20, 30);
//	sum(35, 45);
//	return 0;
//}
//
////�����Ķ���
//void sum(int begin,int end) { 
//	int i;
//	int sum = 0;
//	for ( i = begin; i <= end; i++)
//	{
//		sum += i;
//	}
//	printf("%d��%d�ĺ���%d\n",begin,end,sum);
//}


//int max(int a, int b) {
//	//int ret
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//	//return ret;
//}
//int main() {
//	int a, b, c;
//	a = 5;
//	b = 6;
//	c = max(10,12);
//	c = max(a, b);
//	c = max(c, 23);
//	max(23, 45);
//	printf("%d\n",max(a,b));
//	return 0;
//}


//��ͺ���
//void sum(int begin,int end) 
//{
//	int i;
//	int sum = 0;
//
//	for ( i = begin; i <end; i++)
//	{
//		sum += i;
//	}
//	printf("%d��%d�ĺ���%d\n",begin,end,sum);
//}
//
//int main() 
//{
//	sum(1, 10);
//	sum(20, 30);
//	sum(35, 45);
//
//	return 0;
//}


//int isPrime(int i) {
//	int ret = i;
//	int k;
//	for ( k = 2; k < i-1; k++)
//	{
//		if (i % k == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//
////����
//int main() {
//	int m, n;
//	int sum = 0;
//	int cnt = 0;
//	int i;
//
//	scanf("%d %d",&m,&n);
//
//	if (m == 1) m = 2;
//	for ( i = m; i <=n; i++)
//	{
//		if ( isPrime(i) ) {
//			sum += i;
//			cnt++;
//		}
//	}
//	printf("%d %d\n",cnt,sum);
//	return 0;
//}


//ɢ�м��㣺ͳ��ÿ�����ֳ��ֵĴ���
//int main() {
//	const int number = 10;
//	int x;
//	int count[10]; //int count[number];//ONLY C99
//	int i;
//	
//	//��ʼ�����飺���鲻��õ��Զ��ĳ�ʼֵ����Ҫ��ʼ������ʹ��
//	for ( i = 0; i < 10; i++)
//	{
//		count[i] = 0;
//	}
//	scanf("%d", &x);
//	
//	while (x != -1)
//	{
//		if (x >= 0 && x <= 9) {
//			count[x]++; //������Ӧ�������ö�Ӧ�ļ�������1
//		}
//		scanf("%d", &x);
//	}
//	//�����������
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d:%d\n", i, count[i]);
//	}
//	return 0;
//}


//����ȷ����������ƽ����
//int main() {
//	int x;
//	double sum = 0.0;
//	int cnt=1;
//	printf("���������ֵ�����");
//	scanf("%d",&cnt);
//	if (cnt > 0)
//	{
//		//int number[cnt]; //C99 ONLY
//		scanf("%d",&x);
//		while (x != -1)
//		{
//			number[cnt] = x;
//			sum += x;
//			cnt++;
//			scanf("%d",&x);
//		}
//	}
//	return 0;
//}

////��μ�¼�ܶ���
//int main() {
//	int x;
//	double sum = 0;
//	int cnt = 0;
//	int number[100];//����
//	scanf("%d",&x);
//	while (x != -1)
//	{
//		number[cnt] = x; //��x��ֵ��������ĳ����Ԫ
//		//���Դ���
//		{
//			int i = 0;
//			printf("%d\t",cnt); //���cnt��ֵ
//			for  (i = 0; i <=cnt; i++)
//			{
//				printf("%d\t",number[i]); //�۲������ֵ����ô�仯��
//			}
//			printf("\n");
//		}
//		sum += x;
//		cnt++; //���ϵ���
//		scanf("%d", &x);
//	}
//	if (cnt > 0)
//	{
//		printf("%f\n",sum/cnt);
//		int i;
//		for ( i = 0; i < cnt; i++) //������������
//		{
//			if (number[i] > sum / cnt) { //�ѷ������������ҳ���
//				printf("%d\n",number[i]);
//			}
//		}
//	}
//	return 0;
//}


//������������ƽ����
//int main() {
//	int x;
//	double sum = 0;
//	int cnt = 0; //������������ж��ٸ�
//	scanf("%d",&x);
//	while (x != -1) //�������������-1ʱ
//	{
//		sum += x; 
//		cnt++;
//		scanf("%d", &x);
//	}
//
//	if (cnt > 0)
//	{
//		printf("%f\n",sum/cnt);
//	}
//	return 0;
//}