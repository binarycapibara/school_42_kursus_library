#include <string.h>

//     void
//     bzero(void *s, size_t n);
//
//DESCRIPTION
//     The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

void	ft_bzero(void *s, size_t n)
{
	unsigned char *dst;
	
	if (!s)						// protection from incorrec input of s
		return ;
	dst = s;
	if (n == 0)					//as defined, if n=0 then funtion does nothing
		return ;
	while (n)					//cycle which goes through n-times
	{
		*dst = '\0';			//assign to a specific memory cell 0
		dst++;					//forward 1 unit via pointer mathematics
		n--;					//iteratve to the negative side give n
	}
}

int 	main ()
{
	char	str[] = "malina";
	ft_bzero (str, 3);
	return (0);
}