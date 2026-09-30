/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:35:47 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/29 18:29:54 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative_count;
	int	int_num;

	i = 0;
	negative_count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_count++;
		i++;
	}
	int_num = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		int_num = int_num * 10 + (str[i] - 48);
		i++;
	}
	if (negative_count % 2 == 1)
		int_num = int_num * -1;
	return (int_num);
}
/*int	main(void)
{
	char str[] = "  	 -++--487bc612";

	printf("%d\n", ft_atoi(str));
}*/
