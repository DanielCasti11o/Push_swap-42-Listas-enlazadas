/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:11 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/03 17:09:43 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*init(int *numb, int size)
{
	numb = (int *)malloc(size * sizeof(int));
	if (!numb)
		return (free(numb), NULL);
	return (numb);
}

void    fr_words(char **wds)
{
	int i;

	i = 0;
	while (wds[i])
	{
		free(wds[i]);
		i++;
	}
	free(wds);
}

int *ft_pars(int argc, char **argv, int *num)
{
    int i;
    int j;
    int c;
    char **words;

    i = 1;
    c = count_elem(argv, ' ');
	num = (int *)malloc(c + 1 * sizeof(int));
	if (!num)
		return (free(num), NULL);
	c = 0;
	words = malloc(sizeof(char *) * argc);
	if (!words)
		return (free(words), NULL);
	while (i < argc)
	{
		j = 0;
		words = ft_split(argv[i], ' ');
		while (words[j])
		{
			// printf("doble punt: %s\n", words[j]);
			num[c] = checkargs(words[j], num);
			printf("num: %d\n", num[c]);
			j++;
			c++;
		}
		fr_words(words);
		i++;
	}
	num[c] = '\0';
	j = 0;
	while (j < c)
	{
		printf("numme=%d\n", num[j]);
		j++;
	}

	check_repeat(num, c);
	printf("valido\n");
	return (num);
}
