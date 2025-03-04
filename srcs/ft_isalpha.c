/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:09:37 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 09:01:13 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_only_alpha(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (!ft_isalpha(*src))
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_isalpha('B'))
		printf("ok\n");
	else
		printf("nok\n");
}*/
