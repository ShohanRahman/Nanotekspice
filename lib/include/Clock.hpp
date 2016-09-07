//
// Clock.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/component
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Thu Feb 11 20:29:31 2016 stephane galibert
// Last update Thu Feb 11 20:34:23 2016 stephane galibert
//

#ifndef _CLOCK_HPP_
# define _CLOCK_HPP_

# include <iostream>
# include <string>
# include <utility>

# include "IComponent.hpp"
# include "Exception.hpp"

namespace nts
{
  class Clock : public IComponent
  {
  public:
    Clock(std::string const& value);
    virtual ~Clock(void);
    virtual nts::Tristate Compute(size_t pin_num_this = 1);
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target);
    virtual void Dump(void) const;
    nts::Tristate getValue(void) const;
    void inverseValue(void);
  private:
    nts::Tristate _value;
    IComponent *_pin[1];
    std::pair<size_t, size_t> _lnk;
  };
}

#endif /* !_CLOCK_HPP_ */
