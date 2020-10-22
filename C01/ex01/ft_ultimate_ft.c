/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:21:13 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 22:11:23 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int nbr;
	int *a1 = &nbr;
	int *a2 = &a1;
	int *a3 = &a2;
	int *a4 = &a3;
	int *a5 = &a4;
	int *a6 = &a5;
	int *a7 = &a6;
	int *a8 = &a7;
	int *a9 = &a8;

	ft_ultimate_ft(a9);
	printf("%d", nbr);
}
