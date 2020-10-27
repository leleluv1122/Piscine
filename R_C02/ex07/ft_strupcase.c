/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:29:43 by seupark           #+#    #+#             */
/*   Updated: 2020/10/25 14:35:52 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*c;

	c = str;
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (str);
}