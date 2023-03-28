void	rush(int x, int y, int flag);

int	ft_atoi(char *str)
{
	int	ret;
	int	neg;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	ret = 0;
	while (*str && (*str >= '0' || *str <= '9'))
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret * neg);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]), ft_atoi(argv[3]));
	return(0);
}