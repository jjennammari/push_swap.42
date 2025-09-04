#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int	data;
	struct s_node	*next;
} t_node;

		/*\ create_stack.c \*/

t_node  *create_stack(t_node *a, char **argv, int argc);
t_node  add_to_stack(t_node *top, int nbr);

		/*\ stack_helper.c \*/

int check_if_number(char *argv);
int check_if_double(t_node *a, int nbr);
long    ft_atol(char *str);
int	count_stack_size(t_node *a);

		/*\ error_exit.c \*/

void	error_exit(t_node **a);
void    error_digit(t_node **a);
void    error_double(t_node **a);

	/*\ stack operation functions \*/

void    push(t_node **dest, t_node **src);
void    push_a(t_node **a, t_node **b);
void    push_b(t_node **a, t_node **b);

void    reverse_rotate(t_node **top);
void    reverse_rotate_a(t_node **a);
void    reverse_rotate_b(t_node **a);
void    reverse_rotate_ab(t_node **a, t_node **b);

void    rotate(t_node **top);
void    rotate_a(t_node **a);
void    rotate_b(t_node **b);
void    rotate_ab(t_node **a, t_node **b);

void    swap(t_node **top);
void    swap_a(t_node **a);
void    swap_b(t_node **b);
void    swap_ab(t_node **a, t_node **b);

#endif
