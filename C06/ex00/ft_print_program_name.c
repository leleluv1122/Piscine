/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:29:52 by seupark           #+#    #+#             */
/*   Updated: 2020/11/01 22:41:45 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int		n;

	n = 0;
	while (argv[0][n] != '\0')
	{
		print_char(argv[0][n]);
		n++;
	}
	print_char('\n');
	return (0);
}
