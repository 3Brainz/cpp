#include "ft_phone_book.hpp"

std::string	ft_extracted_str(std::string str)
{
	std::string ret = str.substr(0, 10);

	if (ret.length() >= 10)
		ret[9] = '.';
	return (ret);
}

void	ft_search_header()
{
	std::cout << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::setw(10) << "NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "L_NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "NICK";
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	std::string	str = "";
	int			index = 0;
	int			count = 0;
	ft_contact	phonebook[8];

	(void)argc;
	(void)argv;

	while(1)
	{
		std::cout << "AVALIABLE COMMANDS: ADD SEARCH EXIT" << std::endl;
		std::cin >> str;
		if (str == "ADD")
		{
			if (count == 8)
			{
				std::cout << "MAN ARE U MAD ... I CAN HOLD JUST THE HATEFUL EIGHT NOTHING MORE" << std::endl;
			}
			else
			{
				phonebook[count].ft_add_values();
				count+=1;
			}
		}
		else if (str == "SEARCH")
		{
			index = 0;
			ft_search_header();
			while(index < count)
			{
				phonebook[index].ft_inline_print(index);
				index += 1;
			}
			while (1)
			{
				index = 0;
				if (count == 0)
					break;
				std::cout << "INSERT INDEX" << std::endl;
				std::cin >> str;
				index = std::stoi(str);
				if(index < count)
				{
					phonebook[index].ft_extended_print();
					break;
				}
				else
					std::cout << "NOT AVALIABLE" << std::endl;
			}
		}
		else if (str == "EXIT")
			break;
		else
			std::cout << "ERROR: COMMAND NOT FOUND" << std::endl << std::endl;
	}
}