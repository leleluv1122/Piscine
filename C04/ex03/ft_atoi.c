/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:17:08 by seupark           #+#    #+#             */
/*   Updated: 2020/10/28 20:29:41 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		minus;
	int		idx;

	idx = 0;
	minus = 0;
	while (str[idx] != '\0')
	{
		

		idx++;
	}
}

int main(){
	char str[] = "---154aa";
	printf("%d", ft_atoi(str));
}
