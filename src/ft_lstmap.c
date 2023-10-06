/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:05:56 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:41:52 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*item;

	if (!lst)
		return (0);
	new = NULL;
	while (lst != NULL)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, item);
		lst = lst->next;
	}
	return (new);
}
