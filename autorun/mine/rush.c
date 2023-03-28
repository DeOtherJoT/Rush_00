#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	ret = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!ret)
		return (NULL);
	i = -1;
	while (str[++i])
		ret[i] = str[i];
	ret[i] = '\0';
	return (ret);
}

char	*ft_getborder(int flag)
{
	char	*ret;

	if (flag == 0)
		ret = ft_strdup("o-o| |o-o");
	else if (flag == 1)
		ret = ft_strdup("/*\\* *\\*/");
	else if (flag == 2)
		ret = ft_strdup("ABAB BCBC");
	else if (flag == 3)
		ret = ft_strdup("ABCB BABC");
	else
		ret = ft_strdup("ABCB BCBA");
	return (ret);
}

void	print_line(char c_1, char c_2, int inBetween, char c_3)
{
	int	i;

	write(1, &c_1, 1);
	i = -1;
	while (++i < inBetween)
		write(1, &c_2, 1);
	if (inBetween >= 0)
		write(1, &c_3, 1);
	write(1, "\n", 1);
}

void	rush(int x, int y, int flag)
{
	char	*str;
	int		i;

	if (x < 1 || y < 1)
		return ((void)write(2, "Error\n", 6));
	str = ft_getborder(flag);
	print_line(str[0], str[1], x - 2, str[2]);
	i = -1;
	while (++i < (y - 2))
		print_line(str[3], str[4], x - 2, str[5]);
	if (y > 1)
		print_line(str[6], str[7], x - 2, str[8]);
	free(str);
}
