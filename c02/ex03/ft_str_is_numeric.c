/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:18:12 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/15 16:26:48 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int value;
	//value = ft_str_is_numeric("bbb");
	//value = ft_str_is_numeric("222");
	value = ft_str_is_numeric("2..");
	printf("%d", value);
		return 0;
}*/
