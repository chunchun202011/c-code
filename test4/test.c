#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int i = 0;
	char password[20] = {0};
	//char right = "1234";
	//int i = 0;
	
	for ( i = 0;  i < 3;  i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		/*if (password != "1234")
		{
				printf("�������������룡������%d�λ��ᣡ\n",i);
		}
		if(password == "1234")
		{
			printf("������ȷ��");
			break;
		}*/
		if (strcmp(password,"123456") == 0) //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i == 3)
		printf("���������꣡�˳�����\n");
	return 0;
}

//int main() {
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//[a b c \0]
//	// 0 1 2  3
//	// 4-1(3,������0)
//	//4-2���±��0��ʼ�������˺����\0��
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//
//	int right = strlen(arr1)-1;//�±��0��ʼ
//	//ѭ����
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣ1��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ 
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//�۰����
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//˳�����
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//����1 -- n�Ľ׳�
//int main() {
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int total = 1;
//	int sum = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	//����׳˵ĺ�
//	//���¸�ֵ
//	for (i = 1; i < n+1 ; i++)
//	{
//		total = total * i;
//		sum = sum + total;
//	}

	//����д����3�Ľ׳˺�=12,��ȷӦ��9
	//for (n = 1; n <= 3 ; n++)
	//{
	//	for (i = 1; i <= n; i++) {
	//		total = total * i;
	//	}
	//	sum = sum + total;
	//}
	//ÿ�ζ���һ���׳�
	// total = 1*1=1
	// total = 1*1*2=2
	// total = 1*1*2*3=6

	//����׳�
	//for (i = 1; i < n+1; i++) {
		//total = total * i;
	//}


//	printf("�׳�Ϊ��%d", total);
//	printf("�׳˺�Ϊ:%d", sum);
//	return 0;
//}


//do...while()ѭ��
//int main() {
//	//1-10;
//	int i = 1;
//	do
//	{
//		//��ѭ��
//		if (i==5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}


//����2
//int main() {
//	//һ��������
//	int i = 0;
//	int k = 0;
//	//�м����ж���䣬k=0��ֵ�����ʽΪ0�����м��ж����Ϊ0��False,��ִ��
//	//��ֵ��=����ɺ󣬷��ص��ǽ��
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}

	//int x, y;
	//for ( x = 0,y = 0; x < 2 && y <5; ++x,y++)
	//{
		//printf("hehe\n");//����
	//}
	//return 0;
//}



//int main() {
//	//����1
//	//��ѭ��
//	//for (;;) {
//		//printf("hehe\n");
//	//}
//	int i = 0;
//	int j = 0;
//	for (; i < 10;i++) {
//		for ( ;  j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//forǰ�պ�д��
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	//10��ѭ��
//	//10�δ�ӡ
//	//10��Ԫ��
//	//for ( i = 0; i < 10; i++)
//	//{
//		//printf("%d ", arr[i]);
//	//}
//	return 0;
//}



//����д��
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i=5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}


//forѭ��
//�õ�����
//int main() {
//	int i = 0;
//	//��ʼ�� �ж� ����
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) {
//			//break;
//			continue;
//		}
//		printf("%d", i);
//	}
//	return 0;
//}


//forѭ��
//����  ��ʼ�����жϡ������Ĺ�ϵ
//int main() {
//	int i = 0;//��ʼ��
//	while (i < 10) {//�ж�
//		//...
//		i++;//����
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//while�������е�Ӧ��
//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	//��Ϊ�˴���password�����飬�ɱ�ʾ��ַ�����Բ���ȡ��ַ����
//	scanf("%s",password);//�������룬�������password��
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch=getchar()) != '\n')
//	{
//		; //�����
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	//printf("%d\n",'\n');//10 ���Իس�
//	return 0;
//}