/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:55:54 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/15 20:13:41 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	int value2;
	int value3;
	value = ft_str_is_uppercase("AAA");
	value2 = ft_str_is_uppercase("bbb");
	value3 = ft_str_is_uppercase("2..");
	printf("%d", value);
	printf("%d", value2);
	printf("%d", value3);
		return 0;
}*/
