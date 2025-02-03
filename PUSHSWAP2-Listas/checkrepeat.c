/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkrepeat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:05:07 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/18 20:29:56 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_repeat(int *arr, int size)
{
	int	i;
	int	j;
	int flag;

	i = 0;
	flag = 0;
	while (i < size - 1)
	{
		j = i + 1;
		if(!flag && arr[i] == 0)
			flag = 1;
		while (j < size)
		{
			if(flag && arr[j] == 0)
				return (free(arr), ft_error("Error\n", 1));
			if (arr[i] == arr[j])
				return (free(arr), ft_error("Error\n", 1));
			j++;
		}
		i++;
	}
}
