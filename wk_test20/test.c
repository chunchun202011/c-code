#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ַ�����������
int main(int argc,char const *argv[]) {
	char s[] = "hello";
	char* p = strchr(s, 'l');
	char c = *p;//����ǰ��һ�Σ���c��ʱ��*p
	*p = '\0';
	//char* t = (char*)malloc(strlen(p) + 1); //��p�Ժ�����ж�����������ȥ������һ����ô��Ŀռ�Ϊt
	char* t = (char*)malloc(strlen(s) + 1);
	//strcpy(t, p);//��p�Ķ�������tȥ
	strcpy(t, s);
	printf("%s\n",t);
	free(t);//��malloc��ֵ�ͷ�
	return 0;
}


//stcpy
//char* mycpy(char* dst, const char* src) {
//	
//	//����汾
//	//int idx = 0;//src�ߵڼ�����dst�ߵڼ���
//	//while (src[idx] != '\0')
//	//��whileֱ��д�����£�
//	//while (src[idx]) //��ʾ������0����˼
//	//{
//	//	dst[idx] = src[idx];
//	//	idx++;
//	//}
//	//dst[idx] = '\0';
//
//
//	//ָ��汾
//	//��¼һ��ԭ����ָ��λ�ã�����Ҫ����ԭ����dst��
//	char* ret = dst;
//	//while (*src != '\0')
//	//{
//	//	*dst = *src;
//	//	dst++;
//	//	src++;
//	//}
//
//	while (*src)
//	{
//		*dst++ = *src++;
//	}
//
//	*dst = '\0';
//	
//	return ret;
//}
//
//int main(int argc,char const *argv[]) {
//	char s1[] = "Abc";
//	char s2[] = "abc";
//	strcpy(s1, s2);
//	return 0;
//}



//�Զ���cmp
// д������ָ�������++,ֱ����ָ��ȡֵ
//int mysmp(const char *s1, const char *s2) {
//	while (*s1 == *s2 && *s1 != '\0') //��ȵ�ʱ����ָ��++
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2; //����ȵ�ʱ��return
//}



// д��һ
//int mycmp(const char *s1,const char *s2) {
//	int idx = 0;
//	while (s1[idx] == s2[idx] && s1[idx] != '\0')
//	{
//
//		//���԰�whileѭ��������һ���������whileѭ��������
//	//while (1)
//	//{
//		//if (s1[idx] != s2[idx]) {
//		//	break;
//		//}
//		//else if(s1[idx] == '\0')
//		//{
//		//	break;
//		//}
//		idx++;
//	}
//	return s1[idx] - s2[idx];
//}

//int main() {
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	//printf("%d\n",s1==s2);//���������Ƚϣ���Զ�ǲ���ͬ�ģ��Ƚϵ�����������ĵ�ַ
//	printf("%d\n",mycmp(s1,s2));
//	printf("%d\n",'a' - 'A');
//
//	return 0;
//}


//int main() {
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	//printf("%d\n",s1==s2);//���������Ƚϣ���Զ�ǲ���ͬ�ģ��Ƚϵ�����������ĵ�ַ
//	printf("%d\n",strcmp(s1,s2));
//	printf("%d\n",'a' - 'A');
//
//	return 0;
//}


//size_t mylen(const char* s) {
//	int idx = 0; //index
//	//��֪�������ж��whileѭ��
//	while (s[idx] != '\0') //�������±겻����\0
//	{
//		idx++;//indexָ����һ��
//
//	}
//	return idx;
//}
//
//int main() {
//	char line[] = "Hello";
//	//printf("strlen=%lu\n",strlen(line));//strlen=5
//	printf("strlen=%lu\n", mylen(line)); //strlen=5
//	printf("sizeof=%lu\n", sizeof(line));//sizeof=6,�����и���б��0
//	return 0;
//}


//size_t��sizeof���������صĽ������
//size_t mylen(const char* s) {
//	int cnt = 0;
//	int idx = 0; //index
//	//��֪�������ж��whileѭ��
//	while (s[idx] != '\0') //�������±겻����\0
//	{
//		idx++;//indexָ����һ��
//		cnt++;
//	}
//	return cnt;
//}
//
//int main(){
//	char line[] = "Hello";
//	//printf("strlen=%lu\n",strlen(line));//strlen=5
//	printf("strlen=%lu\n", mylen(line)); //strlen=5
//	printf("sizeof=%lu\n", sizeof(line));//sizeof=6,�����и���б��0
//	return 0;
//}
