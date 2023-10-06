/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:34:33 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:53:02 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s1;
	if (ft_strlen(s2) == 0)
		return (p);
	while (p[i] != '\0' && n >= ft_strlen(s2))
	{
		if (ft_strncmp(&p[i], s2, ft_strlen(s2)) == 0)
		{
			if (ft_strlen(s2) > n)
				return (NULL);
			return (&p[i]);
		}
		n--;
		i++;
	}
	return (NULL);
}
