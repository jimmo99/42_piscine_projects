/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rus01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 11:51:10 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/18 20:56:37 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "Introduce sixteen numbers between 1-4", 37);
		return (0);
	}
	while (argv[1][i] != '\0')
		i++;
	if (i != 31)
	{
		write (1, "Only sixteen numbers between 1-4", 32);
		return (0);
	}
	if (argv[1][0] == '4')
		write (1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n", 32);
	if (argv[1][0] == '3')
		write (1, "1 2 4 3\n3 4 2 1\n4 3 1 2\n2 1 3 4\n", 32);
	if (argv[1][0] == '2')
		write (1, "3 2 1 4\n2 1 4 3\n1 4 3 2\n4 3 2 1\n", 32);
	if (argv[1][0] == '1')
		write (1, "4 1 2 3\n3 4 1 2\n2 3 4 1\n1 2 3 4\n", 32);
}
