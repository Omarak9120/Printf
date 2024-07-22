/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelka <oabdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:29:02 by oabdelka          #+#    #+#             */
/*   Updated: 2024/06/25 12:30:03 by oabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	while (n >= 10)
	{
		count += ft_putunbr(n / 10);
		n = n % 10;
	}
	count += ft_putchar(n + '0');
	return (count);
}
