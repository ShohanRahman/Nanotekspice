//
// Exception.cpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/exception
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Wed Feb 10 11:53:00 2016 stephane galibert
// Last update Thu Feb 11 16:05:59 2016 stephane galibert
//

#include "Exception.hpp"

/*
** Class NtsError
*/
nts::NtsError::NtsError(std::string const& message) throw()
{
  _message = message;
}

nts::NtsError::NtsError(void) throw()
{
  _message = "";
}

nts::NtsError::~NtsError(void) throw()
{

}

const char *nts::NtsError::what(void) const throw()
{
  return (_message.data());
}

/*
** Class ChipsetError : public NtsError
*/
nts::ChipsetError::ChipsetError(std::string const& message) throw()
  : NtsError(message)
{
  
}

nts::ChipsetError::ChipsetError(void) throw()
{
  
}

nts::ChipsetError::~ChipsetError(void) throw()
{
  
}

/*
** Class PinError : public ChipsetError
*/
nts::PinError::PinError(std::string const& message) throw()
  : ChipsetError(message)
{
  
}

nts::PinError::PinError(void) throw()
{

}

nts::PinError::~PinError(void) throw()
{
  
}

/*
** Class LinkError : public NtsError
*/
nts::LinkError::LinkError(std::string const& message) throw()
  : NtsError(message)
{
  
}

nts::LinkError::LinkError(void) throw()
{

}

nts::LinkError::~LinkError(void) throw()
{
  
}

/*
** Class OutputLinkError : public LinkError
*/
nts::OutputLinkError::OutputLinkError(std::string const& message) throw()
  : LinkError(message)
{

}

nts::OutputLinkError::OutputLinkError(void) throw()
{

}

nts::OutputLinkError::~OutputLinkError(void) throw()
{
  
}

/*
** Class InputError : public NtsError
*/
nts::InputError::InputError(std::string const& message) throw()
  : NtsError(message)
{

}

nts::InputError::InputError(void) throw()
{

}

nts::InputError::~InputError(void) throw()
{
  
}

/*
** Class SyntaxError : public NtsError
*/
nts::SyntaxError::SyntaxError(std::string const& message) throw()
  : NtsError(message)
{

}

nts::SyntaxError::SyntaxError(void) throw()
{

}

nts::SyntaxError::~SyntaxError(void) throw()
{
  
}

/*
** Class FileError : public NtsError
*/
nts::FileError::FileError(std::string const& message) throw()
  : NtsError(message)
{

}

nts::FileError::FileError(void) throw()
{

}

nts::FileError::~FileError(void) throw()
{
  
}
