/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:45:47 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/30 18:57:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	res;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error_digit();
		res = res * 10 + (*str - '0');
		str++;
	}
	if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
		ft_error_limit_numbers();
	return (res * sign);
}

t_stack	*ft_stack_last(t_stack *lst)
{
	t_stack	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

int	ft_stack_size(t_stack *lst)
{
	t_stack	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	ft_min_number(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int	ft_max_number(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}
