/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:57:07 by seupark           #+#    #+#             */
/*   Updated: 2020/10/19 17:07:22 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	arr[10];

void	print_char(int size){
    while (size--)
	{
        write(1, &arr[size], 1);
    }
}

void	char_fix(int nb){
    int	size = 0;

    while(nb)
    {
        arr[size] = (char)(nb % 10) + '0';
        nb /= 10;
        size++;
    }

    print_char(size);
}

void	ft_putnbr(int nb){
    if(nb > 0)
    {
        char_fix(nb);
    }
    else if(nb == 0)
    {
        char	c = (char)nb + '0';
        write(1, &c, 1);
    }
    else
    {
        char	c = '-';
        write(1, &c, 1);
        if (nb == -2147483648)
        {
            char* c = "2147483648";
            write(1, c, 10);
        }
        else
        {
            char_fix(-1 * nb);
        }
    }
}
