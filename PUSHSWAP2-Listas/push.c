/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:30:18 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/01/25 18:50:31 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pb(t_pile *sts)
{
	t_list *temp;

	if (!sts || !sts->a)
		return ;
	temp = sts->a;
	sts->a = sts->a->next;
	temp->next = sts->b;
	sts->b = temp;
	sts->ib++;
	sts->ia--;
	write (1, "pb\n", 3);
}

void		pa(t_pile *sts)
{
	t_list *temp;

	if (!sts || !sts->b)
		return ;
	temp = sts->b;
	sts->b = sts->b->next;
	temp->next = sts->a;
	sts->a = temp;
	sts->ib--;
	sts->ia++;
	write (1, "pa\n", 3);
}
