#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>

typedef struct stack
{
    int         value;
    int         index;
    struct stack *next;
} t_stack;

int     ft_get_word_count(char *str);
int     ft_word_mall(char *str, int word_count, char **arr);
void	ft_write_word(char *str, int word_count, char **arr);
char	**ft_split(char *str);
int     ft_atoi(char *nptr, char **arr, t_stack **a);
int     checker(int argc, char **arr);
void    arr_add_stack(char **tver, t_stack **a);
void    ft_delete_arr(char **tver);
void    free_stack();
void    print_stack(t_stack *a);
void    indexavorel(t_stack **a);
int     validacia1(t_stack **a);
#endif