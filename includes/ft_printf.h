/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:05:44 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/12 21:03:42 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_intlen(unsigned int nb, char type);
int		ft_lintlen(long unsigned int nb, char type);
int		ft_xlen(unsigned long nbr);

char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_xtoa(unsigned long nbr, char type);
char	*ft_ltoa(long int n);

int		ft_put_char_int(char c);
int		ft_put_str_int(char *str);

int		ft_put_nbr_int(int nbr);
int		ft_put_uint_int(unsigned int nb);
int		ft_put_hex_int(unsigned int nbr, char type);
int		ft_put_ptr_int(unsigned long nbr);
int		ft_put_long_int(long int nb);

int		ft_printf(const char *str, ...);

#endif
