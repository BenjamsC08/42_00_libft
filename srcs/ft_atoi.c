/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:57:29 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/11 20:57:31 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		nb;
	int		n_n;
	char	*s;

	nb = 0;
	n_n = 1;
	s = (char *)nptr;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			n_n *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nb *= 10;
		nb += (*(s++) - '0');
	}
	return (nb * n_n);
}
/*
int main()
{
	#include <stdio.h>
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("-+8"), atoi("-+8"));
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("--8"), atoi("--8"));
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("1234a56789"), atoi("1234a56789"));
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("2147483647"), atoi("2147483647"));
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("ft_atoi: %d, atoi: %d\n",ft_atoi("+8bit"), atoi("+8bit"));
}*/
