#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//��ַ����
// ��char��ַ
int main() {
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	//printf("ch = %c\n", ch);
	printf("%d\n", sizeof(pc));//pc��ַ�Ĵ�С
	return 0;
}

//��int��ַ
//int main() {
//	int a = 10;//4���ֽ�
//	//ָ���������ŵ�ַ
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20; //*p - �����ò�����,��ֵ��������ֵ����ַp�����õĶ���
//	printf("a = %d\n", a);
//	return 0;
//}


//#define�����ʶ������
//#define MAX 100
//#define ���Զ���� - ������
// 
// ��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)	//��˼��ǰ�涨��ĺ�ᱻ�滻Ϊ�������
////������ʵ��
// int Max(int x, int y) {
//	 if (x > y)
//		 return x;
//	 else
//		 return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}


//3��static���κ���
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//1��static���ξֲ�����
//�ֲ��������������ڱ䳤(�����õ�main������)
//2��static����ȫ�ֱ���
//�ı��˳������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//int main() {
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

// static int a��ʹ��
//void test() {
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main() {
//	int i = 0;
//	while (i< 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//typedef:�����ض���
//int main() {
//	//�����������¶���
//	//typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//�ؼ���
//int main() {
//	register int a = 10; //�����a����ɼĴ�������
//	int b = 10;
//	b = -2;
//	//int����ı������з��ŵ�
//	// signed int;
//	// unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	return 0;
//}

//int Add(int x,int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//�������ò�����
//	return 0;
//}


//���������
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//���ʽ���Ϊ�棬����a��Ϊ�ٷ���b
//	printf("max = %d\n", max);
//	return 0;
//}


//�߼������
//int main() {
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a�Ƿ�0��b�Ƿ�0����Ϊ�棬��c=1
//	printf("c = %d\n", c);
//	a = 0;
//	b = 5;
//	c = a && b;
//	printf("c = %d\n", c);//��ʱa=0,Ϊ�٣�һ�����,c=0
//	c = a || b;
//	printf("c = %d\n", c);//��ʱa=0Ϊ�٣�bΪ�棬һ������,c=1
//	return 0;
//}


//int main() {
//	int a = (int)3.14; //double --> int
//	printf("a=%d", a);
//	return 0;
//}


//ǰ�á�����++  --
//int main() {
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//printf("a = %d b = %d\n", a, b);//11  10,��ʹ��b��b����Ϊ10��a++��Ϊ11
//	//int b = ++a; //ǰ��++����++����ʹ��
//	//printf("a = %d b = %d\n", a, b);//11  11����++��ֵb���11��++a��Ϊ11
//	//int b = a--;//����--����ʹ�ã���--
//	//printf("a = %d b = %d\n", a, b);//9  10,��ʹ��b��b����Ϊ10��a--��Ϊ9
//	int b = --a;//ǰ��--����ʹ�ã���--
//	printf("a = %d b = %d\n", a, b);//9  9,��--��ֵb��b��Ϊ9��a--��Ϊ9
//	return 0;
//}


//ȡ�������
//int main() {
//	int a = 0;//���ͣ�4���ֽڣ�32��bitλ
//	int b = ~a;//b���з��ŵ�����
//	//~ ���������ƣ�λȡ��
//	//1010
//	//0101
//	//a:00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//��λȡ���÷��룬����+1�ò��룬��һλ�Ƿ���λ����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//��b=-1
//
//	printf("%d\n",b);//ʹ�õģ���ӡ�����������ԭ��,-1
//	return 0;
//}

//���ֵ
//int Max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	
//}


//ת������
//int main() 
//{
//	printf("%d\n", strlen("c:\test\121"));//7 \ddd 8����תʮ���� 
//	return 0;
//}

//int main() {
//	int arr[10]; //����һ�����10���������ֵ�����
//
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//}

//�Զ���ӷ�
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	printf("sum= %d\n", sum);
//	sum = Add(a, b);
//	printf("sum= %d\n", sum);
//	return 0;
//
//}

//whileѭ����2w�д���
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000) 
//	{
//		printf("��һ�д���: %d\n",line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("��offer\n");
//	}
//	return 0;
//}

//�򵥵�if-else���
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input); //1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//char���ͣ�ת���ַ�
//int main()
//{
//	printf("%c\n", '\32');//char���ͱ����õ�����������
//	//\32 -- 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�  3*8^1+2*8^0 = 26
//	//32 --> 10����  26 --> ��ΪASCII��ֵ������ַ�
//	//382�������У���Ϊ8����0-7
//
//	//����13��\t����
//	printf("%d\n", strlen("c:\test\32\test.c")); //#include <string.h>ͷ�ļ�
//	return 0;
//}

//�ַ���
//int main()
//{
//	//�����ڼ�����ϴ洢ʱ���洢������
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII���룬��Ӧ��ֵ��ASCII��ֵ
//	char arr1[] = "abc";//�ַ�����
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' ,0};//���Ǽ�һ��'\0'
//	//'\0' - 0
//	//'a' - 97
//	//'a' 'b' 'c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen() - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//4.ö�ٳ���
//ö�٣�һһ�о�
//
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ�1��2��3��4��5��6��7
//ö�ٹؼ�-enum
//enum  Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
////�������ﶨ���ö�ٳ����������Ըģ�����ͨ��ö������enum Color���������ı����ǿ��Ըĵ�
//int main()
//{
//	enum Color color = BLUE;//color��һ������
//	color = YELLOW;//color�Ǳ��������Ըĳ�YELLOW
//	//BLUE = 6;//�������ﶨ���ö�ٳ����������Ըģ��ŵ���2
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//3.#define����ı�ʶ������
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//2.��ʶ��
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//����ȫ��
//	//strcpy_s
//	//...
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//1.������
//int main()
//{
//	//const:������
//	//const���εĳ�������num���ܸģ����г����ԣ�������������һ������
//	const int n = 10;//n�Ǳ��������г����ԣ�����n�ǳ�����
//	//int arr[n] = { 0 };//��ʱn�����ã�˵��n�Ǳ���
//	n = 20;//�����޸�ֵ
//
//
//	/*const int num = 4;
//	printf("%d\n",num);
//	num = 8;
//	printf("%d\n", num);*/
//	//���泣����������ֵ
//	//3;
//	// 100;
//	//3.14��//���泣��
//	return 0;
//}