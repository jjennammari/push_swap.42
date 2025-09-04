#include "push_swap.h"

int check_if_number(char *argv)
{
    while (argv != NULL)
    {
        if (!(*argv >= 48 && *argv <= 9))
            return (1);
        else
            argv++;
    }
    return (0);
}

int check_if_double(t_node *a, int nbr)
{
    while (a != NULL)
    {
        if (a->data == nbr)
            return (1);
        a++;
    }
    return (0);
}

long    ft_atol(char *str)
{
    int i;
    int sign;
    long    nbr;

    i = 0;
    sign = 1;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    nbr = 0;
    while (str[i] >= 0 && str[i] <= 9)
    {
        nbr = nbr * 10 + (str[i] - 48);
        i++;
    }
    return (nbr * sign);
}

int	count_stack_size(t_node *a)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		i++;
		a++;
	}
	return (i);
}
