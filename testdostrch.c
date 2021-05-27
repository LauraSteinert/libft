#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	const char str[] = "minuit et la";
	const char c = 'i';
	char *ret;
	ret = ft_strchr(str, c);
	printf("Procurando esse parceiro %c, encontramos isso aqui %s\n", c, ret);
	ret = strchr(str, c);
	printf("E o original é esse parceiro aqui: %s\n", ret);
	printf("-----------------------------------------------------------------------------------------\n");
	ret = ft_strrchr(str, c);
	printf("Procurando esse parceiro %c, encontramos isso aqui %s\n", c, ret);
	ret = strrchr(str, c);
	printf("E o original é esse parceiro aqui: %s\n", ret);
	printf("-----------------------------------------------------------------------------------------\n");
	const char *comp = "beluleuleu";
	const char *search = "";
	int i = 4;
	printf("O nosso deu %i\n", ft_strncmp(str, comp, i));
	printf("E o deles deu %i\n", strncmp(str, comp, i));
	printf("-----------------------------------------------------------------------------------------\n");
	unsigned int b = 4;
	printf("Se procurou achou %s\n",ft_strnstr(comp, search, b));
	/* printf("Se procurou e procurou no og deu %c\n", strnstr(comp, search, b)); */
	printf("-----------------------------------------------------------------------------------------\n");

	return 0;
}
