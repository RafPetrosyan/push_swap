#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    long        value;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct stack
{
    Node    *first;
    Node    *last; 
} stack;


int     ft_get_word_count(char *str, char c);
int     ft_word_mall(char *str, int word_count, char c, char **arr);
void	ft_write_word(char *str, int word_count, char c, char **arr);
char	**ft_split(char *str, char c);
int     ft_atoi(char *nptr);
int     checker(int argc, char **arr);
void    arr_add_stack(char **tver, stack *a);
void    ft_delete_arr(char **tver);
void    free_stack();
void    print_stack(stack *a);
#endif