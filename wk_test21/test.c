#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>  //引入bool变量
//结构指针传参数
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
	output(*getStruct(&y)); //右边指针：函数的返回值  用*取出函数指针指向的东西
	print(getStruct(&y)); //简洁，getStruct直接做了print的参数

	//还可以直接用它来赋值
	getStruct(&y)->x = 0;
	*getStruct(&y) = (struct point){ 1,2 }; //结构可以做这样的赋值 *一个函数的返回结果是可以的

	return 0;
}

//传一个指针，对指针所指的东西做处理后，返回指针
//好处：将来可以把它串在其他函数变量当中
struct point* getStruct(struct point *p) {
	scanf("%d",&p->x);//取得p所指的x,y
	scanf("%d",&p->y);
	printf("%d, %d",p->x,p->y);
	return p;//返回
	
}

void output(struct point p) {
	print("%d, %d",p.x,p.y);
}

//不需要修改指针，只需要读值，可以加const
void print(const struct point *p) {
	printf("%d, %d",p->x,p->y);
}


//struct point
//{
//	int x;
//	int y;
//};
//
//struct point getStruct(void); //更改:返回一个结构变量
//void output(struct point);
//
//int main(int argc,char const *argv[]) {
//	struct point y = { 0,0 };
//	y = getStruct();//把返回的结构变量通过赋值赋给y，这样y可以得到在函数中传的值
//	output(y);
//	return 0;
//}
//
//struct point getStruct(void) {
//	struct point p;
//	scanf("%d",&p.x);
//	scanf("%d",&p.y);
//	printf("%d,%d\n",p.x,p.y); //在这里对p做的赋值和x,y没有任何关系，一开始在函数中输出12 23,但到了main函数又变回0,0
//	return p;
//}
//
//void output(struct point p) {
//	printf("%d,%d\n",p.x,p.y);
//}


//结构与函数
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
//	//取成员优先级高于取地址
//	//点的左边是结构体，先做了成员变量，再把地址填进去
//	scanf("%i %i %i",&today.month,&today.day,&today.year);//读入3个数字赋值，记得不要漏掉取地址& 
//
//	if (today.day != numberOfDays(today)) //不是这个月的最后一天
//	{
//		tomorrow.day = today.day + 1; 
//		tomorrow.month = today.month;
//		tomorrow.year = today.year;
//	}//其他情况都是该月最后一天
//	else if(today.month == 12) //12月并且是最后一天(else if)
//	{
//		tomorrow.day = 1;
//		tomorrow.month = 1;
//		tomorrow.year = today.year + 1;
//	}
//	else //下个月第1天
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
//	if (d.month == 2 && isLeap(d))//闰年
//	{
//		days = 29;
//	}else {
//		days = daysPerMonth[d.month - 1];//数组从0开始数，所以要-1
//	}
//
//	return days;//单一出口
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


//union的用处
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



//结构运算符
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


//结构运算
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

//结构的初始化
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
//}; //声明一种结构类型
//
//int main() {
//    struct date today; //结构变量
//    today.month = 07;
//    today.day = 31;
//    today.year = 2014;
//
//    printf("Today's date is %i-%i-%i.\n",
//        today.year,today.month,today.day);
//
//    return 0;
//}
