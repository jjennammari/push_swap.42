#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // DELETE BEFORE RETURNING

typedef struct s_node
{
	int	data;
	struct s_node	*next;
	struct s_node	*temp;
	struct s_node	*first_node;
	struct s_node	*second_node;
	struct s_node	*last_node;
} t_node;

		/*\ create_stack.c \*/

void	create_stack(t_node **a, char **argv, int argc);
void	add_to_stack(t_node **top, int nbr);

		/*\ array_helper.c \*/

void    create_array(int *arr, char **argv, int size);
void    sort_array(int *arr, int size);
int 	get_index(int *arr, char **argv, int size);

		/*\ stack_helper.c \*/

int 	check_if_number(char *argv);
int		check_if_double(int *arr, int nbr);
long    ft_atol(char *str);
int		count_stack_size(t_node *a);

		/*\ error_exit.c \*/

void	error_int(t_node **a);
void    error_digit(t_node **a);
void    error_double(t_node **a);
void    error_malloc(t_node **a);
void    error_array(int *array, int size);

		/*\ tiny_sort_stack.c \*/

void	tiny_sort(t_node *a, t_node *b);
void	sort_max_five(t_node *a, t_node *b, int size);
void	sort_max_three(t_node *stack);

		/*\ sort_helper.c \*/

int get_max_value(t_node *stack);
int	get_min_value(t_node *stack);
t_node  *find_last_node(t_node *stack);

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
