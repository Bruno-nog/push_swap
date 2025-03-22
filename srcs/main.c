/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:23:36 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/22 17:59:11 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a:

	a = ft_process(ac, av);
	if (!a || ft_checkdup)
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_check_sorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
