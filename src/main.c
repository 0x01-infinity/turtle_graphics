#include "main.h"

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		open_and_exec_file(argv[1]);
	}
	else
	{
		read_and_exec_stdin();
	}

	return (0);
}
