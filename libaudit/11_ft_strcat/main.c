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


char	*ft_strcat(char *s1, const char *s2)
{
	char *result;									//create new string which will hold result
	
	result = s1;									//equate first part of result to first string input
	while (*s1 != '\0')								//move first string forward with pointer mathematics
		s1++;
	while (*s2 != '\0')								//then second string does not meet terminating iterator \0 do the cycle
	{
		*s1 = *s2;									//equate the strings
		s1++;										//move string forward with pointer mathematics
		s2++;										//move string forward with pointer mathematics
	}
	*s1 = '\0';										//equate final character to 0
	return (result);								//return result
}

int		main()
{
	char	str1[] = "malina";
	char	str2[] = "topol";
	ft_strcat (str1, str2);
	return (0);
}