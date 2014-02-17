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

ListNode* List_Search(List* l, void* k, int (f)(void*, void*))
{
	ListNode* n = l->head;
	while (n != NULL && !f(n->k, k))
	{
		n = n->next;
	}
	return n;
}

void List_Insert(List* l, ListNode* n)
{
	n->next = l->head;
	if (l->head != NULL)
	{
		l->head->prev = n;
	}
	l->head = n;
	n->prev = NULL;
}

void List_Delete(List* l, ListNode* n)
{
	if (n->prev != NULL)
	{
		n->prev->next = n->next;
	} else {
		l->head = n->next;
	}
	if (n->next != NULL)
	{
		n->next->prev = n->prev;
	}
}

void ListNode_Destroy(ListNode* n)
{
	free(n);
}
