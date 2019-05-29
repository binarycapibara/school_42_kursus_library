#include <stdio.h>

//DESCRIPTION
//		The memcpy() function copies n bytes from memory area src to memory area
//		dst.  If dst and src overlap, behavior is undefined.  Applications in
//which dst and src might overlap should use memmove(3) instead.
//
//RETURN VALUES
//The memcpy() function returns the original value of dst.



void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*vardest;          //defining vardest as destination
	const char	*varsrc;			//defining varsrc as source we need those additional arrays to work through function
	
	if ((!dst && !src))				//check if inputs dst and src exist if not return NULL
		return (NULL);
	vardest = (char *)dst;			//equate vardest to input array and cast type
	varsrc = (const char *)src;		//equate varsrc to input array and cast type
	while (n)						//cycle to go through arrays ammendments
	{
		*(vardest++) = *(varsrc++);		//moving though arrays via pointers mathematics
		n--;							//reducing n every cycle as this is the lenght at which memcpy should work
	}
	return (dst);						//return result of work, we return original dst even though original work
										//was performed on other arrays because same changes applied to original
										// variables
}

int 	main()
{
	char str1[] = "malina";
	char str2[] = "BOLONK";
	ft_memcpy(str1, str2, 6);
	return (0);
}