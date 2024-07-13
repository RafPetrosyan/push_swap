/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:31 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/13 14:10:33 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            {
                free_stack(a);
                if (tver != 0)
                    ft_delete_arr(tver);
                exit(write(2, "Error\n", 6));
            }
            arr_add_stack(tver, &a);
            ft_delete_arr(tver);
            ++i;
        }
        validacia_krk(a);
        indexavorel(a);
        print_stack(a);
        sort_3(&a);
    }
    return (0);
}
