/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annafenzl <annafenzl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:45:04 by afenzl            #+#    #+#             */
/*   Updated: 2024/03/10 14:54:54 by annafenzl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static int	ft_strspan(char *s, const char *delim)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i++] == delim[j++])
	{
		if (delim[j] == '\0')
			j = 0;
	}
	return (i - j);
}

char	*ft_strstok_util(char *s, const char *delim)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i++] == delim[j])
		{
			if (delim[++j] == '\0')
			{
				s[i - j] = '\0';
				return (&s[i]);
			}
		}
		else
			j = 0;
	}
	return (NULL);
}

char	*ft_strtok(char *s, const char *delim)
{
	static char	*last;
	char		*tok;
	int			i;
	int			j;

	if (!s && !last || !delim)
		return (NULL);
	if (last)
		s = last;
	i = ft_strspan(s, delim);
	tok = &s[i];
	if (tok[0] = '\0')
		return NULL;
	last = ft_strstok_util(tok, delim);
	return (tok);
}
