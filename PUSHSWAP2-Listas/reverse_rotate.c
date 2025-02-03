/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:44:37 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/26 01:44:35 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_pile *sts)
{
	t_list	*first;
	t_list	*last;
	t_list  *bef_last;

	if (!sts || !sts->a || !sts->a->next)
		return ;
	first = sts->a;
	last = ft_lstlast(sts->a);
	bef_last = sts->a;
	while (bef_last->next->next != NULL)
	{
		bef_last = bef_last->next;
	}
	bef_last->next = NULL;
	last->next = first;
	sts->a = last;
	write (1, "rra\n", 4);
	}

	void	rrb(t_pile *sts)
{
	t_list	*first;
	t_list	*last;
	t_list  *bef_last;

	if (!sts || !sts->b || !sts->b->next)
		return ;
	first = sts->b;
	printf("%d =first\n", first->content);
	last = NULL;
	bef_last = sts->b;
	while (bef_last->next->next->next != NULL)
	{
		bef_last = bef_last->next;
	}
	last = bef_last->next;
	bef_last->next = NULL;
	last->next = first;
	sts->b = last;
	write (1, "rrb\n", 4);
}

void	rrr(t_pile *sts)
{
	rra(sts);
	rrb(sts);
	write (1, "rrr\n", 4);
}
