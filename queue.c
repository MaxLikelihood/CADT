#include "queue.h"

struct Queue
{
	size_t head;
	size_t tail;
	void** e;
};

