/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:13:10 by naddino           #+#    #+#             */
/*   Updated: 2021/10/12 00:13:11 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_base(char *base)
{
	int	x;
	int	i;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i + 1])
	{
		x = i + 1;
		while (base[x])
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (x);
}
