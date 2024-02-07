/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:38:23 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/17 22:36:09 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\0') || (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("HELLO"));
// 	printf("%d\n", ft_str_is_uppercase("lol"));
// 	printf("%d", ft_str_is_uppercase(""));
// }