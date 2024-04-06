#include <stdlib.h>
#include "my_stack_collection.h"

Stack *init_stack(double num) {
    Stack *top = malloc(sizeof(Stack));
    top->value = num;
    top->next = NULL;

    return top;
}

Stack *push(Stack *top, double num) {
    Stack *new = init_stack(num);
    if (new != NULL) {
        new->next = top;
        top = new;
    }
    
    return top;
}

Stack *pop(Stack **top) {
    Stack *poped = *top;
    
    if (top != NULL) {
        *top = (*top)->next;
        poped->next = NULL;
    }

    return poped;
}

void destroy_stack(Stack **top) {
    if (*top != NULL)
        destroy_stack(&(*top)->next);
    free(*top);
    *top = NULL;
}