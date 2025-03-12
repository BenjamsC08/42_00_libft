/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:02:03 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/12 20:34:43 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	parse_format(va_list list, char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_put_char_int_fd(fd, va_arg(list, int));
	if (type == 's')
		len += ft_put_str_int_fd(fd, va_arg(list, char *));
	if (type == 'p')
		len += ft_put_ptr_int_fd(fd, va_arg(list, unsigned long));
	if (type == 'd' || type == 'i')
		len += ft_put_nbr_int_fd(fd, va_arg(list, int));
	if (type == 'u')
		len += ft_put_uint_int_fd(fd, va_arg(list, unsigned int));
	if (type == 'x' || type == 'X')
		len += ft_put_hex_int_fd(fd, va_arg(list, unsigned int), type);
	if (type == '%')
		len += ft_put_char_int_fd(fd, '%');
	return (len);
}

int	ft_fprintf(int fd, const char *str, ...)
{
	va_list	list;
	int		length;
	char	*s;

	if (!str || fd < 0 || fd > 1024)
		return (-1);
	s = (char *)str - 1;
	length = 0;
	va_start(list, str);
	while (*(++s))
	{
		if (*s == '%')
			length += parse_format(fd, list, *(++s));
		else
			length += ft_put_char_int_fd(fd, *s);
	}
	va_end(list);
	return (length);
}
