#pragma once
#define ROW 9
#define COL 9
#define EASY_COUNT 10

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set);//≥ı ºªØ∆Â≈Ã
void DisplayBoard(char arr[ROWS][COLS], int row, int col);//¥Ú”°∆Â≈Ã
void SetMine(char arr[ROWS][COLS], int row, int col);//≤º÷√¿◊
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);