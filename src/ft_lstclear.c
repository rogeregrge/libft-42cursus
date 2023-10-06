/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:06:59 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:41:32 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*holder;

	while (*lst != NULL)
	{
		if (!*lst)
			return ;
		holder = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = holder;
	}
	*lst = 0;
}
