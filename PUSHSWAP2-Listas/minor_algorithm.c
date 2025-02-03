/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:46:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/01/26 02:34:53 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    s_three(t_pile *stacks)
{
	int ix_0;
	int ix_1;
	int ix_2;

	ix_0 = stacks->a->index;
	ix_1 = stacks->a->next->index;
	ix_2 = stacks->a->next->next->index;
	if (ix_0 < ix_1 && ix_1 < ix_2)
		return ;
	else if (ix_0 > ix_1 && ix_1 > ix_2)
	{
		ra(stacks);
		sa(stacks);
	}
	else if (ix_0 > ix_1 && ix_2 > ix_1 && ix_2 < ix_0)
		ra(stacks);
	else if (ix_0 < ix_1 && ix_0 > ix_2)
		rra(stacks);
	else if (ix_0 > ix_1 && ix_0 < ix_2)
		sa(stacks);
	else if (ix_0 < ix_1 && ix_0 < ix_2)
	{
		sa(stacks);
		ra(stacks);
	}
}

void    reverse_s_three(t_pile *stacks)
{
	int ix_0;
	int ix_1;
	int ix_2;
	int i;

	i = 0;
	if (stacks->ib != 3)
		return ;
	ix_0 = stacks->b->index;
	ix_1 = stacks->b->next->index;
	ix_2 = stacks->b->next->next->index;
	if (ix_0 > ix_1 && ix_1 > ix_2)
		return ;
	else if (ix_0 < ix_1 && ix_1 < ix_2)
	{
		rb(stacks);
		sb(stacks);
	}
	else if (ix_0 < ix_1 && ix_2 < ix_1 && ix_2 > ix_0)
		rb(stacks);
	else if (ix_0 > ix_1 && ix_0 < ix_2)
		rrb(stacks);
	else if (ix_0 < ix_1 && ix_0 > ix_2)
		sb(stacks);
	else if (ix_0 > ix_1 && ix_0 > ix_2)
	{
		sb(stacks);
		rb(stacks);
	}
}

void    s_four(t_pile *stacks)
{
	int i;

	i = 0;
	while (i < 1)
	{
		if ((stacks->a->index) == 0)
		{
			pb(stacks);
			i++;
		}
		else
			ra(stacks);
	}
	s_three(stacks);
	pa(stacks);
}

void    s_five(t_pile *stacks)
{
	int i;

	i = 0;
	while (i < 2)
	{
	if ((stacks->a->index) == 0 || (stacks->a->index) == 1)
	{
		pb(stacks);
		// printf("paso a head %d\n",stacks->b->index);
		i++;
	}
	else
		ra(stacks);
	}
	s_three(stacks);
	if (stacks->b && stacks->b->next && (stacks->b->index) < (stacks->b->next->index))
		sb(stacks);
	pa(stacks);
	pa(stacks);
}

void    s_six(t_pile *stacks)
{
	int i;

	i = 0;
	while (i < 3)
	{
		if ((stacks->a->index) == 0 || (stacks->a->index) == 1 || (stacks->a->index) == 2)
		{
			pb(stacks);
			i++;
		}
		else
			ra(stacks);
	}
	s_three(stacks);
	reverse_s_three(stacks);
	pa(stacks);
	pa(stacks);
	pa(stacks);
}
