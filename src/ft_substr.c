/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvidal <rvidal@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/30 23:34:37 by rvidal            #+#    #+#             */
/*   Updated: 2022/02/31 20:55:58 by rvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;

	if (!s)
		return (NULL);
	i = 0;
	j = start;
	slen = ft_strlen(s);
	if (((slen - start) > len) && (start < slen))
		sub = malloc((len * sizeof(char) + 1));
	else if (start > slen)
		sub = malloc(sizeof(char));
	else
		sub = malloc(((slen - start) * sizeof(char) + 1));
	if (!sub)
		 return (NULL);
	if ((start < slen))
	{
		while ((i < len) && s[j])
			sub[i++] = s[j++];
	}
	sub[i] = '\0';
	return (sub);
}
