//
// Input.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/component
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Feb  8 16:58:01 2016 stephane galibert
// Last update Thu Feb 11 22:29:17 2016 stephane galibert
//

#ifndef _INPUT_HPP_
# define _INPUT_HPP_

# include <iostream>
# include <string>
# include <utility>

# include "IComponent.hpp"
# include "Exception.hpp"

namespace nts
{
  class Input : public IComponent
  {
  public:
    Input(std::string const& value);
    virtual ~Input(void);
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

#endif /* !_INPUT_HPP_ */
