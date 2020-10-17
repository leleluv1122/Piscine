/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:48:48 by seupark           #+#    #+#             */
/*   Updated: 2020/10/17 20:48:51 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){
	char c = '0';
	int i = 0;
	while(1){
		int d = (int)c + i;
		char g = (char)d;
		write(1, &g, 1);
		i++;
		if(i > 9)
			break;
	}
}
