//ft_memalloc
//Prototype
//void* ft_memalloc(size_tsize);
//Description
//Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the alloca- tion fails, the function returns NULL.
//Param. #1
//The size of the memory that needs to be allocated.
//Return value
//The allocated memory area.
//Libc functions
//malloc(3)

#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *dst;						//initialize dst
	
	dst = s;								//equate dst to s
	if (n == 0)								//if n given to function is 0 then break function and stop code execution
		return ;
	while (n)								//while n is "alive"
	{
		*dst = '\0';						//equate dst to \0 via point mathematics
		dst++;								//move dst forward one unit with pointer mathematics
		n--;								//reduce iterator
	}
}

void	*ft_memalloc(size_t size)
{
	void	*ptr;							//create pointer pointing to array which will be newly created
	
	ptr = (void*)malloc(size);				//allocate memmory with given size
	if (ptr == NULL)						//check if there is a problem with ptr if its null - then return NULL and function does notthing
		return (NULL);
	ft_bzero(ptr, size);					//once memmory allocated initiate function ft_bzero which fills allocated memmory with zeros
	return (ptr);							//return ptr pointing to zeroed memmory ready to work with
}

int 	main()
{
	size_t	n;
	
	n = 5;
	ft_memalloc(n);
	return (0);
}









