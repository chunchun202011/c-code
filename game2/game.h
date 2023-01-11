#define  _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10 //注：定义的时候不要有分号

#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);//要接收传进来的mine，但真正展示的是row和col
void SetMine(char board[ROWS][COLS], int rows,int cols);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);