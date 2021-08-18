#include <iostream>
#include <ctype.h>

using namespace std; 

int main(int argc, char **argv)
{
	int i;
	int x;
	char c;
	x = 0;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
				cout << c;
				i++;
			}
		}
	}
}