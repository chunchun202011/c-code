#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

/**
 * �ж�����
 * 
 * \return 
 */
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

//����������
int main(void) {
	const int number = 10;
	int prime[10] = { 2 };
	int count = 1;
	int i = 3;

	//while֮ǰ���һ����ͷ
	{
		int i;
		printf("\t\t");
		for (i = 0; i < number; i++)
		{
			printf("%d\t", i);
		}
		printf("\n");
	}

	while (count < number)
	{
		if (isPrime(i,prime,count)) {
			prime[count++] = i;
		}

		//�������������
		//�ڳ�����ƽ���޹ʼ�������ţ�����Ϊ�˵���
		{
			printf("i=%d \tcnt=%d\t",i,count);
			int i;
			for ( i = 0; i < number; i++)
			{
				printf("%d\t",prime[i]);
			}
			printf("\n");
		}
		i++;
	}

	for ( i = 0; i < number; i++)
	{
		printf("%d",prime[i]);
		if ((i + 1) % 5) printf("\t");
		else	printf("\n");
	}
	return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {
	int ret = 1;
	int i;
	for ( i = 0; i < numberOfKnownPrimes; i++)
	{
		if (x % knownPrimes[i] == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}


//int main() {
//	int x;
//	scanf("%d",&x);
//	if (isPrime(x))
//	{
//		printf("%d������\n",x);
//	}
//	else {
//		printf("%d��������\n", x);
//	}
//	return 0;
//}


//ѭ��sqrt(x)��
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1 || (x % 2 == 0 && x != 2)) //1����������2���������ų�2�����
//	{
//		ret = 0;
//	}
//
//	for ( i = 3; i < sqrt(x); i+=2)
//	{
//		if (x % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return 0;
//}


//ȥ��ż������3��x-1��ÿ��+2
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	//���ж��ǲ���ż�������x��ż��������
//	if (x == 1 || (x % 2 == 0 && x != 2))
//		ret = 0;
//	
//
//	//iֻ�ж���������� Ҫѭ��(n-3)/2+1��
//	//��n�ܴ�ʱ����n/2��
//	for (i = 3; i < x; i += 2)
//	{
//		if (x % i == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}


//��2��x-1�����Ƿ��������
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1)
//	{
//		ret = 0;
//	}
//	//��2��x-1�����Ƿ��������
//	for ( i = 2; i < x; i++)
//	{
//		if (x % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}



/**
 * �ҳ�key������a�е�λ��
 * @param key ҪѰ�ҵ�����
 * @param a ҪѰ�ҵ�����
 * @param length ����a�ĳ���
 * 
 * \return ����ҵ�����������a�е�λ��;����Ҳ����򷵻�-1
 */
//int search(int key, int a[], int length);
//
//int main() {
//	int a[] = {2,4,6,7,1,3,5,7,9,11,13,23,14,32};
	//int a[13] = { 2 };
	//��ʼ������һ
	//int a[13] = {0};
	//��ʼ��������
	//for ( i = 0; i < 13; i++)
	//{
	//	a[i] = 0;
	//}


	//int a[] = { [1] = 2,4,[5] = 6 };
	//int i = 0;
	//printf("%lu\n",sizeof(a)); //����a�Ĵ�С��24
	//printf("%lu\n", sizeof(a[0]));//a��һ����Ԫ��С��4
	//printf("%lu\n", sizeof(a) / sizeof(a[0])); //Ԫ�صĸ�����24 / 4 = 6

	//for ( i = 0; i < sizeof(a) / sizeof(a[0]); i++) //���������С����
	//{
	//	printf("%d\t",a[i]);
	//}
	//printf("\n");


//	int x;
//	int loc;
//	printf("������һ�����֣�");
//	scanf("%d",&x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc != -1)
//	{
//		printf("%d�ڵ�%d��λ����\n",x,loc);
//	}
//	else {
//		printf("%d������\n",x);
//	}
//	
//	return 0;
//}
//
//int search(int key,int a[],int length) { //������Ϊ��������
//	int ret = -1;
//	int i;
//	for ( i = 0; i < length; i++)
//	{
//		if (a[i] == key) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
