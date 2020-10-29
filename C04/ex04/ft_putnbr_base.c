/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:05:25 by seupark           #+#    #+#             */
/*   Updated: 2020/10/29 20:48:47 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

int		exception(char *str)
{
	int	i;
	int	j;

	if (str == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	print(int n, char *c, unsigned int len)
{
	unsigned int	nbr;

	if (n < 0)
	{
		print_char('-');
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= len)
		print(nbr / len, c, len);
	print_char(c[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	str_len;

	str_len = 2;
	str_len = exception(base);
	if (!str_len)
		return ;
	print(nbr, base, str_len);
}

int main(){
	ft_putnbr_base(7, "poneyvif");
}
