#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//getchar()���÷�
int main() {
	int ch = 0;
	//����ctrl+z:���������ַ��ػ�ȡ������ͣ
	//ctrl+Z:�ſ���ͣ
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}




//int main() {
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}

	//while (i <= 10) {
	//	if (i == 5)
	//		break;//����ѭ�������1234
	//	printf("%d", i);
	//	i++;
	//}
	//while (1)
	//{
		//printf("hehe\n");
	//}
	//return 0;
	

//}


//switch����Ƕ��ʹ��
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//switch�����һ��
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��ĩ");
//		break;
//	default:
//		printf("�������");
//	}
//
//	return 0;
//}


//switch�ж����ڼ�
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}



//if-else���
//������жϷ���
//int main() {
//	//if-else
//	int day = 0;
//	scanf("%d",&day);//�����ֵ�������λ��
//	if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	else if (4 == day)
//		printf("����4\n");
//	else if (5 == day)
//		printf("����5\n");
//	else if (6 == day)
//		printf("����6\n");
//	else if (7 == day)
//		printf("������\n");
//	return 0;
//}


//int main() {

	//�ж��Ƿ�����
	//int num = 5;
	//if (num % 2 == 0) {
	//	printf("num=%d��ż��\n", num);
	//}
	//else
	//{
	//	printf("num=%d������\n", num);
	//}

	////���0-100֮�������
	////��ʽ��
	//int i = 1;
	//while (i <= 100) {
	//	printf("%d ", i);
	//	i += 2;
	//}



	//��ʽһ
	// int i =0;
	//while (i<=100)
	//{
		//if (i % 2 == 1) {
			//printf("%d ",i);
		//}
		//i++;
	//}

	
	//int num = 4;
	//if (5 == num) {
		//printf("hehe\n");
	//}
	//if (num = 5) {	//  =��ֵ��==�����ж���ȣ�
	//	printf("hehe\n");//���Դ�ӡhehe
	//}


	//int a = 0;
	//int b = 2;
	//if (a == 1) {
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//}


	//�����䲻ֹһ��ʱҪ������������
	//int age = 10;
	//if (age < 18) {
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����\n");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age < 90)
	//		printf("����\n");
	//	else
	//		printf("����");
	//}


	//���֧д����
	//if (age < 18)
	//	printf("δ����\n");
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����\n");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age < 90)
	//		printf("����\n");
	//	else
	//		printf("����");
	//}


	//���֧д��һ
	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 50)
	//	printf("׳��\n");
	//else if (age >= 50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("����");

	//˫��֧���
	//if (age < 18)
		//printf("δ����\n");
	//else
		//printf("����\n");
	

	//����֧���
	//if (age < 18)
		//printf("δ����\n");
	//return 0;
//}