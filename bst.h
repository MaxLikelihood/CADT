#include <stdlib.h>
#ifndef __BST_H__
#define __BST_H__
struct BSTNode;
struct BST;
typedef struct BSTNode BSTNode;
typedef struct BST BST;

BST* BST_Create(void);
BSTNode* BSTNode_Create(void* k);
void BST_Inorder_Tree_Walk(BST* T, void (f)(void*));
void BST_Preorder_Tree_Walk(BST* T, void (f)(void*));
void BST_Postorder_Tree_Walk(BST* T, void (f)(void*));
BSTNode* BST_Tree_Search(BST* T, void* k, int (f)(void*, void*), int (g)(void*, void*));
BSTNode* BST_Iterative_Tree_Search(BST* T, void* k, int (f)(void*, void*), int (g)(void*, void*));
BSTNode* BST_Tree_Minimum(BSTNode* n);
BSTNode* BST_Tree_Maximum(BSTNode* n);
BSTNode* BST_Tree_Root(BST* T);
BSTNode* BST_Tree_Successor(BSTNode* n);
BSTNode* BST_Tree_Predecessor(BSTNode* n);
void BST_Tree_Insert(BST* T, BSTNode* n, int (f)(void*, void*), int (g)(void*, void*));
void BST_Tree_Delete(BST* T, BSTNode* n, int (f)(void*, void*), int (g)(void*, void*));

#endif