/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:41:21 by hassaleh          #+#    #+#             */
/*   Updated: 2023/08/01 19:52:43 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tmp;
	int		i;
	int		k;
	int		j;

	tmp = malloc(sizeof(strs));
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			tmp[j++] = strs[i][k++];
		}
		k = 0;
		while (sep[k] != '\0' && i < size - 1)
		{
			tmp[j++] = sep[k++];
		}
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}

// #include <stdio.h>
// int main(void)
// {
//     char *tab[3];
//     tab[0] = "lol";
//     tab[1] = "e=what";
//     tab[2] = "is";
//     printf("%s", ft_strjoin(3, tab, ", "));
// }
