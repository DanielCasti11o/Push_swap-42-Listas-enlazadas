/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:46:02 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/01/09 19:53:12 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_existe(int a)
{
	if (a)
		return (1);
	else
		return (0);
}
#include <stdio.h>

int main (int argc, char **argv)
{
	int tr;
	int res;

	if (argc == 2)
	{
		res = atoi(argv[1]);
		tr = ft_existe(res);
		printf("1 // existe, 0 // no existe, ENTONCES ->> %d\n", tr);
	}
	return 0;
}
