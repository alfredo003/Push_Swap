/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:08:33 by achivela          #+#    #+#             */
/*   Updated: 2024/06/19 18:08:37 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stacks *stacks, char ch)
{
	t_stack_b	*head_b;

	head_b = stacks->head_b;
	if (ch == 'a')
	{
		if (head_b == NULL)
			return ;
		else if (head_b->next == NULL)
			ft_last_push_a(stacks);
		else
			ft_push_a(stacks);
	}
	else if (ch == 'b')
	{
		if (head_b == NULL)
			ft_push_empty_b(stacks);
		else
			ft_push_b(stacks);
	}
}

void	ft_last_push_a(t_stacks *stacks)
{
	t_stack_a	*tmp_node;

	tmp_node = stacks->head_a;
	stacks->head_a = (t_stack_a *)stacks->head_b;
	stacks->head_a->next = tmp_node;
	stacks->head_b = NULL;
	ft_printf("pa\n");
}

void	ft_push_empty_b(t_stacks *stacks)
{
	stacks->head_b = (t_stack_b *)stacks->head_a;
	stacks->head_a = stacks->head_a->next;
	stacks->head_b->next = NULL;
	ft_printf("pb\n");
}

void	ft_push_b(t_stacks *stacks)
{
	t_stack_b	*tmp_node;

	tmp_node = stacks->head_b;
	stacks->head_b = (t_stack_b *)stacks->head_a;
	stacks->head_a = stacks->head_a->next;
	stacks->head_b->next = tmp_node;
	ft_printf("pb\n");
}

void	ft_push_a(t_stacks *stacks)
{
	t_stack_a	*tmp_node;

	tmp_node = stacks->head_a;
	stacks->head_a = (t_stack_a *)stacks->head_b;
	stacks->head_b = stacks->head_b->next;
	stacks->head_a->next = tmp_node;
	ft_printf("pa\n");
}
