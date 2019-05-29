#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;
	
	len = 0;
	while (s[len])
		len++;
	return (len);
}

//char *strcat(char *restrict s1, const char *restrict s2);
//DESCRIPTION
//     The strcat() and strncat() functions append a copy of the null-terminated
//     string s2 to the end of the null-terminated string s1, then add a termi-
//     nating `\0'.  The string s1 must have sufficient space to hold the
//     result.


char	*ft_strcat(char *s1, const char *s2)
{
	char *result;
	
	result = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (result);
}

// void *memcpy(void *restrict dst, const void *restrict src, size_t n);
//
//DESCRIPTION
//     The memcpy() function copies n bytes from memory area src to memory area
//     dst.  If dst and src overlap, behavior is undefined.  Applications in
//     which dst and src might overlap should use memmove(3) instead.



void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*vardest;
	const char	*varsrc;
	
	if ((!dst && !src))
		return (NULL);
	vardest = (char *)dst;
	varsrc = (const char *)src;
	while (n)
	{
		*(vardest++) = *(varsrc++);
		n--;
	}
	return (dst);
}

//Prototype
//char* ft_strjoin(charconst*s1,charconst *s2);
//Description
//Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’,
//result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
//Param. #1
//The prefix string.
//Param. #2
//The su x string.
//Return value
//The “fresh” string result of the concatenation of the 2 strings.
//Libc functions
//malloc(3)

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;
	
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))  //allocate "join" string which will hold combined strings
		return (NULL);
	ft_memcpy(join, s1, len1 + 1);  //we copy "malina" to begining of join for lenght of len1 + 1 for \0
	ft_strcat(join, s2); //then we move by pointer arithmetic malina first and once that depletes we start adding to this line BOLONKA
	return (join);
}

int 	main()
{
	char 	str1[] = "malina";
	char	str2[] = "BOLONKA";
	ft_strjoin(str1, str2);
	return (0);
}