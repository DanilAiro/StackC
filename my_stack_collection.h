#ifndef MY_STACK_COL_H
#define MY_STACK_COL_H

typedef struct stack {
    double value;
    struct stack *next;
} Stack;

Stack *init_stack(double num);
Stack *push(Stack *root, double num);
Stack *pop(Stack **root);
void destroy_stack(Stack **root);

#endif