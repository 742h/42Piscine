/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:28:56 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/17 22:36:47 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\0') || (str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_str_is_numeric("232332"));
// 	printf("%d\n", ft_str_is_numeric("Hasan"));
// 	printf("%d", ft_str_is_numeric(""));
// }