#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main () {
	int val;
	char str[20];

	strcpy(str, "+98993489");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "+tutorials4oint.com");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	printf("-----------------------------------------------------------------------------------------\n");
	char buffer[80] = "Batatinha";
	printf("A string que existia e morreu é essa: %s\n", buffer);
    bzero( buffer, 80 );
	printf("A string original ficou assim o %s\n", buffer);
	char tester[80] = "Batatinha";
	printf("A string que existia e morreu é essa: %s\n", tester);
    ft_bzero( tester, 80 );
	printf("A string nossa ficou assim o %s\n", tester);

	return(0);
}

