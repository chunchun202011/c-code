#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/**
 * �ҳ�key������a�е�λ��
 * @param key ҪѰ�ҵ�����
 * @param a ҪѰ�ҵ�����
 * @param length ����a�ĳ���
 * 
 * \return ����ҵ�����������a�е�λ��;����Ҳ����򷵻�-1
 */
int search(int key, int a[], int length);

int main() {
	//int a[] = {2,4,6,7,1,3,5,7,9,11,13,23,14,32};
	//int a[13] = { 2 };
	//��ʼ������һ
	//int a[13] = {0};
	//��ʼ��������
	//for ( i = 0; i < 13; i++)
	//{
	//	a[i] = 0;
	//}


	int a[] = { [1] = 2,4,[5] = 6 };
	int i = 0;
	printf("%lu\n",sizeof(a)); //����a�Ĵ�С��24
	printf("%lu\n", sizeof(a[0]));//a��һ����Ԫ��С��4
	printf("%lu\n", sizeof(a) / sizeof(a[0])); //Ԫ�صĸ�����24 / 4 = 6

	for ( i = 0; i < 6; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");


	//int x;
	//int loc;
	//printf("������һ�����֣�");
	//scanf("%d",&x);
	//loc = search(x, a, sizeof(a) / sizeof(a[0]));
	//if (loc != -1)
	//{
	//	printf("%d�ڵ�%d��λ����\n",x,loc);
	//}
	//else {
	//	printf("%d������\n",x);
	//}
	
	return 0;
}

int search(int key,int a[],int length) { //������Ϊ��������
	int ret = -1;
	int i;
	for ( i = 0; i < length; i++)
	{
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}
