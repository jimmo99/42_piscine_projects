/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:00:55 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/16 12:12:03 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			(str[i]) = (str[i] +32);
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "FEAR";
	ft_strlowcase(str);
	printf("%s", str);	
}*/
