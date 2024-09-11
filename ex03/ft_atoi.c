/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:03:59 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/09 09:57:27 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	signal = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
	{
		i++;
	}
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			signal *= -1;
		}
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * signal);
}
/*#include <stdio.h>
int main()
{
	char k[] = "      	 	 	 	-+1234ab567";
	printf("%d", ft_atoi(k));
}*/