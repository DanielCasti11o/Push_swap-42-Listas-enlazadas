/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:35:42 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/03 17:24:34 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile  *int_cpy_to_lst(int *num, int size, t_pile *sts)
{
	int i;
	t_list  *temp;

	i = 0;
	temp = sts->a;
	while (i < size)
	{
		sts->a->content = num[i];
		printf("numero a copiar = %d\n", sts->a->content);
		i++;
		sts->a = sts->a->next;
	}
	sts->a = temp;
	return (sts);
}
