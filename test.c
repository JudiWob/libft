
char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     n;

        i = 0;
        n = 0;
        while (dest[i] != '\0')
                i++;
        while (src[n] != '\0')
        {
                dest[i] = src [n];
                i++;
                n++;
        }
        dest[i] = '\0';
        return (dest);
}

#include <stdio.h>
#include <string.h>

int main (void)
{
     char dest[] = "abc";

     char src[] = "xyz";

     //printf("Library %s\n", strcat(dest, src));
     printf("Mine %s\n", ft_strcat(dest, src));
}
    