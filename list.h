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

#endif