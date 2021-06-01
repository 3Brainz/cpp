#ifndef FT_PHONE_BOOK_HPP
# define FT_PHONE_BOOK_HPP

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

std::string	ft_extracted_str(std::string str);


#endif