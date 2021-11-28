/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:10:58 by jbarette          #+#    #+#             */
/*   Updated: 2021/06/15 18:19:34 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	ascii[128];
	int	i = 0;

	while(i < 128)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (*s1 && s1[i])
	{
		if (ascii[(int)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			ascii[(int)s1[i]] = 1;
		} 
		i++;
	}
	i = 0;
	while(*s2 && s2[i])
	{
		if(ascii[(int) s2[i]] == 0)
		{
			write(1, &s2[i], 1);
			ascii[(int)s2[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return(0);
}