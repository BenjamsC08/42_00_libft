/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 04:39:13 by benjamsc          #+#    #+#             */
/*   Updated: 2025/05/28 04:39:13 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
