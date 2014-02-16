#include <stdlib.h>
#ifndef __QUEUE_H__
#define __QUEUE_H__
struct Queue;
typedef struct Queue Queue;

Queue* Queue_Create(size_t n);
void Queue_Destroy(Queue* q);
void Queue_Enqueue(Queue* q, void* e);
void* Queue_Dequeue(Queue* q);
int Queue_Empty(Queue* q);
int Queue_Full(Queue* q);
#endif