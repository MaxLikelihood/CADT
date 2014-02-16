#include "stack.h"

struct Stack
{
	size_t size;
	size_t top;
	void** e;
};

Stack* Stack_Create(size_t n)
{
	Stack* s = (Stack *)malloc(sizeof(Stack));
	s->size = n;
	s->top = 0;
	s->e = (void**)malloc(sizeof(void*) * (n + 1));
	return s;
}

int Stack_Empty(Stack* s)
{
	if (s->top == 0)
	{
		return 1;
	} else {
		return 0;
	}
}

void Stack_Push(Stack* s, void* e)
{
	if (s == NULL) return;
	if (s->top == s->size) return;
	s->top = s->top + 1;
	s->e[s->top] = e;
}

void* Stack_Pop(Stack* s)
{
	if (Stack_Empty(s)) return;
	s->top = s->top - 1;
	return s->e[s->top+1];
}

void Stack_Destroy(Stack* s)
{
	if (s == NULL) return;
	free(s->e);
	free(s);
}