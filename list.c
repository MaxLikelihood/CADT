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
}