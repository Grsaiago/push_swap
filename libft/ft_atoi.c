/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:55:33 by gsaiago           #+#    #+#             */
/*   Updated: 2022/06/15 16:53:59 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tatoi(const char *str, int sign);

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' && str[1] >= '0' && str[1] <= '9')
		str++;
	else if (*str == '-' && str[1] >= '0' && str[1] <= '9')
	{
		str++;
		sign = -1;
	}
	if (*str >= '0' && *str <= '9')
		return (ft_tatoi(str, sign));
	return (0);
}

static int	ft_tatoi(const char *str, int sign)
{
	int	len;
	int	i;
	int	max;
	int	numb;

	i = -1;
	len = 0;
	max = 0;
	numb = 0;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	max = len;
	while (++i < max)
		numb = numb + (str[i] - 48) * ft_pow(10, --len);
	return (numb * sign);
}
