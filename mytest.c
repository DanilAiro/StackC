#include <stdio.h>
#include "my_stack_collection.h"

int main() {
    Stack *num = init_stack(1.0);
    num = push(num, 2.0);
    num = push(num, 3.0);
    num = push(num, 4.0);
    num = push(num, 5.0);

    destroy_stack(&(num->next));

    for (int i = 1; num != NULL; i++) {
        printf("%d elem from top: %lf\n", i, num->value);
        num = num->next;
    }

    return 0;
}









