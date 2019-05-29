//SYNOPSIS
//     #include <string.h>
//
//     char *
//     strcat(char *restrict s1, const char *restrict s2);
//
//     char *
//     strncat(char *restrict s1, const char *restrict s2, size_t n);
//
//DESCRIPTION
//     The strcat() and strncat() functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating `\0'.  The
//     string s1 must have sufficient space to hold the result.
//
//     The strncat() function appends not more than n characters from s2, and then adds a terminating `\0'.
//
//     The source and destination strings should not overlap, as the behavior is undefined.
//
//RETURN VALUES
//     The strcat() and strncat() functions return the pointer s1.

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;
	
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*result;						//initiate resulting variable
	size_t	limit;							//intermediary variable to determine maximum number of symbols to append
	
	result = s1;							//equate result to s1 to make result returnable
	limit = ft_strlen(s2);					//calculate number of characters in s2
	if (limit < n)							//if (limit) number of chars in s2 is less than n then we append just n, if not we append the full n chars
		n = limit;
	while (*s1 != '\0')						//move s1 forward until it reaches /0
		s1++;
	while (n > 0)							//while n is greater than 0 to iterate cycle
	{
		*s1 = *s2;							//equate strings
		s2++;								//move both string forward with pointer mathemaitcs
		s1++;
		n--;								//reduce iterator to eventually break the cycle
	}
	*s1 = '\0';								//equate final char to 0
	return (result);						//return result;
}

int 	main()
{

	char	str1[] = "malina";
	char	str2[] = "topol";
	ft_strncat(str1, str2, 2);
	return (0);
}
