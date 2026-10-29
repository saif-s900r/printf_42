/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:29:31 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/22 22:20:15 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int n)
{
	int		count;
	long	nbr;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count += print_char('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += print_decimal(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}
