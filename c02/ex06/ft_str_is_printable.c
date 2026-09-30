/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 20:20:52 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/16 13:29:22 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < ' ') || (str[i] > '~'))
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
	char	c = 5;
	value = ft_str_is_printable("ñ");
	value2 = ft_str_is_printable("bbb");
	value3 = ft_str_is_printable("2..");
	printf("%d", value);
	printf("%d", value2);
	printf("%d", value3);
		return 0;
}*/
