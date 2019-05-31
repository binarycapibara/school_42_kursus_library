//     int
//     strcmp(const char *s1, const char *s2);
//
//     int
//     strncmp(const char *s1, const char *s2, size_t n);
//
//DESCRIPTION
//     The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.
//
//     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather
//     than binary data, characters that appear after a `\0' character are not compared.
//
//RETURN VALUES
//     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1
//     is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200'
//     is greater than `\0'.

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				res;
	
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	res = 0;
	if (n == 0)											//if required comparison lenght is 0 then we simply return 0
		return (0);
	while ((str1[i] || str2[i]) && i < n)				//while both string "exists" and not NULL and also we do not exceel required check length n cycle through
	{
		if (str1[i] != str2[i])							//if we find symbols that do not match
			return (res = str1[i] - str2[i]);			//we return difference
		i++;											//otherwise keep iterating
	}
	return (0);											//if we check all symbols and did not exceed the required lenght then we return 0
}

int 	main()
{
	size_t		n;
	
	char 	str1[] = "malin1";
	char	str2[] = "malin2";
	n = 5;
	ft_strncmp(str1, str2, n);
	return (0);
}