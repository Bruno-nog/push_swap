/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:15:40 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/20 18:06:42 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, int i)
{
	t_stack	*temp;

	if (!*b)
		return ;
	*b = temp;
	*b = *a;
	*a = (*a)->next;
}

void	ft_pb(t_stack **a, t_stack **b, int i)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	if (i == 0)
		write (1, "pb\n", 3);
}

void	ft_ra(t_stack **a, int i)
{
	t_stack	*temp;
	
	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = temp;
	*a = temp->next;
	if (i == 0)
		write (1, "ra\n", 3);
}

