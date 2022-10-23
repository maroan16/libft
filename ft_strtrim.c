/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:53:37 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/23 20:31:05 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	u;
	char	*s2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	u = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[u - 1] && ft_strchr(set, s1[u - 1]) && u > i)
		u--;
	s2 = (char *)malloc(sizeof(char) * (u + 1 - i));
	if (s2)
		ft_strlcpy(s2, s1 + i, u - i + 1);
	return (s2);
}
