
#include <string.h>
#include <stdio.h>

int	main(void)
{
 char h[5] = {'a'};

//  h[4] = '\0';
 int i = 0;
 while ( i < 5)
{		printf("h = %c\n", h[i]);
		 i++;
}

	printf("strlcpy = %lu\n", strlcpy(h, "12345", 5));
	printf("h = %s\n", h);

	char e[15];
	 while ( i < 15)
 {
		printf("元e = %c\n", e[i]);
		 i++;
 }
	printf("strlcpy_e = %lu\n", strlcpy(e, "HelloWorld", 6));
	i = 0;
 while ( i < 15)
 {
		printf("e = %c\n", e[i]);
		 i++;
 }

	return (0);

}
