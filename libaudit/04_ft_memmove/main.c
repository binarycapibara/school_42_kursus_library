//     void *
//     memmove(void *dst, const void *src, size_t len);
//
//DESCRIPTION
//     The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
//
//RETURN VALUES
//     The memmove() function returns the original value of dst.

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*vardst;
	unsigned char	*varsrc;
	size_t			i;
	
	vardst = (unsigned char *)dst;			//initial and equate respective arrays
	varsrc = (unsigned char *)src;			//initial and equate respective arrays
	i = -1;									//initialize value for i - technically here -1 of size_t is very big, but then we add 1, and it turns to 0
	if (varsrc < vardst)					//we have to determine position of memory here in order to make it not overlap
	{										//if src < dst then it is possible to overwrite source when placing chars in dst, so we copy from backwards
		while (len--)						//cycle with len
			vardst[len] = varsrc[len];		//equate
	}
	else if (varsrc > vardst)				//otherwise if we know that pointer are other way around then then copy forward from i = 0
	{
		while (++i < len)					//iterate
			vardst[i] = varsrc[i];			//equate i variable
	}
	return (dst);							//return result as dst
}

int 	main()
{
	char 	dst[] = "malina";
	char 	src[] = "basilisk";
	size_t	len;
	
	len = 4;
	ft_memmove (dst, src, len);
	return (0);
}