//
// main.cpp for nano in /home/galibe_s/rendu/cpp_nanotekspice
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Feb  8 11:52:33 2016 stephane galibert
// Last update Thu Feb 18 13:01:23 2016 stephane galibert
//

# include <iostream>
# include <string>

# include "Exception.hpp"
# include "Nanotekspice.hpp"

int	main(int const ac, char const * const * const av)
{
  nts::Nanotekspice *nano = NULL;
  if (ac < 2)
    {
      std::cout << "Usage: file.nts [[input=value] [...]]" << std::endl;
      return (0);
    }
  try {
    nano = new nts::Nanotekspice(av[1], ac, av);
    nano->shell();
    delete (nano);
  } catch (nts::NtsError const& e) {
    std::cout << e.what() << std::endl;
  }
  return (0);
}
