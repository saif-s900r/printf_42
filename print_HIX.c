/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_HIX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:03:06 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/22 22:34:56 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hixc(unsigned long n)
{
	int		count;
	char	*hix;
	int		i;

	count = 0;
	hix = "0123456789ABCDEF";
	if (n >= 16)
		count += print_hixc(n / 16);
	i = n % 16;
	count += write(1, &hix[i], 1);
	return (count);
}
