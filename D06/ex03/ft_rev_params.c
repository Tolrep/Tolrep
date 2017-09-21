/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epierlot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:10:12 by epierlot          #+#    #+#             */
/*   Updated: 2017/09/21 17:25:50 by epierlot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;

	a = argc - 1;
	while (argv[a] != '\0' && a > 0)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a--;
	}
	return (0);
}
