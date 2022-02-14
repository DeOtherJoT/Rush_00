void	rush(int x, int y);

int		ft_atoi(char **str);

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	neg;

	res = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * neg);
}
