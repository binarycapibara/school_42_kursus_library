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



int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;
	int				res;
	
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	res = 0;
	while (str1[i] || str2[i])								//cycle run while both string "exists" and not NULL
	{
		if (str1[i] != str2[i])								//if we find that respective chars do not equal each other then return the difference
			return (res = str1[i] - str2[i]);
		i++;												//otherwise we keep iterating
	}
	return (0);												//if both string are identical we return 0
}

int 	main()
{
	char	str1[] = "malin1";
	char	str2[] = "malin2";
	ft_strcmp(str1, str2);
	return (0);
}