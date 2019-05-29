//ft_lstnew
//		Prototype
//t_list* ft_lstnew(voidconst*content,size_t content_size);
//Description
//Allocates (with malloc(3)) and returns a “fresh” link. The variables content and content_size of the new link are ini- tialized by copy of the parameters of the function. If the pa- rameter content is nul, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL.
//Param. #1
//The content to put in the new link.
//Param. #2
//The size of the content of the new link.
//Return value
//The new link.
//Libc functions
//malloc(3), free(3)

#include <string.h>
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

// void *memcpy(void *restrict dst, const void *restrict src, size_t n);
//
//DESCRIPTION
//     The memcpy() function copies n bytes from memory area src to memory area
//     dst.  If dst and src overlap, behavior is undefined.  Applications in
//     which dst and src might overlap should use memmove(3) instead.


void	*ft_memcpy(void *dst, const void *src, size_t n) {
	char *vardest;
	const char *varsrc;
	
	if ((!dst && !src))
		return (NULL);
	vardest = (char *) dst;
	varsrc = (const char *) src;
	while (n) {
		*(vardest++) = *(varsrc++);
		n--;
	}
	return (dst);
}

t_list		*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *node1;
	
	if (!(node1 = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		node1->content = NULL;
		node1->content_size = 0;
	}
	else
	{
		if (!(node1->content = (t_list *)malloc(content_size)))
		{
			free(node1);
			return (NULL);
		}
		ft_memcpy(node1->content, content, content_size);
		node1->content_size = content_size;
	}
	node1->next = NULL;
	return (node1);
}

int 	main()
{
	char 	*str = "malina";
	long 	size;
	
	size = 6;
	ft_lstnew(str, size);
	return (0);
}