/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:34:16 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/16 22:22:12 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\0') || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_str_is_lowercase("HII"));
// 	printf("%d\n", ft_str_is_lowercase("hasan"));
// 	printf("%d", ft_str_is_lowercase(""));
// }