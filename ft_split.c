#include <stdlib.h>
#include <string.h>

int strslen(char const *s, char c)
{
    int strs;
    int i;

    strs = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            strs++;
            while (s[i] != c && s[i])
                i++;
        }
        else
            i++;
    }
    return (strs);
}

char    **eachmstr(char *s, char c, char **strs)
{
    int     i;
    int     j;
    int     k;
    
    i = 0;
    j = 0;
    k = 0;
    while (s[i])
    {
        j = 0;
        while (s[i] != c && s[i])
        {
            i++;
            j++;
        }
        strs[k] = (char **)malloc((j + 1) * (sizeof(char*)));
        if (!strs[k])
            return (0);
        if (s[i] == c)
            i++;
        k++;
    }
    return (cpystrs((char *)s, c, strs));
}

char    **cpystrs(char *s, char c, char **strs)
{
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    while (s[i])
    {
        j = 0;
        while (s[i] != c && s[i])
        {
            strs[k][j] = s[i];
            i++,
            j++;
        }
        if (s[i] == c)
            i++;
        k++;
    }
    return (strs);
}

char    **ft_split(char const *s, char c)
{
    int     snum;
    char    **mstrs;
    int     i;

    i = 0;
    snum = strslen(s, c);
    mstrs = (char **)malloc((snum + 1) * (sizeof(char*)));
    if (!mstrs)
        return (0);
    return (eachmstr((char *)s, c, mstrs));
}

#include <stdio.h>
int main()
{
    char    a[] = "patata,cebolla,tortilla,huevo";
    char    b = ',';
    char    **ptr;
    int     i;

    i = 0;
    ptr = ft_split(a, b);
    while (ptr[i])
    {
        printf("%s", ptr[i]);
        i++;
    }
    free (ptr);
    return (0);
}