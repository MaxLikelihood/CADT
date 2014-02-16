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
	return q;
}

int Queue_Empty(Queue* q)
{
	return (q->head == q->tail);
}

int Queue_Full(Queue* q)
{
	return (q->head == q->tail + 1) || (q->head == 1 && q->tail == q->size);
}

void Queue_Enqueue(Queue* q, void* e)
{
	if (q == NULL) return;
	if (Queue_Full(q)) return;
	q->e[q->tail] = e;
	if (q->tail == q->size)
	{
		q->tail = 1;
	} else {
		q->tail = q->tail + 1;
	}
}

void* Queue_Dequeue(Queue* q)
{
	if (Queue_Empty(q)) return NULL;
	void* e = q->e[q->head];
	if (q->head == q->size)
	{
		q->head = 1;
	} else {
		q->head = q->head + 1;
	}
	return e;
}