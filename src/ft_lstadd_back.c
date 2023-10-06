/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:06:21 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:41:28 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*holder;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	holder = ft_lstlast(*lst);
	holder->next = new;
}
