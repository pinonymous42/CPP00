#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	std::string::size_type j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (j = 0; j < str.length(); j++)
				str[j] = std::toupper(str[j]);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}
