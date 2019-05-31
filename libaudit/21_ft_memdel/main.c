//ft_memdel
//Prototype
//void ft_memdel(void**ap);
//Description
//Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
//Param. #1
//A pointer’s address that needs its memory freed and set to NULL.
//Return value
//None.
//Libc functions
//free(3).

#include <string.h>
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (ap)
	{
		if (*ap)
		{
			free(*ap);
			*ap = NULL;
		}
	}
}

int 	main()
{
	char	**ptr;
	char 	*str;
	
	ptr = &str;
	str = (char *)malloc(sizeof(char) * 3);
	str[0] = 'm';
	str[1] = 'K';
	str[2] = '\0';
	ft_memdel((void*)ptr);
	return (0);
}