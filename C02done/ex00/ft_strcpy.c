/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:31:58 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/16 22:17:58 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
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

// #include <stdio.h>

// int main(void)
// {
// 	char name1[] = "Hasan";
// 	char name2[] = "Saleh";
// 	printf("%s %s\n", name1, name2);
// 	ft_strcpy(name1, name2);
// 	printf("%s %s", name1, name2);
// 	return (0);
// }