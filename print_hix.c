/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:41:46 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/22 22:34:24 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hix(unsigned long n)
{
	int		count;
	int		i;
	char	*hix;

	hix = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hix(n / 16);
	i = n % 16;
	count += write(1, &hix[i], 1);
	return (count);
}
