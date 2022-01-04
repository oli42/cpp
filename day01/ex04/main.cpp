#include <string>
#include <iostream>
#include <fstream>

void replace( std::string filename, std::string s1, std::string s2 )
{
    std::ifstream input;
	std::ofstream output;
	std::string line;

    input.open(filename);
    if (!input.is_open())
    {
        std::cout << "Error: operation corrupted" << std::endl;
        return;
    }
    output.open(filename + ".replace");
    if (!output.is_open())
    {
        std::cout << "Error: operation corrupted" << std::endl;
        return;
    }
    if (s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "Error: string NULL" << std::endl;
        return;
    }
    std::string tmp;
    while (getline(input, line))
    {
        for (size_t i = 0; i < line.length(); i++)
        {
            tmp = &line[i];
            if (!tmp.substr(0, s1.length()).find(s1))
            {
                output << s2;
                i += s1.length() - 1;
            }
            else
                output << line[i];
        }
        if (!input.eof())
            output << '\n';
    }  
    input.close();
    output.close();
}


int main(int argc, char **argv)
{
	std::string line;
	std::string filename;
	std::string s1;
	std::string s2;

    if (argc != 4)
	{
		std::cout << "Error: you must provide 3 arguments" << std::endl;
		return (0);
	}
    else
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        replace(filename, s1, s2);
    }
    return (0);
}