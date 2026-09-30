/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:25:36 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/10 11:44:29 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	variable1;
	int	variable2;

	variable1 = *a;
	variable2 = *b;
	*a = variable2;
	*b = variable1;
}
/*
temporal = *a
*a = *b
*b = temporal*
*/
