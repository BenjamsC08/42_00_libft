/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:45:28 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/24 11:10:01 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnl_list	*ft_gnl_lstlast(t_gnl_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

int	found_nwline(t_gnl_list *storage)
{
	t_gnl_list	*curr;
	int			i;

	if (storage == NULL)
		return (0);
	i = 0;
	curr = ft_gnl_lstlast(storage);
	while (curr->content[i])
	{
		if (curr->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	alloc_size_line(char **ptr_line, t_gnl_list *storage)
{
	int	i;
	int	len;

	len = 0;
	while (storage)
	{
		i = 0;
		while (storage->content[i])
		{
			if (storage->content[i] == '\n')
			{
				len++;
				break ;
			}
			len++;
			i++;
		}
		storage = storage->next;
	}
	*ptr_line = (char *)malloc((len + 1) * sizeof(char));
}

void	free_all_storage(t_gnl_list *stash)
{
	t_gnl_list	*current;
	t_gnl_list	*next;

	current = stash;
	while (current)
	{
		free(current->content);
		next = current->next;
		free(current);
		current = next;
	}
}
