/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:09:15 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/22 17:32:02 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack_node
{
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

#endif