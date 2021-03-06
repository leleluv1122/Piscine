/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:02:31 by seupark           #+#    #+#             */
/*   Updated: 2020/11/02 21:55:59 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	i = argc - 1;
	while (i > 0)
	{
		print(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
