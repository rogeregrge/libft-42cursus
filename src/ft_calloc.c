/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:04:27 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:41:12 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nbr);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nbr);
	return (ptr);
}
