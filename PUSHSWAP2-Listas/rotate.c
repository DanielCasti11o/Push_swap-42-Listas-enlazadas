/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:16:26 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/26 02:29:52 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pile *sts)
{
	int	i;
	t_list	*first;
	t_list  *last;

	if (!sts || !sts->a || !sts->a->next)
		return ;
	first = sts->a;
	last = ft_lstlast(sts->a);
	sts->a = sts->a->next;
	last->next = first;
	first->next = NULL;
	write (1, "ra\n", 3);
}

void	rb(t_pile *sts)
{
	int	i;
	t_list	*first;
	t_list  *last;

	if (!sts || !sts->b || !sts->b->next)
		return ;
	first = sts->b;
	last = sts->b;
	while (last->next->next != NULL)
	{
		last = last->next;
	}
	sts->b = sts->b->next;
	last->next = first;
	first->next = NULL;
	write (1, "rb\n", 3);
}

void	rr(t_pile *sts)
{
	ra(sts);
	rb(sts);
	write (1, "rr\n", 1);
}
