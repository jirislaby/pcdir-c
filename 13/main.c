#include <stdio.h>
#include <stdlib.h>

static char b64_idx[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static char *read_input(size_t *size)
{
	*size = 0;
	return NULL;
}

static char *encode_base64(const char *input, size_t size)
{
	(void)b64_idx; // use this in a sane way later

	return NULL;
}

int main()
{
	size_t size;
	char *input;
	char *encoded;

	input = read_input(&size);

	encoded = encode_base64(input, size);

	free(input);

	if (encoded)
		puts(encoded);

	free(encoded);

	return 0;
}
