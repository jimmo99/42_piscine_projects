/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:46:46 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/29 14:33:20 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	numb;
	char	l_numb;

	numb = nb;
	if (numb < 0)
	{
		write(1, "-", 1);
		numb = numb * -1;
	}
	l_numb = (numb % 10) + '0';
	if (numb < 10)
		write(1, &l_numb, 1);
	else
	{
		ft_putnbr(numb / 10);
		write(1, &l_numb, 1);
	}
}
