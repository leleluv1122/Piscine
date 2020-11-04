/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:50:06 by seupark           #+#    #+#             */
/*   Updated: 2020/11/04 17:37:09 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_cpy(char *str)
{
	char	*rst;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(rst = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (str[i])
	{
		rst[i] = str[i];
		i++;
	}
	rst[i] = '\0';
	return (rst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*st_av;
	int				i;

	if (!(st_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] && i < ac)
	{
		st_av[i].size = ft_strlen(av[i]);
		st_av[i].str = av[i];
		st_av[i].copy = ft_cpy(av[i]);
		i++;
	}
	st_av[i].size = 0;
	st_av[i].str = 0;
	st_av[i].copy = 0;
}
