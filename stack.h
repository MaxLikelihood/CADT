#include <stdlib.h>
#ifndef __STACK_H__
#define __STACK_H__
struct Stack;
typedef struct Stack Stack;

Stack* Stack_Create(size_t n);
void Push(Stack s, void* e);
void* Pop(Stack s);
int Stack_Empty(Stack s);
#endif