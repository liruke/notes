#pragma once

#define NAME_MAX 10
#define ADDR_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 100
typedef struct Contact
{
	int age;
	char name[NAME_MAX];
	char addr[ADDR_MAX];
	char tel[TEL_MAX];
	char gender[GENDER_MAX];
}Info;


struct SListNode;
typedef struct SListNode Contact;

//通讯录的初始化和销毁
void ContactInit(Contact* pcon);
void ContactDestory(Contact* pcon);


//通讯录的增删查改


void ContactAdd(Contact* pcon);
void ContactPop(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);