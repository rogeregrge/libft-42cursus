/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/29 16:45:54 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:55:31 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_total;
	size_t	i;

	len_total = ft_strlen(src) + ft_strlen(dst);
	len_dst = ft_strlen(dst);
	i = 0;
	if (size < len_dst)
		return (ft_strlen(src) + size);
	while ((src[i] != '\0') && ((len_dst + 1) < size))
		dst[len_dst++] = src[i++];
	if (len_dst != size)
		dst[len_dst] = '\0';
	return (len_total);
}
