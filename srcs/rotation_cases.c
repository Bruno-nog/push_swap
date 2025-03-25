/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:46:23 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/25 17:40:21 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_node_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_node_b(a, c))
		i = ft_lstsize(b) - ft_find_node_b(b, c);
	if ((i < (ft_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	return (i);
}

int	ft_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	i = ft_find_node_b(b, c) + i;
	return (i);
}

int	ft_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_node_b(b, c))
		i = ft_lstsize(b) - ft_find_node_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
