#pragma once
#include<stdio.h>
#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX  12
#define ADDR_MAX 100
//ͨѶ¼��������
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

struct A;
typedef struct A Contact;


//ͨѶ¼�ĳ�ʼ��������

void ContactInit(Contact* pcon);
void ContactDestory(Contact* pcon);


//��ɾ���
void ContactAdd(Contact* pcon);
void ContactDel(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);
void ContactShow(Contact* pcon);