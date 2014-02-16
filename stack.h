#include <stdlib.h>
#ifndef __STACK_H__
#define __STACK_H__
struct Stack;
typedef struct Stack Stack;

void Push(Stack s, void* e);
void* Pop(Stack s);
int Stack_Empty(Stack s);
#endif