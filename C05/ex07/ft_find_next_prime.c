/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:51:49 by seupark           #+#    #+#             */
/*   Updated: 2020/11/01 19:27:15 by seupark          ###   ########.fr       */
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

void	sosu_go(int *arr, int n)
{
	int		i;
	int		j;

	i = 2;
	while (i <= n)
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

int		ft_find_next_prime(int nb)
{
	int		sosu[nb + 31];
	int		i;

	one_padding(sosu, nb + 30);
	sosu[0] = 0;
	sosu[1] = 0;
	sosu[2] = 1;
	sosu_go(sosu, nb + 30);
	if (sosu[nb])
		return (nb);
	i = nb + 1;
	while (1)
	{
		if (sosu[i])
			break ;
		i++;
	}
	return (i);
}
