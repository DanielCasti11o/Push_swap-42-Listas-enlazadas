/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:18:31 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/18 19:03:44 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_pile *sts)
{
	t_list *new;
	t_list	*last;

	new = init_lst(new);
	if (!sts->a || !new)
		return ;
	if (sts->a == NULL)
	{
		sts->a = new;
		return ;
	}
	last = sts->a;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
