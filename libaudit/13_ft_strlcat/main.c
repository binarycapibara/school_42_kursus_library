//SYNOPSIS
//     #include <string.h>
//
//     size_t
//     strlcpy(char * restrict dst, const char * restrict src, size_t size);
//
//     size_t
//     strlcat(char * restrict dst, const char * restrict src, size_t size);
//
//DESCRIPTION
//     The strlcpy() and strlcat() functions copy and concatenate strings respectively.  They are designed to be safer, more consistent, and less error prone replace-
//     ments for strncpy(3) and strncat(3).  Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-
//     terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst).  Note that a byte for the
//     NUL should be included in size.  Also note that strlcpy() and strlcat() only operate on true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
//     nated and for strlcat() both src and dst must be NUL-terminated.
//
//     The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
//
//     The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
//
//     The source and destination strings should not overlap, as the behavior is undefined.
//
//RETURN VALUES
//     The strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.  For strlcat() that
//     means the initial length of dst plus the length of src.  While this may seem somewhat confusing, it was done to make truncation detection simple.
//
//     Note however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will
//     not be NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not happen (as
//     it means that either size is incorrect or that dst is not a proper ``C'' string).  The check exists to prevent potential security problems in incorrect code.

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;
	
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*result;
	size_t	limit;
	
	result = s1;
	limit = ft_strlen(s2);
	if (limit < n)
		n = limit;
	while (*s1 != '\0')
		s1++;
	while (n > 0)
	{
		*s1 = *s2;
		s2++;
		s1++;
		n--;
	}
	*s1 = '\0';
	return (result);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size == 0 || size <= dstlen)
	{
		return (size + srclen);
	}
	if (size > dstlen)
	{
		dst = ft_strncat(dst, src, (size - dstlen - 1));
	}
	return (dstlen + srclen);
}

int 	main()
{
	char 	dst[] = "malina";
	char 	src[] = "topol";
	ft_strlcat (dst, src, 12);
}