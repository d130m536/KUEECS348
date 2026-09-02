#include <stdio.h>
#include <string.h>

int main()
{
/* old code
	printf("Goodbye World... until next time :)\n");
	return 0;
*/
	char str[100];
	int j, len;
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);

	len = strlen(str);
	
	for (j = 0; j < len; j++) {
		if (str[j] >= 'a' && str[j] <= 'z') {
			str[j] = str[j] - 'a' + 'A';
		}
	}
	
	printf("The capitalized string is: %s\n", str);
	
	// Reverse the string.
	for (j = 0, len = strlen(str); j < len / 2; j++) {
		char temp = str[j];
		str[j] = str[len - 1 - j];
		str[len - 1 - j] = temp;
	}
	
	printf("The reversed string is: %s\n", str);
	

	return 0;
}
