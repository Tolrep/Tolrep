/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epierlot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:01:09 by epierlot          #+#    #+#             */
/*   Updated: 2017/09/21 18:25:30 by epierlot         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

void	ft_print(char **argv)
{
	int		d;

	d = 1;
	while (argv[d] != '\0')
	{
		ft_putstr(argv[d]);
		ft_putchar('\n');
		d++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	char	*b;
	int		c;

	a = 1;
	c = 1;
	while (a < argc - 1)
	{
		c = 1;
		while (c < argc - 1)
		{
			if (ft_strcmp(argv[c], argv[c + 1]) > 0)
			{
				b = argv[c];
				argv[c] = argv[c + 1];
				argv[c + 1] = b;
			}
			c++;
		}
		a++;
	}
	ft_print(&*argv);
	return (0);
}
