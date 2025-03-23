/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:25:25 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/23 17:00:02 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;
	
	new = malloc(sizeof (t_stack));
	if (!new)
		write (1, "Memory usage error\n", 19);
	new->nbr = content;
	new->next = NULL;
	return (new);
}
