/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:58:48 by achivela          #+#    #+#             */
/*   Updated: 2024/06/19 17:58:57 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	input_error(argc, argv);
	stacks.head_a = create_list_a(argc, argv);
	stacks.head_b = NULL;
	check_for_doubles(stacks.head_a);
	sorting(&stacks);
	free_for_all(&stacks);
}
