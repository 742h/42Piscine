/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:05:08 by hassaleh          #+#    #+#             */
/*   Updated: 2023/11/02 15:55:57 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest [i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[] = "Hello ";
// 	char src[] = "there!";
// 	printf ("%s", ft_strcat(dest, src));
// }