/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknumb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:47:53 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/16 21:27:01 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	checknumb(char *str_arg, int *numb)
{
	int	    	i;
	long	   num;

	i = 0;
	if (str_arg[i] == '-' || str_arg[i] == '+')
		i++;
	while (str_arg[i])
	{
		if (str_arg[i] > '9' || str_arg[i] < '0')
			{
				free(numb);
				ft_error("Error\n", 1);
			}
		i++;
	}
	num = ft_atol(str_arg);
	if (num < -2147483648 || num > 2147483647)
	{
		free(numb);
		ft_error("Error\n", 1);
	}
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	isdigit;

// 	i = 1;
// 	while (argc >= 1 && argv[i])
// 	{
// 		isdigit = checknumb(argv[i]);
// 		i++;
// 	}
// 	printf("1, true // 0, false // the arg is --> %d", isdigit);
// 	return (0);
// }
