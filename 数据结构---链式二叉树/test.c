#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef struct BinTreeNode
{
	struct BinTreeNode* left;
	struct BinTreeNode* right;
	int val;
}BTNode;

BTNode* BuyBTNode(int val)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail\n");
		return NULL;
	}
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->val = val;
	return newnode;
}

//手写一个树
BTNode* CreateTree()
{
	BTNode* n1 = BuyBTNode(1);
	BTNode* n2 = BuyBTNode(2);
	BTNode* n3 = BuyBTNode(3);
	BTNode* n4 = BuyBTNode(4);
	BTNode* n5 = BuyBTNode(5);
	BTNode* n6 = BuyBTNode(6);
	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n2->right = NULL;
	n3->left = NULL;
	n3->right = NULL;
	n4->left = n5;
	n4->right = n6;
	n5->left = NULL;
	n5->right = NULL;
	n6->left = NULL;
	n6->right = NULL;
	return n1;
}


void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
}

//求树的节点个数
//int TreeSize(BTNode* root)
//{
//	static int size = 0;
//	if (root == NULL)
//		return 0;
//	else
//		size++;
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//	return size;
//}

int TreeSize(BTNode* root)
{
	//当经过每次的节点的时候就+1，直到最后一个节点
	return root == NULL ? 1 : TreeSize(root->left) + TreeSize(root->right);
}
int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}
//还有一种写法是：
int maxDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return maxDepth(root->right) > maxDepth(root->left) ? maxDepth(root->right) + 1 : maxDepth(root->left) + 1;
}
//第k层的节点个数
int TreeKlevel(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeKlevel(root->left, k - 1) + TreeKlevel(root->right, k - 1);
}


BTNode* TreeFind(BTNode* root, int x)
{
	//为空则返回空节点
	if (root == NULL)
	{
		return NULL;
	}
	//找到了则返回这个节点
	if (root->val == x)
	{
		return root;
	}
	//在左子树中找，找到了返回节点
	BTNode* ret1 = TreeFind(root->left, x);
	if (ret1 != NULL)
	{
		return ret1;
	}
	//上面左子树没有找到，就在右子树中找
	return TreeFind(root->right, x);
}




int main()
{
	BTNode* root = CreateTree();
	PreOrder(root);
	printf("\n");
	InOrder(root);
	return 0;
}