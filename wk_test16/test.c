#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main(int argc,char const *argv[]) {
	char s1[] = "abc";
	char s2[] = "abc ";
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
}

//string.hͷ�ļ����÷�
//int main() {
//	char line[] = "Hello";
//	printf("strlen=%lu\n",strlen(line));//5 5���ַ�
//	printf("sizeof=%lu\n", sizeof(line));//6 ����1��\0 ��ʾ��ռ���ڴ�ռ�
//	return 0;
//}


//�ַ����������Խ�����
//void f(void) {
//	char word[8];
//	char word2[8];
//	scanf("%7s", word);
//	scanf("%7s", word2);
//	printf("%s##%s\n", word, word2);
//}
//
//int main(void) {
//	f();
//	return 0;
//}


//�ַ����������
//int main() {
//	char word[8];
//	char word2[8];
//	scanf("%s",word);
//	scanf("%s",word2);
//	printf("%s##%s\n",word,word2);
//
//	return 0;
//}

//�ַ�������
//int main() {
//	int i = 0;
//	char* s = "Hello World";
//	char* s2 = "Hello World";
//	char s3[] = "Hello World";
//
//	printf("&i=%p\n",&i);
//	printf("s =%p\n",s);
//	printf("s2=%p\n", s2);
//	printf("s2=%p\n", s3);
//	s3[0] = 'B';
//	printf("Here! s3[0]=%c\n",s3[0]);
//
//	return 0;
//}

//Ӣ��Ӣ����׵�ת��
//int main() {
//	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��\
//������\"5 7\" ��ʾ5Ӣ��7Ӣ��");
//	double foot;
//	double inch;
//
//	scanf("%lf %lf",&foot,&inch);
//
//	printf("�����%f�ס�\n",
//		(foot + inch / 12) * 0.3048 );
//
//	return 0;
//}


//�����ַ�
//int main() {
//	//�Ʊ��
//	printf("123\t456\n");
//	printf("12\t456\n");
//	return 0;
//}


//int main() {
//	char c = 'A';
//	c++;
//	printf("%c\n",c);
//
//	return 0;
//}


//���޿ո�����
//int main() {
//	int i;
//	char c;
//	//scanf("%d %c",&i,&c);
//	scanf("%d%c", &i, &c);
//	printf("i=%d,c=%d,c='%c'\n", i, c, c);
//	return 0;
//}


//��int��ֵ����char
//int main() {
//	int i;
//	char c;
//	scanf("%d",&i);//scanfֻ�ܴ���int,���ܴ���char
//	c = i;
//	printf("c=%d\n",c);
//	printf("c='%c'\n", c);
//
//	if (49 == '1')
//	{
//		printf("OK");
//	}
//
//	return 0;
//}


//�ж������Ƿ����
//int main() {
//	char c;
//	char d;
//	c = 1;
//	d = '1';
//	if (c == d)
//	{
//		printf("���\n");
//	}
//	else
//	{
//		printf("�����\n");
//	}
//	printf("c=%d\n",c);
//	printf("d=%d\n", d);
//	return 0;
//}
