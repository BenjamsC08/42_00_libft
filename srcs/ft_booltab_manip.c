/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_booltab_manip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:31:36 by benjamsc          #+#    #+#             */
/*   Updated: 2025/03/04 08:52:15 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bit_set(t_booltab *tab, unsigned int pos)
{
	*tab |= (1U << pos);
}

void	bit_clear(t_booltab *tab, unsigned int pos)
{
	*tab &= ~(1U << pos);
}

unsigned int	bit_get(t_booltab tab, unsigned int pos)
{
	return ((tab >> pos) & 1U);
}

void	bit_toggle(t_booltab *tab, unsigned int pos)
{
	*tab ^= (1U << pos);
}
/*#define FLAG_RUNNING 0*/
/*#define FLAG_ERROR 1*/
/*#define FLAG_PAUSE 2*/
/*#define FLAG_ACTIVE 3*/
/**/
/*#define FLAG_RUNNING 0*/
/*#define FLAG_ERROR 1*/
/*#define FLAG_PAUSE 2*/
/*#define FLAG_ACTIVE 3*/
/**/
/*int main() {*/
/*    // Pour un petit nombre de flags (< 32), utilisation directe*/
/*    t_booltab flags = 0;*/
/*    BIT_SET(flags, FLAG_RUNNING);*/
/*    BIT_SET(flags, FLAG_ERROR);*/
/**/
/*    printf("Running: %u\n", BIT_GET(flags, FLAG_RUNNING)); // 1*/
/*    printf("Paused: %u\n", BIT_GET(flags, FLAG_PAUSED));   // 0*/
/*    printf("Error: %u\n", BIT_GET(flags, FLAG_ERROR));     // 1*/
/*    printf("Active: %u\n", BIT_GET(flags, FLAG_ACTIVE));   // 0*/
/**/
/*    // Pour plus de 32 bits, utilisation de BoolArray*/
/*    BoolArray ba = create_bool_array(64); // 64 bits par exemple*/
/*    BA_SET(ba, 35); // Set bit 35*/
/*    BA_SET(ba, FLAG_RUNNING); // Set bit 0 (running)*/
/**/
/*    printf("Bit 35: %u\n", BA_GET(ba, 35)); // 1*/
/*    printf("Running: %u\n", BA_GET(ba, FLAG_RUNNING)); // 1*/
/**/
/*    free_bool_array(&ba); // Nettoyage*/
/*    return (0);*/
/*}*/
