#include <string>
#include <iostream>
#include <iomanip>

class	ft_contact
{
	public:
	void	ft_add_values();
	void	ft_inline_print(int index);
	void	ft_extended_print();
	private:
	std::string	f_name;
	std::string l_name;
	std::string nick;
	std::string	login;
	std::string	postal_addr;
	std::string	email;
	std::string	phone_nu;
	std::string	birthday;
	std::string fav_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};

void	ft_contact::ft_add_values()
{
	std::cout << "INSERT NAME:" << std::endl;
	std::cin >> ft_contact::f_name;
	std::cout << "INSERT SURNAME:" << std::endl;
	std::cin >> ft_contact::l_name;
	std::cout << "INSERT NICKNAME:" << std::endl;
	std::cin >> ft_contact::nick;
	std::cout << "INSERT LOGIN:" << std::endl;
	std::cin >> ft_contact::login;
	std::cout << "INSERT POSTAL ADDRESS;" << std::endl;
	std::cin >> ft_contact::postal_addr;
	std::cout << "INSERT EMAIL:" << std::endl;
	std::cin >> ft_contact::email;
	std::cout << "INSERT PHONE NUMBER:" << std::endl;
	std::cin >> ft_contact::phone_nu;
	std::cout << "INSERT BIRTHDAY:" << std::endl;
	std::cin >> ft_contact::birthday;
	std::cout << "INSERT FAVOURITE MEAL:" << std::endl;
	std::cin >> ft_contact::fav_meal;
	std::cout << "INSERT UNDERWEAR COLOR:" << std::endl;
	std::cin >> ft_contact::underwear_color;
	std::cout << "INSERT DARKEST SECRET:" << std::endl;
	std::cin >> ft_contact::darkest_secret;
	std::cout << "CONTACT ADDED" << std::endl << std::endl;
}

std::string	ft_extracted_str(std::string str)
{
	std::string ret = str.substr(0, 10);

	if (ret.length() >= 10)
		ret[9] = '.';
	return (ret);
}

void	ft_contact::ft_inline_print(int index)
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	std::cout << std::setw(10) << ft_extracted_str(ft_contact::f_name);
	std::cout << "|";
	std::cout << std::setw(10) << ft_extracted_str(ft_contact::l_name);
	std::cout << "|";
	std::cout << std::setw(10) << ft_extracted_str(ft_contact::nick);
	std::cout << std::endl;
}

void	ft_contact::ft_extended_print()
{
	std::cout << std::setw(16) << "NAME:";
	std::cout << ft_contact::f_name << std::endl;
	std::cout << std::setw(16) << "SURNAME:";
	std::cout << ft_contact::l_name << std::endl;
	std::cout << std::setw(16) << "NICKNAME:";
	std::cout << ft_contact::nick << std::endl;
	std::cout << std::setw(16) << "LOGIN:";
	std::cout << ft_contact::login << std::endl;
	std::cout << std::setw(16) << "POSTAL_ADDRESS:";
	std::cout << ft_contact::postal_addr << std::endl;
	std::cout << std::setw(16) << "EMAIL:";
	std::cout << ft_contact::email << std::endl;
	std::cout << std::setw(16) << "PHONE_NUMBER:";
	std::cout << ft_contact::phone_nu << std::endl;
	std::cout << std::setw(16) << "BIRTHDAY:";
	std::cout << ft_contact::birthday << std::endl;
	std::cout << std::setw(16) << "FAVOURITE_MEAL:";
	std::cout << ft_contact::fav_meal << std::endl;
	std::cout << std::setw(16) << "UNDERWEAR_COLOR:";
	std::cout << ft_contact::underwear_color << std::endl;
	std::cout << std::setw(16) << "DARKEST_SECRET:";
	std::cout << ft_contact::darkest_secret << std::endl;
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