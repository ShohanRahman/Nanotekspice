//
// False.hpp for false in /home/galibe_s/Perso/cpp_nanotekspice/lib/include
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Wed Feb 24 20:38:11 2016 stephane galibert
// Last update Wed Feb 24 20:43:33 2016 stephane galibert
//

#ifndef _FALSE_HPP_
# define _FALSE_HPP_

# include <iostream>
# include <string>
# include <utility>

# include "IComponent.hpp"
# include "Exception.hpp"

namespace nts
{
  class False : public IComponent
  {
  public:
    False(void);
    virtual ~False(void);
    virtual nts::Tristate Compute(size_t pin_num_this = 1);
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target);
    virtual void Dump(void) const;
    nts::Tristate getValue(void) const;
    void setValue(std::string const& value);
  private:
    nts::Tristate _value;
    IComponent *_pin[1];
    std::pair<size_t, size_t> _lnk;
  };
}

#endif /* !_FALSE_HPP_ */
