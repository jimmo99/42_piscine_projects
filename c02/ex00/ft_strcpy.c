/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:52:40 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/15 09:40:41 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *src = "Holitas!";
	char dest[10] = "aaaaaaaaaa";
	ft_strcpy(dest, src);
	write(1, dest, 8);
	write(1, "\n", 1);
	return 0;
}*/
