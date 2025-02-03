/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:29:51 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/03 17:29:52 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_pile  *stacks;
	t_list  *temp;
	int     *num;
	int     c;
	int     i;

	i = 0;
	c = count_elem(argv, ' ');
	stacks = init_pile(c, 0);
	num = ft_pars(argc, argv, num);
	stacks = int_cpy_to_lst(num, c, stacks);
	temp = stacks->a;
	while (stacks->a != NULL)
	{
		printf("numero de lista= %d\n", stacks->a->content);
		stacks->a = stacks->a->next;
	}
	stacks->a = temp;
	printf("pila a longitud= %d\n", stacks->ia);
	assig_index(stacks);
	s_six(stacks);
	i = 0;
	while (i < stacks->ia)
	{
		printf("pila a después de ordenar los sa = %d\n", stacks->a->content);
		stacks->a = stacks->a->next;
		i++;
	}
	return (0);

}
