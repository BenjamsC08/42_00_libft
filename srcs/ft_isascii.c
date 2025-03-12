/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:09:11 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 09:01:30 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

int	ft_only_ascii(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isascii(*src))
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_isascii(68))
		printf("ok\n");
	else
		printf("nok\n");
}*/
