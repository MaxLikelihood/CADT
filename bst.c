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

BSTNode* BSTNode_Create(void* k)
{
	BSTNode* n = (BSTNode* )malloc(sizeof(BSTNode));
	n->left = NULL;
	n->right = NULL;
	n->p = NULL;
	n->k = k;
}

