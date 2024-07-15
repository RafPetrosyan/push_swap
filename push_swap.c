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

int	log2_n(int x)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	while (i < x)
	{
		count++;
		i *= 2;
	}
	return (count + 1);
}

int	log5_n(int x)
{
	int	i;
	int	count;

	i = 5;
	count = 0;
	while (i < x)
	{
		count++;
		i *= 5;
	}
	return (count + 1);
}

int get_offset(int n)
{
	return (log2_n(2*n) * log5_n(0.25*n));
} 

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
        sort_butterfly(&a, &b);
        print_stack(a);
    }
    printf("%d\n", log5_n(500));
    printf("%d\n", log5_n(500));
    return (0);
}
