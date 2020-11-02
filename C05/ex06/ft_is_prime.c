/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:48:50 by seupark           #+#    #+#             */
/*   Updated: 2020/11/02 16:44:51 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	one_padding(int *arr, int n)
{
	while (n)
	{
		arr[n] = 1;
		n--;
	}
}

int		ft_sqrt(int n)
{
	int		i;

	i = 0;
	while (i < 46341)
	{
		if (i * i >= n)
			break ;
		i++;
	}
	return (i);
}

void	sosu_go(int *arr, int n)
{
	int		i;
	int		j;

	i = 2;
	while (i <= ft_sqrt(n))
	{
		if (arr[i])
		{
			j = i + i;
			while (j <= n)
			{
				arr[j] = 0;
				j += i;
			}
		}
		i++;
	}
}

int		ft_is_prime(int nb)
{
	int		sosu[nb + 1];

	one_padding(sosu, nb);
	sosu[0] = 0;
	sosu[1] = 0;
	sosu[2] = 1;
	sosu_go(sosu, nb);
	return (sosu[nb]);
}
