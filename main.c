#include <smart_string.h>

int main() {
	char         *a = "Hello world";
	int          b  = -1654561;
	unsigned int c  = 564186513;

	char *smart_l = sstring("%s, %i, %u", a, b, c);

	printf("%s\n", smart_l);
	free(smart_l);
	return 0;
}