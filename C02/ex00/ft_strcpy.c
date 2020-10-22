/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:40:27 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 12:38:42 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*c;
	int	num;

	c = src;
	num = 0;
	while(1)
	{
		if (*c == '\0')
			break ;
		dest[num] = *c;
		c++;
		num++;
	}
	return (dest);
}