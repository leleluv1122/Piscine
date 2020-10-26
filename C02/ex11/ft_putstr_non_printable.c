/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:46:02 by seupark           #+#    #+#             */
/*   Updated: 2020/10/26 15:53:30 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
	{
		print_hex(num / 16);
		print_hex(num % 16);
	}
	else
		write(1, &hex[num], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
