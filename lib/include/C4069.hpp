//
// C4069.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/component
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Fri Feb 12 17:14:24 2016 stephane galibert
// Last update Sat Feb 13 20:52:10 2016 stephane galibert
//

#ifndef _C4069_HPP_
# define _C4069_HPP_

# include <iostream>
# include <string>
# include <map>
# include <functional>

# include "IComponent.hpp"
# include "Exception.hpp"
# include "Output.hpp"

namespace nts
{
  class C4069 : public IComponent
  {
  public:
    C4069(std::string const& value);
    virtual ~C4069(void);
    
    virtual nts::Tristate Compute(size_t pin_num_this = 1);
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target);
    virtual void Dump(void) const;
  private:
    IComponent *_pin[14];
    std::map<size_t, size_t> _lnk;
    std::map<size_t, std::function<Tristate(size_t) > > _mapPin;
    std::map<size_t, size_t> _mapOutput;

    Tristate compute_not(nts::Tristate hs) const;

    nts::Tristate computeInput(size_t pin) const;
    nts::Tristate computeOutput(size_t pin) const;
    nts::Tristate computeVDD(size_t pin) const;
    nts::Tristate computeVSS(size_t pin) const;
  };
}

#endif /* !_C4069_HPP_ */
