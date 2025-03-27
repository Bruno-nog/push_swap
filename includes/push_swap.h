/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:09:15 by brunogue          #+#    #+#             */
/*   Updated: 2025/03/27 14:54:53 by brunogue         ###   ########.fr       */
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

t_stack	*ft_stack_new(int content);
void    ft_add_back(t_stack **stack, t_stack *stack_new);

//OPERATIONS
void	ft_pa(t_stack **a, t_stack **b, int i);
void	ft_pb(t_stack **a, t_stack **b, int i);
void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_stack **a, t_stack **b, int i);
void	ft_sa(t_stack **a, int i);

//SORT
t_stack	*ft_sort_a(t_stack **a, t_stack **b);
t_stack	*ft_sort_b(t_stack **a);
void	ft_sort(t_stack **a);
void	ft_sort_b_3(t_stack **a, t_stack **b);
void	ft_sort_three(t_stack **a);

//PROCESS
t_stack	*ft_process(int ac, char **av);
t_stack	*ft_subprocess(char **av);

//ERRORS
void	ft_error_digit(void);
void	ft_error_limit_numbers(void);
void	ft_error_arg(void);
void	ft_error_stack_dup(void);

//CHECKS
int	ft_checkdup(t_stack *a);
int	ft_checksorted(t_stack *a);

//FREE&PARSE
void	ft_free(t_stack **lst);
void	ft_list_args(char **av, t_stack **a);
t_stack	*ft_parse_args_quoted(char **av);
t_stack	*ft_parse(int ac, char **av);
void	ft_free_str(char **lst);

//ROTATIONS CASES
int	ft_rarb(t_stack *a, t_stack *b, int c);
int	ft_rrarrb(t_stack *a, t_stack *b, int c);
int	ft_rrarb(t_stack *a, t_stack *b, int c);
int	ft_rarrb(t_stack *a, t_stack *b, int c);

//UTILS
int	ft_atoi2(const char *str);

#endif