/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:01:19 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/20 18:45:40 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
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
// 	printf ("%s", ft_strncat(dest, src, 3));
// }