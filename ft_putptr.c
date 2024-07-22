/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelka <oabdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:29:23 by oabdelka          #+#    #+#             */
/*   Updated: 2024/06/25 13:29:59 by oabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long long)ptr, 0);
	return (count);
}
