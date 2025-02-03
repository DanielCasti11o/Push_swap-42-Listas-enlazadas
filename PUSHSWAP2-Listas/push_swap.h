/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:14 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/24 16:21:16 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <math.h>
# include <unistd.h>

typedef struct s_list
{
	int	content;
	int	index;
	struct s_list   *next;
}	t_list;

typedef struct s_pile
{
	t_list	*a;
	t_list	*b;
	int     ia;
	int     ib;
}	t_pile;

int			ft_strlen(const char *s);
int         intlen(int *arr);
int			ft_atoi(char *nptr);
long		ft_atol(char *nptr);
void		ft_error(char *msj, int n);
t_list		*ft_lstlast(t_list *lst);
char    	**ft_split(char const *s, char c);
int     	ft_strlcpy(char *dst, const char *src, size_t size);
void		ss(t_pile *sts);
void		sa(t_pile *sts);
void		sb(t_pile *sts);
void		pa(t_pile *sts);
void		pb(t_pile *sts);
void		ra(t_pile *sts);
void		rb(t_pile *sts);
void		rr(t_pile *sts);
void		rra(t_pile *sts);
void		rrb(t_pile *sts);
void		rrr(t_pile *sts);
void		checknumb(char *str_arg, int *num);
void		check_repeat(int *arr, int size);
int	        checkargs(char *str, int *num);
void		ft_error(char *msj, int n);
int         count_elem(char **argv, char separator);
t_list  	*init_lst(int size);
t_pile		*init_pile(int size_a, int size_b);
int         *ft_pars(int argc, char **argv, int *num);
t_pile      *int_cpy_to_lst(int *num, int size, t_pile *sts);
void 		index(int *sorted, t_pile *sta);
void    	ins_sort(int *array, int size);
void    	assig_index(t_pile *arr);
void        s_three(t_pile *stacks);
void        reverse_s_three(t_pile *stacks);

#endif
