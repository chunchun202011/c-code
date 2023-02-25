#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>  //����bool����
//�ṹָ�봫����
struct point
{
	int x;
	int y;
};

struct point* getStruct(struct point*);
void output(struct point);
void print(const struct point* p);

int main(int argc,char const *argv[]) {
	struct point y={0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y)); //�ұ�ָ�룺�����ķ���ֵ  ��*ȡ������ָ��ָ��Ķ���
	print(getStruct(&y)); //��࣬getStructֱ������print�Ĳ���

	//������ֱ����������ֵ
	getStruct(&y)->x = 0;
	*getStruct(&y) = (struct point){ 1,2 }; //�ṹ�����������ĸ�ֵ *һ�������ķ��ؽ���ǿ��Ե�

	return 0;
}

//��һ��ָ�룬��ָ����ָ�Ķ���������󣬷���ָ��
//�ô����������԰�����������������������
struct point* getStruct(struct point *p) {
	scanf("%d",&p->x);//ȡ��p��ָ��x,y
	scanf("%d",&p->y);
	printf("%d, %d",p->x,p->y);
	return p;//����
	
}

void output(struct point p) {
	print("%d, %d",p.x,p.y);
}

//����Ҫ�޸�ָ�룬ֻ��Ҫ��ֵ�����Լ�const
void print(const struct point *p) {
	printf("%d, %d",p->x,p->y);
}


//struct point
//{
//	int x;
//	int y;
//};
//
//struct point getStruct(void); //����:����һ���ṹ����
//void output(struct point);
//
//int main(int argc,char const *argv[]) {
//	struct point y = { 0,0 };
//	y = getStruct();//�ѷ��صĽṹ����ͨ����ֵ����y������y���Եõ��ں����д���ֵ
//	output(y);
//	return 0;
//}
//
//struct point getStruct(void) {
//	struct point p;
//	scanf("%d",&p.x);
//	scanf("%d",&p.y);
//	printf("%d,%d\n",p.x,p.y); //�������p���ĸ�ֵ��x,yû���κι�ϵ��һ��ʼ�ں��������12 23,������main�����ֱ��0,0
//	return p;
//}
//
//void output(struct point p) {
//	printf("%d,%d\n",p.x,p.y);
//}


//�ṹ�뺯��
//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//
//bool isLeap(struct date d);
//
//int numberOfDays(struct date d);
//
//int main(int argc,char const *argv[]) {
//	struct date today, tomorrow;
//	printf("Enter today's date (mm dd yyyy):");
//	//ȡ��Ա���ȼ�����ȡ��ַ
//	//�������ǽṹ�壬�����˳�Ա�������ٰѵ�ַ���ȥ
//	scanf("%i %i %i",&today.month,&today.day,&today.year);//����3�����ָ�ֵ���ǵò�Ҫ©��ȡ��ַ& 
//
//	if (today.day != numberOfDays(today)) //��������µ����һ��
//	{
//		tomorrow.day = today.day + 1; 
//		tomorrow.month = today.month;
//		tomorrow.year = today.year;
//	}//����������Ǹ������һ��
//	else if(today.month == 12) //12�²��������һ��(else if)
//	{
//		tomorrow.day = 1;
//		tomorrow.month = 1;
//		tomorrow.year = today.year + 1;
//	}
//	else //�¸��µ�1��
//	{
//		tomorrow.day = 1;
//		tomorrow.month = today.month + 1;
//		tomorrow.year = today.year;
//	}
//
//	printf("Tomorrow's date is %i-%i-%i.\n",
//	tomorrow.year,tomorrow.month,tomorrow.day);
//
//	return 0;
//}
//
//int numberOfDays(struct date d) {
//	int days;
//
//	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	if (d.month == 2 && isLeap(d))//����
//	{
//		days = 29;
//	}else {
//		days = daysPerMonth[d.month - 1];//�����0��ʼ��������Ҫ-1
//	}
//
//	return days;//��һ����
//}
//
//
//bool isLeap(struct date d) {
//	bool leap = false;
//
//	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
//	{
//		leap = true;
//	}
//
//	return leap;
//}


//union���ô�
//typedef union {
//	int i;
//	char ch[sizeof(int)];
//} CHI;
//
//int main() {
//	CHI chi;
//	int i;
//	chi.i = 1234;
//	for ( i = 0; i < sizeof(int); i++)
//	{
//		printf("%02hhX",chi.ch[i]);
//	}
//	printf("\n");
//	return 0;
//}



//�ṹ�����
//struct  date
//{
//	int month;
//	int day;
//	int year;
//};
//
//int main() {
//	struct date today;
//	
//	today = (struct date){ 07,31,2014 };
//
//	struct date day;
//
//	day = today;
//	day.year = 2015;
//	
//	struct date* pDate = &today;
//	
//	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
//	printf("The day's date is %i-%i-%i.\n", day.year, day.month, day.day);
//
//	printf("address of today is %p\n",pDate);
//	return 0;
//}


//�ṹ����
//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//
//int main() {
//	struct date today;
//	
//	today = (struct date){ 07,31,2014 };
//
//	struct date day;
//	
//	day = today;
//	day.year = 2015;
//
//	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
//	printf("The day's date is %i-%i-%i.\n", day.year, day.month, day.day);
//
//	
//	return 0;
//}

//�ṹ�ĳ�ʼ��
//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//
//int main() {
//	struct date today = { 07,31,2014 };
//	struct date thismoth = { .month = 7,.year = 2014 };
//
//	printf("This month is %i-%i-%i.\n", today.year, today.month, today.day);
//	printf("This month is %i-%i-%i.\n",thismoth.year,thismoth.month,thismoth.day);
//	return 0;
//}


//struct date {
//    int month;
//    int day;
//    int year;
//}; //����һ�ֽṹ����
//
//int main() {
//    struct date today; //�ṹ����
//    today.month = 07;
//    today.day = 31;
//    today.year = 2014;
//
//    printf("Today's date is %i-%i-%i.\n",
//        today.year,today.month,today.day);
//
//    return 0;
//}
