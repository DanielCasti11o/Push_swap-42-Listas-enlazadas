/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:58:54 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/03 16:59:43 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_lst(int size)
{
	t_list	*stack;
	t_list  *temp;
	t_list  *new;
	int         i;

	i = 1;
	stack = (t_list *)malloc(sizeof(t_list));
	if (!stack)
		return (NULL);
	stack->content = 0;
	stack->index = -1;
	temp = stack;
	while (i < size)
		{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		new->content = 0;
		new->index = -1;
		stack->next = new;
		stack = new;
		i++;
		}
	stack->next = NULL;
	return (temp);
}


t_pile	*init_pile(int size_a, int size_b)
{
	t_pile	*new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (!new)
		return (NULL);
	new->a = init_lst(size_a);
	new->b = init_lst(size_b);
	if (!new->a || !new->b)
	{
		if (new->a)
			free(new->a);
		if (new->b)
			free(new->b);
		return (free(new), NULL);
	}
	new->ia = size_a;
	new->ib = size_b;
	return (new);
}
