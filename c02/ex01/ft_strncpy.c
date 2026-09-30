/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:59:59 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/15 12:50:18 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*#include <unistd.h>
int	main(void)
{
	char dest[] = "aaaaaaaa";
	char *src = "Hola";
	ft_strncpy(dest, src, 2);
	
	int	i;

	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
		write (1, "\n", 1);
	return 0;

}*/
