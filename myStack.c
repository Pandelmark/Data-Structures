#include <stdlib.h>
#include "myStack.h"

void init(struct STACK *st, int N){
	st->mat = (int*)malloc(N*sizeof(int));
	st->head = 0;
	st->size = N;
}

int push(struct STACK *st, int elem){
	if(st->head == st->size)
		return 0;
	st->mat[st->head] = elem;
	st->head++;
	return 1;
}

int pop(struct STACK *st, int *elem){
	if(st->head == 0)
		return 0;
	st->head--;
	*elem = st->mat[st->head];
	return 1;
}