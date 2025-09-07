#include "push_swap.h"

int check_if_number(char *argv)
{
    while (*argv)
    {
		if (*argv == '+' || *argv == '-')
		{
			if ((*argv) + 1 == '-' || (*argv) + 1 == '+')
				return (0);
			else
				argv++;
		}
        if (!(*argv >= '0' && *argv <= '9'))
            return (0);
        else
            argv++;
    }
    return (1);
}

int check_if_double(int *arr, int nbr)
{
	if (arr == NULL)
		return (0);
    while (*arr)
    {
        if (*arr == nbr)
            return (1);
        arr++;
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
    while (str[i] >= '0' && str[i] <= '9')
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
		a = a->next;
	}
	return (i);
}
