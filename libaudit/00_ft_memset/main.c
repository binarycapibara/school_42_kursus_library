#include <string.h>

// SYNOPSIS
//     #include <string.h>
//
//     void *
//     memset(void *b, int c, size_t len);
//
//DESCRIPTION
//     The memset() function writes len bytes of value c (converted to an
//     unsigned char) to the string b.
//
//RETURN VALUES
//     The memset() function returns its first argument.

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;
	
	dst = (unsigned char *)b;
	while (len)
	{
		*dst = (unsigned char)c;
		dst++;
		len--;
	}
	return (b);
}

int 	main()
{

	char 	str[] = "malina";
	char 	c = 'o';
	
	ft_memset (str, c 3);
	return (0);
}