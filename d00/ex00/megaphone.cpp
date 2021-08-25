#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	int i;
	int x;
	char c;
	x = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
	{
		while (++x < argc)
		{
			i = 0;
			while (argv[x][i])
			{
				if (argv[x][i] >= 'a' && argv[x][i] <= 'z')
					c = toupper(argv[x][i]);
				else
					c = argv[x][i];
				std::cout << c;
				i++;
			}
		}
	}
}