#include <stdlib.h>
#ifndef __BST_H__
#define __BST_H__
struct BSTNode;
struct BST;
typedef struct BSTNode BSTNode;
typedef struct BST BST;

BST* BST_Create(void);
BSTNode* BSTNode_Create(void* k);

#endif