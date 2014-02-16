#include "queue.h"

struct Queue
{
	size_t head;
	size_t tail;
	size_t size;
	void** e;
};

Queue* Queue_Create(size_t n)
{
	Queue* q = (Queue *)malloc(sizeof(Queue));
	q->size = n;
	q->head = q->tail = 1;
	q->e = (void **)malloc(sizeof(void*) * (n + 1));
}