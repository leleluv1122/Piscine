/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:46:02 by seupark           #+#    #+#             */
/*   Updated: 2020/10/28 09:33:46 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_char_printable(char c)
{
	if (c >= ' ' && c < 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				idx;
	unsigned char	current;

	idx = 0;
	while (1)
	{
		current = str[idx];
		if (current == '\0')
			break ;
		if (is_char_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		idx++;
	}
}
