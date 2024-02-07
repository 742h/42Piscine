/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:56 by hassaleh          #+#    #+#             */
/*   Updated: 2023/08/01 19:51:14 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*str_cpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i +1);
	if (!(dest))
		return (NULL);
	return (str_cpy(src, dest));
}

// int main(int argc, char **argv)
// {
// 	char *m;
// 	char *t;
// 	if (argc == 2)
// 	{
// 		m = ft_strdup(argv[1]);
// 		t = strdup(argv[1]);
// 		printf (":%s:\n:%s:\n", m, t);
// 	}
// 	return (0);
// 	free (m);
// }