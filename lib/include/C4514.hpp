//
// C4514.hpp for  in /home/avelin_j/Work/cpp_nanotekspice/lib/include
//
// Made by avelin_j
// Login   <avelin_j@epitech.net>
//
// Started on  Sun Feb 21 15:52:28 2016 avelin_j
// Last update Sun Feb 21 15:53:15 2016 avelin_j
//

#ifndef _C4514_HPP_
# define _C4514_HPP_

# include <iostream>
# include <string>
# include <utility>
# include <map>
# include <functional>

# include "IComponent.hpp"
# include "Exception.hpp"
# include "Output.hpp"

namespace nts
{
  class C4514 : public IComponent
  {
  public:
    C4514(std::string const& value);
    virtual ~C4514(void);

    virtual nts::Tristate Compute(size_t pin_num_this = 1);
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target);
    virtual void Dump(void) const;
  private:
    IComponent *_pin[14];
    std::map<size_t, size_t> _lnk;
    std::map<size_t, std::function<Tristate(size_t) > > _mapPin;
    std::map<size_t, std::pair<size_t, size_t> > _mapOutput;

    Tristate compute_nand(nts::Tristate lhs, nts::Tristate rhs) const;

    nts::Tristate computeInput(size_t pin) const;
    nts::Tristate computeOutput(size_t pin) const;
    nts::Tristate computeVDD(size_t pin) const;
    nts::Tristate computeVSS(size_t pin) const;
  };
}

#endif /* !_C4514_HPP_ */
