/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:57:01 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/17 22:35:59 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\0') || (str[i] >= 32 && str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_str_is_printable("\t"));
// 	printf("%d\n", ft_str_is_printable("i'm bored!"));
// 	printf("%d", ft_str_is_printable(""));
// }