/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnyama <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:46:54 by tnyama            #+#    #+#             */
/*   Updated: 2018/04/17 17:38:49 by tnyama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str <= 122)
		{
			str[a] = str[a] - 32;
			a++;
		}
		return (str);
	}
}