#include "bst.h"

static void BST_Transplant(BST* T, BSTNode* u, BSTNode* v);

struct BSTNode
{
	BSTNode* left;
	BSTNode* right;
	BSTNode* p;
	void* k;
};

struct BST
{
	BSTNode* root;
};

BST* BST_Create(void)
{
	BST* T = (BST* )malloc(sizeof(BST));
	T->root = NULL;
	return T;
}

