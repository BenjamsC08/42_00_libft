/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:10:17 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 09:02:17 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_only_print(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isprint(*src))
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_isalnum(68))
		printf("ok\n");
	else
		printf("nok\n");
}*/
