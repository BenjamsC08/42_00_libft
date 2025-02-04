/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moa <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 07:09:50 by moa               #+#    #+#             */
/*   Updated: 2025/02/04 07:11:24 by moa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(int c)
{
	if (c == '\t' || c == ' ' || c == '\r')
		return (1);
	return (0);
}
