//
// IComponent.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Feb  8 11:53:35 2016 stephane galibert
// Last update Thu Feb 11 17:41:44 2016 stephane galibert
//

#ifndef _ICOMPONENT_HPP_
# define _ICOMPONENT_HPP_

namespace nts
{
  enum Tristate
    {
      UNDEFINED = (-true),
      TRUE = true,
      FALSE = false
    };

  class IComponent
  {
  public:
    virtual ~IComponent(void) {}
    virtual nts::Tristate Compute(size_t pin_num_this = 1) = 0;
    virtual void SetLink(size_t pin_num_this,
			 nts::IComponent &component,
			 size_t pin_num_target) = 0;
    virtual void Dump(void) const = 0;
  };
}

#endif /* !_ICOMPONENT_HPP_ */
