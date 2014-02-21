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

void BST_Inorder_Tree_Walk(BSTNode* n, void (f)(void*))
{
	if (n != NULL)
	{
		BST_Inorder_Tree_Walk(n->left, f);
		f(n->k);
		BST_Inorder_Tree_Walk(n->right, f);
	}
}

void BST_Preorder_Tree_Walk(BSTNode* n, void (f)(void*))
{
	if (n != NULL)
	{
		f(n->k);
		BST_Preorder_Tree_Walk(n->left, f);
		BST_Preorder_Tree_Walk(n->right, f);
	}
}

void BST_Postorder_Tree_Walk(BSTNode* n, void (f)(void*))
{
	if (n != NULL)
	{
		BST_Postorder_Tree_Walk(n->left, f);
		BST_Postorder_Tree_Walk(n->right, f);
		f(n->k);
	}
}

BSTNode* BST_Tree_Search(BSTNode* n, void* k, int (f)(void*, void*), int (g)(void*, void*))
{
	if (n == NULL || f(n->k, k))
	{
		return n;
	}
	if (!g(n->k, k))
	{
		return BST_Tree_Search(n->left, k, f, g);
	} else {
		return BST_Tree_Search(n->right, k, f, g);
	}
}

BSTNode* BST_Iterative_Tree_Search(BSTNode* n, void* k, int (f)(void*, void*), int (g)(void*, void*))
{
	while (n != NULL && !f(n->k, k))
	{
		if (!g(n->k, k))
		{
			n = n->left;
		} else {
			n = n->right;
		}
	}
	return n;
}

BSTNode* BST_Tree_Minimum(BSTNode* n)
{
	if (n == NULL) return n;
	while (n->left != NULL)
	{
		n = n->left;
	}
	return n;
}

BSTNode* BST_Tree_Maximum(BSTNode* n)
{
	if (n == NULL) return n;
	while (n->right != NULL)
	{
		n = n->right;
	}
	return n;
}