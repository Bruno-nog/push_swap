/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:16:30 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/24 18:23:58 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;
	
	temp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (temp)
	{
		if (i > ft_case_rarb_a(a, b, temp->nbr))
			i = ft_case_rarb_a(a, b, temp->nbr);
		
	}
}