/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:17:08 by seupark           #+#    #+#             */
/*   Updated: 2020/11/01 18:38:28 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_space(char c)
{
	if (c == ' ')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	while (str[i] && check_space(str[i]) == 1)
		i++;
	minus = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * (minus % 2 == 1 ? -1 : 1));
}
