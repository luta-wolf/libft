#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "libft.h"


/*int main()
{
   char dst[15] = "Hello ";
   char src[] = "World";
   char a2[] = "Hello ";
   char b2[] = "World";


   printf("origin: %zu\n%s\n", strlcat(dst, src, 6),dst);
   printf("my_fun: %zu\n", ft_strlcat(a2, b2, 6));  
   return(0);
}*/
//gcc test.c libft.a && ./a.out

#include <stdio.h>
#include <string.h>
int main(void)
{
    char *p;
    p = strchr ("this is a test", ' ');
    printf("%s\n",p);
    return 0;
}