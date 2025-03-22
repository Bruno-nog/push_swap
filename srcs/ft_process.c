/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:59:32 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/22 19:28:06 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi(const char *str)
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
			write(1, "Must be digits\n", 15);
		res = res * 10 + (*str - '0');
		str++;
	}
	if ((res * i) > 2147483647 || (res * i) < -2147483648)
		write (1, "Reach limits of number\n", 23);
	return (res * sign);
}

t_stack	*ft_subprocess(char **av)
{
	t_stack	*a;
	char	**temp;
	int		i;
	int		j;
	
	a = NULL;
	i = 0;
	temp = ft_split(av[1], ' ');
	while (temp[i])
	{
		j = ft_atoi(temp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_free_str(temp);
	free(temp);
	return (a);
}

t_stack	*ft_process(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		x;

	i = 1;
	a = NULL;
	if (ac < 2)
		write (1, "Error\n", 6);
	if (ac == 2)
		a = ft_subprocess(av);
	else
	{
		while (i < ac)
		{
			x = ft_atoi(av[i]);
			ft_add_back(&a, ft_stack_new(x));
			i++;
		}
	}
	return (a);
}
