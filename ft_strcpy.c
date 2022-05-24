#include "libft.h"

char    *ft_strcpy(char *dest, char const *src)
{
        int i;

        i = 0;
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return dest;
}
