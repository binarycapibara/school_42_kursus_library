//     void *
//     memchr(const void *s, int c, size_t n);
//
//DESCRIPTION
//     The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
//
//RETURN VALUES
//     The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*vars;
	unsigned char	check;
	size_t			i;
	
	vars = (unsigned char *)s;				//initialising and eqating respective variables and arrays
	check = (unsigned char)c;
	i = -1;
	while (++i < n)							//iterating through cycle until conditions are met
	{
		if (vars[i] == check)				//check if given symbol equals the inputed one
			return ((void *)(vars + i));	//if check is true then return void type point to a given character as selected by i
	}
	return (NULL);							//if function does not do what it supposed to to do then return NULL
}

int 	main()
{
	char str[] = "malina";
	char c = 'i';
	ft_memchr(str, c, 6);
	return (0);
}