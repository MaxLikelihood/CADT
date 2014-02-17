#include <stdlib.h>
#ifndef __LIST_H__
#define __LIST_H__
struct ListNode;
struct List;
typedef struct ListNode ListNode;
typedef struct List List;

List* List_Create(void);
void List_Destroy(List* l);
ListNode* ListNode_Create(void *);
void ListNode_Destroy(ListNode* n);
ListNode* List_Search(List* l, void* k, int f(void*, void*));

#endif