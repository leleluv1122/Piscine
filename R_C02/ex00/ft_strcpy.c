/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:40:27 by seupark           #+#    #+#             */
/*   Updated: 2020/10/26 19:28:49 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*c;
	int		num;

	c = src;
	num = 0;
	while (*c)
	{
		dest[num] = *c;
		c++;
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
