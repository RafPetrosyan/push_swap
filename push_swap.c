#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int     i;
    char    **tver;
    stack   a;
    stack   b;

    if(argc < 2)
        exit(1);
    i = 1;
    if(checker(argc, argv) == 0)
    {
        while (i < argc)
        {
            tver = ft_split(argv[i], ' ');
            arr_add_stack(tver);
            ft_delete_arr(tver);
            ++i;
        }
        
    }
    return (0);
}