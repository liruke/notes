#pragma once//防止头文件被重复包含
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include "contact.h"
typedef Info IT;
typedef struct A
{
	IT* a;
	int  size;//
	int capacity;
}SA;

void AInit(SA* s);
void Aprintf(SA* s);
void Apushback(SA* s, IT x);
void Apushfront(SA* s, IT x);
void Apopback(SA* s);
void Apopfront(SA* s);
void Ainsert(SA* s, int pos, IT x);
void Aerase(SA* s, int pos);
void Adestroy(SA* s);

//查改

int Afind(SA* s, IT x);


void Amodity(SA* s, int pos, IT x);