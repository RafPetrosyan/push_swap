/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:43 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/13 14:10:48 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct stack
{
	int				value;
	int				index;
	struct stack	*next;
}	t_stack;

int		ft_get_word_count(char *str);
int		check_isspace(char c);
int		ft_word_mall(char *str, int word_count, char **arr);
void	ft_write_word(char *str, int word_count, char **arr);
char	**ft_split(char *str);
int		ft_atoi(char *nptr, char **arr, t_stack **a);
int		checker(int argc, char **arr);
void	arr_add_stack(char **tver, t_stack **a);
void	ft_delete_arr(char **tver);
void	free_stack(t_stack *a);
t_stack	*new_node(long val);
void	print_stack(t_stack *a);
void	indexavorel(t_stack *a);
int		validacia_krk(t_stack *a);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	sa(t_stack **a, int flag);
void	sb(t_stack **b, int flag);
void	ra(t_stack **a, int flag);
void	rb(t_stack **b, int flag);
void	rra(t_stack **a, int flag);
void	rrb(t_stack **a, int flag);
int		check_sort(t_stack *a);
void	sort_3(t_stack **a);
void	sort_3_5(t_stack **a, t_stack **b);
int		stack_qanak(t_stack *a);
void	sort_butterfly(t_stack **a, t_stack **b, int offset);
void	patrastel_pushi(int index, t_stack **a);
void	gtnel(t_stack **b, int qanak);
int		log2_n(int n);
int		log5_n(int x);
void	sort(t_stack **a, t_stack **b);
void	push_astack(int argc, char **argv, t_stack **a);

#endif
