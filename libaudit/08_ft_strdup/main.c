//     char *
//     strdup(const char *s1);
//
//
//DESCRIPTION
//     The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used
//     as an argument to the function free(3).
//
//     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;
	
	i = 0;
	j = 0;
	while (s1[i])										//count lenght of string via cycle - i is number of symbols here
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));		//allocate sufficient memmory which is i and add 1 for terminating 0
	if (s2 == 0)										//protect from error in malloc, if malloc return 0 then return 0
		return (0);
	while (j <= i)										//copy strings - while j iteretaor is less than i which is lenght do copy
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);										//return copied string
}

int 	main()
{
	char 	str[] = "malina";
	ft_strdup(str);
	return (0);
}