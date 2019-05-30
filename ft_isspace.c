

#include "Libft.h"

int		ft_isspace(int c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' \
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}
