#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define row 9
#define col 9

#define rows row+2
#define cols col+2
void InitBoard(char arr[rows][cols], int Rows, int Cols, char set);
void DisplayBoard(char arr[rows][cols], int Rows, int Cols);
void SetMine(char arr[rows][cols], int Rows, int Cols);
void FindMine(char mine[rows][cols], char show[rows][cols],int ROws,int Cols);