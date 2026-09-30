/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:05:06 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/24 10:18:30 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[k] != '\0') && (k < nb))
	{
		(dest[i] = src[k]);
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
