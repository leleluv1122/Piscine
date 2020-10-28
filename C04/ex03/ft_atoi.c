/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:17:08 by seupark           #+#    #+#             */
/*   Updated: 2020/10/28 21:47:18 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_space(char c)
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

int	ft_atoi(char *str)
{
	int	idx;
	int	result;
	int	minus;

	idx = 0;
	result = 0;
	minus = 0;
	while (str[idx] != '\0')
	{
		if (check_space(str[idx]) || str[idx] == '+')
			;
		else if (str[idx] == '-')
			minus++;
		else if (str[idx] >= '0' && str[idx] <= '9')
		{
			result *= 10;
			result += (str[idx] - '0');
		}
		else
			break ;
		idx++;
	}
	if (minus % 2 == 1)
		result *= -1;
	return (result);
}
