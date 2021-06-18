#include "Headers/main.h"

int main(int argc, char **argv) {

    s_list *stack_a;
    s_list *stack_b;

    if (argc < 2)
        return -1;
    stack_a = ft_populate( argv + 1);
    stack_b = NULL;
    if (stack_a == NULL)
    {
        printf("error\n");
        return -1;
    }
    ft_sort(&stack_a, &stack_b);
    ft_stackclear(&stack_b);
    ft_stackclear(&stack_a);
    return 0;
}