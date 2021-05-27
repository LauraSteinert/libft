#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	/* char str[50]; */

	/* strcpy(str,"This is string.h library function DELEs\n"); */
	/* memset(str,'$',7); */
	/* puts(str); */

	/* strcpy(str,"This is string.h library function Nossa\n"); */
	/* ft_memset(str, '3', 7); */
	/* puts(str); */

	/* printf("-----------------------------------------------------------------------------------------\n"); */

	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, 7);
	printf("After memcpy DELES dest = %s\n", dest);
	const char bananita[] = "tentativas";  
	ft_memcpy(dest, bananita, 7);	
	printf("After memcpy TUDO NOSSO dest = %s\n", dest);

	printf("-----------------------------------------------------------------------------------------\n");

	char buffer[80];
	char* msg = "This is the string: not copied";
    memset(buffer, '\0', 80 );
    memccpy(buffer, msg, 'g', 80);
    printf( "O original é %s\n", buffer);
	msg = "Agora virou bananinha:";
    ft_memccpy(buffer, msg, ':', 80);
    printf( "O nOSSO é %s\n", buffer);

	return (0);
}
