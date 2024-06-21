/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:01:29 by achivela          #+#    #+#             */
/*   Updated: 2024/06/19 18:01:38 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stacks *stacks)
{
	if (check_list_order(stacks))
		return ;
	if (ft_listsize_a(stacks->head_a) == 2)
		sort_two(stacks);
	else if (ft_listsize_a(stacks->head_a) == 3)
		sort_three(stacks, 1);
	else if (ft_listsize_a(stacks->head_a) == 4)
		sort_four(stacks);
	ft_push(stacks, 'b');
	ft_push(stacks, 'b');
	move_cheapest(stacks);
	sort_three(stacks, 0);
	move_stack_a(stacks);
}
