/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:05:08 by dacastil          #+#    #+#             */
/*   Updated: 2025/01/18 21:13:14 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ins_sort(int *array, int size)
{
    int j;
    int i;
    int value;

    i = 1;
    while (i < size)
    {
        j = i - 1;
        value = array[i];
        while (j >= 0 && array[j] > value)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = value;
        i++;
    }
}

void    index(int *sorted, t_pile *sta)
{
    int     i;
    int     j;
    int     flag;
    t_list  *temp;

    i = 0;
    temp = sta->a;
   while (i < sta->ia)
    {
        j = 0;
        flag = 0;
        while (j < sta->ia && !flag)
        {
            if (sta->a->content == sorted[j])
            {
                sta->a->index = j;
                flag = 1;
            }
            j++;
        }
        sta->a = sta->a->next;
        i++;
    }
    sta->a = temp;
}

void    assig_index(t_pile *sts)
{
    int     *sorted;
    int     i;
    int     j;
    t_list  *temp;

    i = 0;
    temp = sts->a;
    sorted = (int *)malloc(sts->ia * sizeof(int));
    if (!sorted)
        return ;
    while (i < sts->ia)
    {
        sorted[i] = sts->a->content;
        i++;
        sts->a = sts->a->next;
    }
    sts->a = temp;
    ins_sort(sorted, sts->ia);
    i = 0;
    index(sorted, sts);
    free(sorted);
}


