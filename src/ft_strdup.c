/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:28:38 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:52:43 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
