#include "main.h"

int main(int argc, char **argv) {

    int *stack_a;
    int Stack_len;
    int *stack_b;

    Stack_len = ft_populate(argc, argv, &stack_a, &stack_b);
    if (Stack_len == -1)
        return -1;
   // ft_sort(Stack_len, stack_a, stack_b);

    //free(stack_a);
    //free(stack_b);

    return 0;
}
