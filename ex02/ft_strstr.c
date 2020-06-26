/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:17:28 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/26 13:01:04 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putstr(char *str);

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	
	char *strN;
	
	strN = "";
	i = 0;
	n = 0;
	while(str[i] != '\0')
	{
		if(str[i] == to_find[n])
		{
			strN[n] = to_find[n];
		    n++;
		}
		i++;
	}

	return strN;
}

