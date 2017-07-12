struct stack {
   long * array;
   unsigned int top_index;
   unsigned int current_size;
};

struct stack create_stack(unsigned int size);
void destroy_stack(struct stack* s);

int push(struct stack* s, long value);
long top(struct stack* s);
void pop(struct stack* s);
