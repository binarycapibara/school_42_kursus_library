/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:19:54 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/29 17:59:28 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_sqrt(long n)
{
	long	i;

	i = 1;
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (i < (n / 2))
	{
		if ((i * i) == n)
			return (i);
		i++;
	}
	return (0);
}
