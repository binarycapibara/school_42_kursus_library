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

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ptrdst;						//create pointer to new str
	
	ptrdst = dst;							//equate new pointer to required dst
	while (*src != '\0')					//iterate through all symbols in string - while src does not meet terminating char \0
	{
		*dst = *src;						//equate dst and src
		dst++;								//move forward with pointer mathematics dst
		src++;								//move forward with point mathematics src
	}
	*dst = '\0';							//equate last symbol of dst to terminating character \0
	return (ptrdst);						//return pointer to result
}

int 	main()
{
	char	dst[] = "malina";
	char	src[] = "eeeeee";
	ft_strcpy(dst, src);
	return (0);
}