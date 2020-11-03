/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:29:43 by seupark           #+#    #+#             */
/*   Updated: 2020/11/02 21:56:59 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	sort(int argc, char *argv[])
{
	int		i;
	int		length;
	char	*c;
	int		tmp_i;

	length = argc - 1;
	while (length)
	{
		i = 1;
		tmp_i = 1;
		c = argv[1];
		while (i <= length)
		{
			if (ft_strcmp(c, argv[i]) < 0)
			{
				c = argv[i];
				tmp_i = i;
			}
			i++;
		}
		argv[tmp_i] = argv[length];
		argv[length] = c;
		length--;
	}
}

void	print(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	sort(argc, argv);
	print(argc, argv);
	return (0);
}
