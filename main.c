/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:01:39 by tmckinno          #+#    #+#             */
/*   Updated: 2017/07/15 14:02:46 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	// char test[] = "1234";

	ft_printf("%#x\n", -42);
	printf("%#7x\n", -42);

	// printf("%.10i", 100);
	return (0);
}
