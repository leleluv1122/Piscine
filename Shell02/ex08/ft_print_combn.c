/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:25:37 by seupark           #+#    #+#             */
/*   Updated: 2020/10/19 21:25:34 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char arr[10];

void    print_charn(int n)
{
    int a = 0;
    while(a < n)
    {
        write(1, &arr[a++], 1);
    }

    int b = 0;
    a = 0;
    while(a < n)
    {
        if(10 - n + a + '0' != arr[a])
            break;
        b = 1;
		a++;
    }

    if(b == 1)
        return;
    char c = ',';
    write(1, &c, 1);
    c = ' ';
    write(1, &c, 1);
}

void    combi(int idx, int cnt, int n)
{
    if(cnt == n)
    {
        print_charn(n);
        return;
    }

    while(idx <= 10 - n + cnt)
    {
        arr[cnt] = idx + '0';
        combi(idx + 1, cnt + 1, n);
        idx++;
    }
}

void    ft_print_combn(int n)
{
     int a = 0;
     while(a < 10)
     {
        arr[0] = a + '0';
        combi(a + 1, 1, n);
        a++;
     }
}
