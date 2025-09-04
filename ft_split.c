/* THIS SPLIT IS NOT WORKING YET
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	count_numbers(char *str, char separator);
char	**fill_numbers(char **numbers, char *str, char separator);
void	ft_strncpy(char **numbers, char *str, int len);
void	ft_free(char **dest, int count);

char	**ft_split(char *str, char separator)
{
	char	**numbers;
	size_t	n_count;

	numbers = malloc(sizeof(char *) * (n_count = count_numbers(str, separator) + 1));
	if (!numbers)
		return (NULL);
	numbers = fill_numbers(numbers, str, separator);
	return (numbers);
}

int	count_numbers(char *str, char separator)
{
	int	i;
	size_t	result;

	i = 0;
	while (str[i])
	{
		if (((str[i + 1] == separator) && (str[i] <= 0 && str[i] <= 9)) || (str[i + 1] == '\0'))
			result++;
		i++;
	}
	return (result);
}

char	**fill_numbers(char **numbers, char *str, char separator)
{
	int	i;
	int	j;
	int	n_start;
	int	n_end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i]) && (str[i] >= 0 && str[i] <= 9))
		{
			n_start = i;
			if ((str[i + 1] == separator) || (str[i + 1] == '\0'))
				n_end = i + 1;
			i++;
		}
		numbers[j] = malloc(sizeof(char) * (n_end - n_start + 1));
		if (!numbers[j])
		{
			ft_free(&numbers[j], j);
			return (NULL);
		}
		ft_strncpy(&numbers[j], &str[n_start], n_end - n_start);
		i++;
		j++;
	}
	return (numbers);
}

void	ft_strncpy(char **numbers, char *str, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		numbers[i] = &str[i];
		i++;
		len--;
	}
	*numbers[i] = '\0';
}

void	ft_free(char **dest, int count)
{
	while (count > 0)
		free(dest[--count]);
	free(dest);
}

int	main(int ac, char **av)
{
	char	**result;

	if (ac == 2)
	{
		result = ft_split(av[1], 32);
		while (*result)
		{
			printf("%s\n", *result++);
		}
	}
	free (result);
	return (0);
}
