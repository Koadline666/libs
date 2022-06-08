/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:49:24 by afenzl            #+#    #+#             */
/*   Updated: 2022/04/11 21:02:40 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return ((char *)ft_memcpy(ptr, s1, len));
}
