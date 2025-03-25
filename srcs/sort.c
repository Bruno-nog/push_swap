/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:56:55 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/25 19:13:56 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, temp->nbr))
				i = ft_apply_rarb(a, b, temp->nbr, 'b');
			else if (i == ft_rarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rarrb(a, b, temp->nbr, 'b');
			else if (i == ft_rrarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarrb(a, b, temp->nbr, 'b');
			else if (i == ft_rrarb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarb(a, b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}

t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_sort_b_till_3(a, &b);
	if (!ft_checksorted(*a))
		ft_sort_three(a);
	return (b).
}

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_sa(a, 0);
	else
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		i = 
	}
}