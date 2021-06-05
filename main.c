#include "main.h"
void print_stack(s_list *stack_a, s_list *stack_b);
int main(int argc, char **argv) {

    s_list *stack_a;
    int Stack_len;
    s_list *stack_b;

    stack_a = ft_new_stack_list(ft_atoi(argv[1]));
    stack_b = ft_new_stack_list(NULL);
    Stack_len = ft_populate(argc, argv, stack_a);
    if (Stack_len == -1) {
        printf("\nerror while parsing");
        return -1;
    }
    print_stack(stack_a, stack_b);
    ft_push_b(stack_a,stack_b);
    ft_push_b(stack_a,stack_b);
    print_stack(stack_a, stack_b);

   // ft_sort(Stack_len, stack_a, stack_b);
    ft_stackclear(&stack_a);
    return 0;
}


void print_stack(s_list *stack_a, s_list *stack_b)
{
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