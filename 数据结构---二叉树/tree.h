#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;



void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
//int TreeSize(BTNode* root, int* size);
int TreeSize(BTNode* root);
int TreeLeafSize(BTNode* root);
void LevelOrder(BTNode* root);