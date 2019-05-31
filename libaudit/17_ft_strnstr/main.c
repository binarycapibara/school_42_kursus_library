//      char *
//     strstr(const char *haystack, const char *needle);
//
//     char *
//     strcasestr(const char *haystack, const char *needle);
//
//     char *
//     strnstr(const char *haystack, const char *needle, size_t len);
//
//     #include <string.h>
//     #include <xlocale.h>
//
//     char *
//     strcasestr_l(const char *haystack, const char *needle, locale_t loc);
//
//DESCRIPTION
//     The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string
//     haystack.
//
//     The strcasestr() function is similar to strstr(), but ignores the case of both strings.
//
//     The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not
//     more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the
//     strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
//
//     While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See
//     xlocale(3) for more information.
//
//RETURN VALUES
//     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a
//     pointer to the first character of the first occurrence of needle is returned.

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;
	
	len = 0;
	while (s[len])
		len++;
	return (len);
}

static char	*ft_core(char *h, char *n, size_t len, size_t lenl)
{
	size_t	i;
	size_t	m;
	size_t	g;
	size_t	lens;
	
	i = 0;
	m = 0;
	g = 0;													//global counter checking in cycle if the whole procedure does not exceed given len
	lens = ft_strlen(n);									//we had to put calculation of length of needle here because it would not fit to ft_core due to
	while (i < lenl && i < len && g < len)					//number of variables
	{
		while (m < lens && h[i] == n[m])					//while "combined" with if i.e. while m less than length of needle and haystak i equals needle m
		{
			i++;											//iterate key variables
			m++;											//iterate key variables
		}
		if (m == lens && g + lens <= len)					//we check if we can return needle for that we check if lenght m equals lenght of needle AND
			return (h + i - m);								//total checked length g + length of needle does not exceed given length - then we return respective pointer
		{													//pointer is return using pointer mathematics haystack move forward to i and move back on me - gives us needles first char
			i = i + 1 - m;									//if above condition were not met and we didnt find needle we continue to iterate for that
			m = 0;											//we plus 1 to i and reduce by m already iterated in order not to loose any other characters, m needs to be reset
		}
		g++;												//g is set to increase only after all other cycles worked through
	}
	return (NULL);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*h;
	char		*n;
	size_t		lenl;
	size_t		lens;
	
	h = (char *)haystack;
	n = (char *)needle;
	lenl = ft_strlen(h);
	lens = ft_strlen(n);
	if (lens == 0)
		return (h);
	return (ft_core(h, n, len, lenl));
}

int 	main()
{
	size_t	len;
	
	char 	haystack[] = "malinatopol";
	char	needle[] = "atop";
	len = 5;
	
	ft_strnstr(haystack, needle, len);
	return (0);
}