int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
		|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
