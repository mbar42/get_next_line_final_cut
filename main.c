#include "get_next_line.h"


int main ()
{
	int fd;
	char *next_line;

	fd = open("example.txt", O_RDONLY);
while (1)
{
	next_line = get_next_line(fd);
	if (!next_line)
		break;
	printf("%s\n", next_line);
}

	close(fd);
	return 0;
}