/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:31 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/16 14:37:07 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = 0;
	b = 0;
	if (argc < 2)
		exit(1);
	if (checker(argc, argv) == 0)
	{
		push_astack(argc, argv, &a);
		validacia_krk(a);
		indexavorel(a);
		sort(&a, &b);
	}
	else
		exit(write(2, "Error\n", 6));
	return (0);
}
