#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//�ṹ��
// char int double ...
// �� - ���Ӷ���
// ����+���+����+���֤����...
// ����+����+������+����+���...
//���Ӷ��� -- �ṹ�� -- �����Լ����������һ������
struct Book {
	char name[20];//C���Գ������
	short price;//55
};  //�ֺŲ���ȱ�٣������ṹ��Ľ���


int main() {
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������" ,55};
	//��Ҫ�޸�����ΪC++���ַ�������
	// ��ֱ��b1.name="C++"��������
	//����������  ����ʲô
	strcpy(b1.name, "C++");//strcpy - string copy - �ַ�����������Ҫ��ͷ�ļ�string.h
	printf("%s\n", b1.name);

	struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	//�ṹ�����.��Ա
	//�ṹ��ָ�� -> ��Ա
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//��
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	//printf("������%s\n",b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	return 0;
}