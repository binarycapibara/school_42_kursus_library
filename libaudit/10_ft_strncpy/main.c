//SYNOPSIS
//     #include <string.h>
//
//     char *
//     stpcpy(char * dst, const char * src);
//
//     char *
//     stpncpy(char * dst, const char * src, size_t len);
//
//     char *
//     strcpy(char * dst, const char * src);
//
//     char *
//     strncpy(char * dst, const char * src, size_t len);
//
//DESCRIPTION
//     The stpcpy() and strcpy() functions copy the string src to dst (including the terminating `\0' character.)
//
//     The stpncpy() and strncpy() functions copy at most len characters from src into dst.  If src is less than len characters long, the remainder of dst is filled with
//     `\0' characters.  Otherwise, dst is not terminated.
//
//     The source and destination strings should not overlap, as the behavior is undefined.
//
//RETURN VALUES
//     The strcpy() and strncpy() functions return dst.  The stpcpy() and stpncpy() functions return a pointer to the terminating `\0' character of dst.  If stpncpy()
//     does not terminate dst with a NUL character, it instead returns a pointer to dst[n] (which does not necessarily refer to a valid memory location.)

#include <string.h>

size_t	ft_strlen(const char *s)							//function designed to count number of char in a string and return that number
{
	size_t	len;
	
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;									//declare iterator
	size_t	srclen;								//declare variable holding length of source
	char	*res;								//resulting varibale
	
	res = dst;									//equate res to dst
	srclen = ft_strlen(src);					//calculate number of symbols in src with ft_strlen
	i = 1;										//equate iterator to 1
	while (i <= len && *src != '\0')			//cycle while i < len to avoid counting \0 and and until src terminates with \0
	{
		*dst = *src;							//equate
		dst++;									//move with pointer mathemtics
		src++;									//move with pointer mathematics
		i++;									//iterate iterator
	}
	if (srclen < len)							//if lenght of source is less than input lenght then we must fill the rest with zeroes by definition of functions
		while (i <= len)
		{
			*dst = '\0';						//equate to symbol yet next symbold
			dst++;								//move with pointer mathematics
			i++;								//itereate iterator
		}
	return (res);								//return result
}

int 	main()
{
	char 	dst[] = "malina";
	char 	src[] = "lol";
	ft_strncpy (dst, src, 6);
	return (0);
}