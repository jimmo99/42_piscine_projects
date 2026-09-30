/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:46:49 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/15 19:54:36 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	value = ft_str_is_lowercase("bbb");
	value2 = ft_str_is_lowercase("222");
	value3 = ft_str_is_lowercase("2..");
	printf("%d", value);
	printf("%d", value2);
	printf("%d", value3);
		return 0;
}*/
