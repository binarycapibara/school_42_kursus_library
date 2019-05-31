//SYNOPSIS
//     #include <string.h>
//
//     char *
//     strchr(const char *s, int c);
//
//     char *
//     strrchr(const char *s, int c);
//
//DESCRIPTION
//     The strchr() function locates the first occurrence of c (converted to a
//     char) in the string pointed to by s.  The terminating null character is
//     considered to be part of the string; therefore if c is `\0', the func-
//     tions locate the terminating `\0'.
//
//     The strrchr() function is identical to strchr(), except it locates the
//     last occurrence of c.
//
//RETURN VALUES
//     The functions strchr() and strrchr() return a pointer to the located
//     character, or NULL if the character does not appear in the string.

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	m;
	int		i;
	char	*ar;
	
	ar = (char*)s;							//define and equate array to work with
	m = (char)c;							//define and equate variable to be searched for
	i = 0;									//initialize i = 0
	if (m == '\0')							//check if variable to be search is terminating \0
	{
		while (s[i])
			i++;
		return (ar + i);					//return terminating \0 assuming that variable in question is \0
	}
	while (s[i])							//iterate through string
	{
		if (m == s[i])						//check if iterated char equals to char in question
			return (ar + i);				//if it is then return pointer to the char via pointer mathematics
		i++;
	}
	return (NULL);							//if char was not found we return NULL
}

int 	main()
{
	char	str[] = "malina";
	char 	c = '\0';
	ft_strchr(str, c);
	return (0);
}