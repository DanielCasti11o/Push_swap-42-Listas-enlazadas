/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:52:57 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/21 15:01:46 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *msj, int n)
{
	int	i;

	i = 0;
	while (msj[i])
	{
		write (2, &msj[i], 1);
		i++;
	}
	exit(n);
}

// int	*init(int *numb, int size)
// {
// 	numb = malloc(size * sizeof(int *));
// 	if (!numb)
// 		return (NULL);
// 	return (numb);
// }

int count_elem(char **argv, char separator)
{
	int i;
	int j;
	int count;

	i = 1;
	j = 0;
	count = 0;
	if (!argv[i] || ft_strlen(argv[i]) == 0)
		ft_error("Error", 1);
	while (argv[i])
	{
		if (!argv[i][j] || (ft_strlen(argv[i]) == 0))
				ft_error("Error\n", 1);
		while (argv[i][j])
		{
			if (argv[i][j] != separator && argv[i][j + 1] == separator || !argv[i][j + 1])
				++count;
			j++;
		}
		i++;
		j = 0;
	}
	return (count);
}

// int	*checkargs(int argc, char **argv, char **words)
// {
// 	int	*numb;
// 	int	i;
// 	int	j;
// 	int count;

// 	i = 1;
// 	j = 0;
// 	count = count_elem(argv, ' ');
// 	numb = init(numb, count);
// 	while (i < argc)
// 	{
// 		count = 0;
// 		words = ft_split(argv[i++], ' ');
// 		while (words[j])
// 			numb[j++] = checknumb(words[count++]);
// 		i++;
// 	}
// 	check_repeat(numb);
// 	// printf("The argument are valid!\n");
// 	return (numb);
// }


int	checkargs(char *str, int *num)
{
	int	numb;

	checknumb(str, num);
	numb = ft_atoi(str);
	// printf("The argument are valid!\n");
	return (numb);
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	res;

// 	i = 1;
// 	res = checkargs(argc, argv);
// 	return (0);
// }
