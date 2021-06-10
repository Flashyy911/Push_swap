#include "main.h"

int main(int argc, char **argv) {

    s_list *stack_a;
    int Stack_len;
    s_list *stack_b;

    if (argc < 2)
        return -1;
    stack_a = ft_populate( argv + 1);
    stack_b = NULL;
    if (stack_a == NULL) {
        printf("error\n");
        return -1;
    }

    ft_sort(&stack_a, &stack_b);
    //ft_sort(Stack_len, &stack_a, &stack_b);
    /*print_stack(stack_a, stack_b);
    ft_swap_a(&stack_a);
    print_stack(stack_a, stack_b);
    ft_push_b(&stack_a, &stack_b);
    ft_push_b(&stack_a, &stack_b);
    ft_push_b(&stack_a, &stack_b);
    print_stack(stack_a, stack_b);*/
    ft_stackclear(&stack_b);
    ft_stackclear(&stack_a);
    return 0;
}


void print_stack(s_list *stack_a, s_list *stack_b)
{
    if (stack_b == NULL)
        stack_b = ft_new_stack_list(0);
    printf("-----------------------");
    while (stack_a->next || stack_b->next) {
        printf("\n%d\t|\t%d\t|", stack_a->value, stack_b->value);
        if (stack_a->next)
            stack_a = stack_a->next;
        if (stack_b->next)
            stack_b = stack_b->next;
        else stack_b->value = 0;
    }
    printf("\n%d\t|\t%d\t|", stack_a->value, stack_b->value);
    printf("\n-----------------------\n");
}