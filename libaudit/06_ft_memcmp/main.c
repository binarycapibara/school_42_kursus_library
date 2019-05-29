//     int
//     memcmp(const void *s1, const void *s2, size_t n);
//
//DESCRIPTION
//     The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
//
//RETURN VALUES
//     The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned
//     char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and portable code
//     should only depend on the sign of the returned value.

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*vars1;
	unsigned char	*vars2;
	size_t			i;
	int				res;
	
	vars1 = (unsigned char *)s1;			//initialising respective arrays
	vars2 = (unsigned char *)s2;			//initialising respective arrays
	i = 0;									//initial variable i
	while (i < n)							//cycle condition while i less total desired length of string
	{
		if (vars1[i] != vars2[i])			//check if given symbol in one string equals to the respective symbol in other string
		{
			res = vars1[i] - vars2[i];		//if NOT, then calculate difference
			return (res);					//return int as difference between symbols
		}
		i++;								//iterators add
	}
	return (0);
}

int 	main()
{
	char 	str1[] = "malin1";
	char 	str2[] = "malin2";
	ft_memcmp(str1, str2, 6);
	return (0);
}