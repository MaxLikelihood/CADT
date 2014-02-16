#include "stack.h"

struct Stack
{
	size_t size;
	size_t top;
	void** e;
}

Stack* Stack_Create(size_t n)
{
	Stack* s = (Stack *)malloc(sizeof(Stack));
	s->size = n;
	s->top = 0;
	s->e = (void**)malloc(sizeof(void*) * (n + 1));
	return s;
}