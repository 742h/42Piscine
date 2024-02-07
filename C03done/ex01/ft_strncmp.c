/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:31:42 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/20 19:49:55 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_strncmp("what?", "what", 6));
// 	printf("\n%d", ft_strncmp("lol", "lolllll", 4));
// 	printf("\n%d", ft_strncmp("w", "what", 2));
// 	printf("\n%d", ft_strncmp("lol", "lol", 2));
// }