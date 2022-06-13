// this file is where the attributes of the stack are declared through the use
// of the STACK structure
struct STACK{
	int *mat;
	int head;
	int size;
};

void init(struct STACK *, int);
int push(struct STACK *, int);
