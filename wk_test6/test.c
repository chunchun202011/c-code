#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ɢ�м��㣺ͳ��ÿ�����ֳ��ֵĴ���
int main() {
	const int number = 10;
	int x;
	int count[10]; //int count[number];//ONLY C99
	int i;
	
	//��ʼ�����飺���鲻��õ��Զ��ĳ�ʼֵ����Ҫ��ʼ������ʹ��
	for ( i = 0; i < 10; i++)
	{
		count[i] = 0;
	}
	scanf("%d", &x);
	
	while (x != -1)
	{
		if (x >= 0 && x <= 9) {
			count[x]++; //������Ӧ�������ö�Ӧ�ļ�������1
		}
		scanf("%d", &x);
	}
	//�����������
	for ( i = 0; i < 10; i++)
	{
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}


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