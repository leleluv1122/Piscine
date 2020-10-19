/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:16:21 by seupark           #+#    #+#             */
/*   Updated: 2020/10/19 15:52:48 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char first_arr[2];
char second_arr[2];

void print_char(){
    write(1, &first_arr[0], 1);
    write(1, &first_arr[1], 1);
    char c = ' ';
    write(1, &c, 1);
    write(1, &second_arr[0], 1);
    write(1, &second_arr[1], 1);
	if(first_arr[0] == '9' && first_arr[1] == '8' && second_arr[0] == '9' && second_arr[1] == '9')
        return;
    c = ',';
    write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
}

void combi(int idx){
    int a = idx + 1;
    while(a < 100){
        if(a < 10){
            second_arr[0] = '0';
            second_arr[1] = a + '0';
        }
        else{
            int d = a / 10;
            second_arr[0] = d + '0';
            d = a % 10;
            second_arr[1] = d + '0';
        }
        a++;
        print_char();
    }
}

void ft_print_comb2(void){
    int a = 0;
    while(a < 100){
        if(a < 10){
            first_arr[0] = '0';
            first_arr[1] = a + '0';
        }
        else{
            int d = a / 10;
            first_arr[0] = d + '0';
            d = a % 10;
            first_arr[1] = d + '0';
        }
        combi(a);
        a++;
    }
}
