//
// smiro
// ft_isalnum.c
// 2024-02
//

#include "type.h"

int	ft_isalnum(int c)
{
	return ft_isdigit(c) || ft_isalpha(c);
}
