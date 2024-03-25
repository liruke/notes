#include "tree.h"


//树适合用分治算法，递归来做
int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 1;
	A->left = NULL;
	A->right = NULL;
	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 2;
	B->left = NULL;
	B->right = NULL;
	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 3;
	C->left = NULL;
	C->right = NULL;
	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 4;
	D->left = NULL;
	D->right = NULL;
	A->left = B;
	A->right = C;
	B->left = D;

	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	int Asize = 0;
	int Bsize = 0;
	//int size1 = TreeSize(A, &Asize);
	//printf("%d ", size1);
	//printf("\n");
	//int size2 = TreeSize(B, &Bsize);
	//printf("%d ", size2);
	int size1 = TreeSize(A);
	printf("size:%d ", size1);
	printf("\n");
	int size2 = TreeSize(B);
	printf("size:%d ", size2);
	printf("\n");
	printf("leafsize:%d", TreeLeafSize(A));
	printf("\n");
	LevelOrder(A);
	return 0;
}

