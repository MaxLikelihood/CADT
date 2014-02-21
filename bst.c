#include "bst.h"

static void BST_Transplant(BST* T, BSTNode* u, BSTNode* v);

struct BSTNode
{
	BSTNode* left;
	BSTNode* right;
	BSTNode* p;
	void* k;
};

