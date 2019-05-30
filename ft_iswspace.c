

#include "Libft.h"

int	ft_iswspace(int c)
{
	if (c == '\t' || c == '\n' || c == ' ')
	{
		return (1);
	}
	return (0);
}
