/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:05:04 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/20 18:43:47 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_strcmp("what?", "what"));
// 	printf("\n%d", ft_strcmp("lol", "lolllll"));
// 	printf("\n%d", ft_strcmp("w", "what"));
// 	printf("\n%d", ft_strcmp("lol", "lol"));
// }