/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majacqua <majacqua@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:55:13 by majacqua          #+#    #+#             */
/*   Updated: 2021/11/27 13:17:19 by majacqua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{	
	t_lstack	*stack_a;
	t_lstack	*stack_b;
	t_lstack	*iter;

	if (create_start_stack(&stack_a, argc, argv))
		return (1);
	ft_print_list(&stack_a);
	printf("-------------------------\n");
	if (!is_sorted(&stack_a))
		return (0);
	if (argc <= 7)
		tiny_sort(&stack_a, &stack_b);
	else
		large_sort(&stack_a, &stack_b);
	printf("-----Sorted Stack A------\n");
	ft_print_list(&stack_a);
	printf("-----\n");
	ft_print_list(&stack_b);
	return (0);
}
