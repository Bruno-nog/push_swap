/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:15:40 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/25 18:13:48 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, int i)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *a;
	*a = *b;
	*a = (*a)->next;
	*b = temp->next;
	if (i == 0)
		write (1, "pa\n", 3);
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

void	ft_rb(t_stack **b, int i)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (i == 0)
		write (1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	ra(a, 1);
	rb(b, 1);
	if (i == 0)
		write (1, "rr\n", 3);
}
