/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:03:27 by achivela          #+#    #+#             */
/*   Updated: 2024/06/19 18:03:30 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stacks *stacks)
{
	struct t_moves	*moves;
	struct t_cheap	*cheap;
	t_values		*values;

	moves = ft_calloc(1, sizeof(t_moves));
	stacks->moves = moves;
	cheap = ft_calloc(1, sizeof(t_cheap));
	stacks->cheap = cheap;
	values = ft_calloc(1, sizeof(t_values));
	stacks->values = values;
	ft_push(stacks, 'b');
	sort_three(stacks, 0);
	move_stack_a(stacks);
	free_for_all(stacks);
	exit(0);
}
