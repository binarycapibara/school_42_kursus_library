//     char *
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
//      While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See
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

static	char	*ft_core(char *h, const char *n, int lenl, int lens)
{
	int			i;
	int			m;
	
	i = 0;
	m = 0;
	while (i < lenl)										//while iterator is less than length haystack we go through inned cycle
	{
		while (m < lens && h[i] == n[m])					//while provided that match is found h[i] == n[m] and iterator m is less than length of needle
		{													//we increase iterator while conditions hold
			m++;
			i++;
		}
		if (m == lens)										//if it turns out that m = lenght of needle that means that we found needle within haystack
			return (h + i - m);								//if true we return pointer to the first occurence, h is haystack move forward by i (total) and
		else												//reduce by m so here we get point to first char of needle within given haystack
		{													//sequence is designed to run through parts which only partially match needle
			i = i + 1 - m;									//if first cycle got broken, but did not match the needle then we still have to iterate
			m = 0;											//we iterate by adding 1 to i but substracting any ms which we added in the process of previoius check
		}													//we equate m to 0 to reset the counter for check of needle
	}
	return (NULL);											//if no conditions were met that means that needle was not found in haystack and we return NULL
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	int			lenhaystack;
	int			lenneedle;
	char		*temph;
	
	temph = (char *)haystack;							//assign temp variable to work with haystack
	lenhaystack = ft_strlen(haystack);					//count number of char in haystack
	lenneedle = ft_strlen(needle);						//count number of char in needle
	if (lenneedle == 0)									//if needle does not exist then return haystack
		return (temph);
	else
		return (ft_core(temph, needle, lenhaystack, lenneedle));	//send all params to function which will execute comparison
}

int 	main()
{
	char 	haystack[] = "malinatopol";
	char	needle[] = "atop";
	ft_strstr(haystack, needle);
	return (0);
}
