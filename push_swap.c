#include "push_swap.h"

int main(int argc, char **argv)
{
    int     i;
    char    **tver;
    t_stack   *a;
    t_stack   *b;
    
    a = 0;
    b = 0;
    if(argc < 2)
        exit(0);
    if(checker(argc, argv) == 0)
    {
        i = 1;
        while (i < argc)
        {
            tver = ft_split(argv[i]);
            if(tver == 0 || *tver == 0)
                exit(write(2, "Error\n", 6));
            arr_add_stack(tver, &a);
            ft_delete_arr(tver);
            ++i;
        }
        validacia1(&a);
        indexavorel(&a);
        printf("print stack a\n");
        print_stack(a);
        printf("print stack b\n");
        print_stack(b);
        rra(&a);
        printf("print stack a\n");
        print_stack(a);
        printf("print stack b\n");
        print_stack(b);
    }
    return (0);
}