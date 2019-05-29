
//      void *
//     memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
//
//DESCRIPTION
//     The memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char)
//     occurs in the string src, the copy stops
//     and a pointer to the byte after the copy of c in the string dst is returned.
//     Otherwise, n bytes are copied, and a NULL pointer is returned.
//
//     The source and destination strings should not overlap, as the behavior is undefined.

#include <string.h>


void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*vardst;				//creating arrays to work with function
	unsigned char		*varsrc;				//creating arrays to work with function
	unsigned char		chk;					//chk will be used to check if given char matches input delimeter
	size_t				i;						//initiating iterator
	
	chk = (unsigned char)c;						//equate chk to delimeter
	i = 0;										//equate all appropriate variables and arrays
	vardst = (unsigned char *)dst;				//equate all appropriate variables and arrays
	varsrc = (unsigned char *)src;				//equate all appropriate variables and arrays
	while (i < n)								//cycle iterating while we reach n input from function
	{
		vardst[i] = varsrc[i];					//copying character via iterated cycle
		if (chk == varsrc[i])					//check if given character equals the selected one in array
			return (dst + i + 1);				//pointer to the byte after the copy of c in the string dst is returned
		i++;									//iterator increasing
	}
	return (NULL);								//if function is broken then return NULL
}

int 	main()
{
	char 	dst[] = "ALlina";
	char 	src[] = "mal1na";
	char 	c = '1';
	ft_memccpy(dst, src, c, 7);
	return (0);
}
