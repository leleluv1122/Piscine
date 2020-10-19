/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:48:06 by seupark           #+#    #+#             */
/*   Updated: 2020/10/19 21:41:05 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	char	f;
	int		i;
	int		d;

	c = 'a';
	i = 0;
	while (1)
	{
		d = (int)c + i;
		f = (char)d;
		write(1, &f, 1);
		i++;
		if (i >= 26)
			break ;
	}
}
