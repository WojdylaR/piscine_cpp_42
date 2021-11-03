#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::string Filename;
    std::string str;
    std::string buffer;
    std::string s1;
    std::string s2;
    size_t	end_pos = 0;
	size_t	first_pos = 0;

    if (ac != 4)
    {
        std::cerr << "Impossible : 'Nom du fichier' 'string a remplacer' 'nouvelle string'" << std::endl;
        return (1);
    }
    Filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (Filename.empty() == true || s1.empty() == true || s2.empty() == true)
	{
		std::cerr << "Fichier ou string vide !" << std::endl;
		return (1);
	}
    std::ifstream read(av[1]);
    if (read.fail())
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
        return (1);
    }
    std::ofstream out("FILENAME.replace");
    if (out.fail())
    {
        std::cout << "impossible de creer un le fichier" << std::endl;
        return (1);
    }
    while (std::getline(read, buffer))
    {
        first_pos = 0;
        end_pos = 0;
        while ((end_pos = buffer.find(s1, first_pos)) != std::string::npos)
        {
            str.append(buffer, first_pos, end_pos - first_pos);
            str.append(s2);
            first_pos = end_pos + s1.size();
        }
        str.append(buffer, first_pos);
    }
    out << str;
    read.close();
    out.close();
    return (0);
}