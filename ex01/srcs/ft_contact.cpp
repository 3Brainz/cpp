#include "ft_phone_book.hpp"

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