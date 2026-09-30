/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:12:35 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/07/27 15:30:48 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RUSH02_H
# define RUSH02_H

# define HUNDRED 28
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_count_words(char *str);
int		ft_check_errors(int argc);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);


#endif
