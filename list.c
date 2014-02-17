#include "list.h"

struct ListNode
{
	ListNode* prev;
	ListNode* next;
	void* k;
};

struct List
{
	ListNode* head;
};

List* List_Create(void)
{
	List* l = (List *)malloc(sizeof(List));
	l->head = NULL;
	return l;
}

ListNode* ListNode_Create(void* k)
{
	ListNode* n = (ListNode *)malloc(sizeof(ListNode));
	n->prev = NULL;
	n->next = NULL;
	n->k = k;
	return n;
}
