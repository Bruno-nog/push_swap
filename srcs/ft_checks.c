/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:07 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/27 19:28:04 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	ft_checkdup(t_stack *a)
{
	t_stack	*temp;
	
	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->nbr == temp->nbr)
				return (1);
			temp = temp->next;	
		}
		a = a->next;
	}
	return (0);
}

int	ft_checksorted(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (i > a->nbr)
			return (0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}

void	checkalpha(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_error_digit();
			j++;
		}
		i++;
	}
}

int	checkargs(char **argv)
{
	checkalpha(argv);
	if (!checkerror(argv, 1, 0))
		return (false);
	return (true);
}

