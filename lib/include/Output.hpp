//
// Output.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/component
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Feb  8 17:06:51 2016 stephane galibert
// Last update Thu Feb 11 18:39:41 2016 stephane galibert
//

#ifndef _OUTPUT_HPP_
# define _OUTPUT_HPP_

# include <iostream>
# include <string>
# include <utility>

# include "IComponent.hpp"
# include "Exception.hpp"

namespace nts
{
  class Output : public IComponent
  {
  public:
    Output(void);
    virtual ~Output(void);
    virtual nts::Tristate Compute(size_t pin_num_this = 1);
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target);
    virtual void Dump(void) const;
    nts::Tristate getValue(void) const;
  private:
    nts::Tristate _value;
    IComponent *_pin[1];
    std::pair<size_t, size_t> _lnk;
  };
}

#endif /* !_INPUT_HPP_ */
