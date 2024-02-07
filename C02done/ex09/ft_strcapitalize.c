/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:13:06 by hassaleh          #+#    #+#             */
/*   Updated: 2023/07/17 22:35:23 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (t == 1)
				str[i] = str[i] -32;
			t = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			t = 0;
		else
			t = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "salut, comment tu vas";
// 	printf("%s", ft_strcapitalize(str));
// }