#include "push_swap.h"

int main(int argc, char **argv)
{
    int     i;
    char    **tver;
    stack   a;
    stack   b;

    if(argc < 2)
        exit(1);
    a.first = 0;
    if(checker(argc, argv) == 0)
    {
        i = 1;
        while (i < argc)
        {
            tver = ft_split(argv[i], ' ');
            if(tver == 0)
                exit(1);
            arr_add_stack(tver, &a);
            ft_delete_arr(tver);
            ++i;
        }
        print_stack(&a);
    }
    return (0);
}