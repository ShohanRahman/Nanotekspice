//
// IParser.hpp for nano in /home/galibe_s/rendu/cpp_nanotekspice/src/parser
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Wed Feb 10 13:59:17 2016 stephane galibert
// Last update Wed Feb 10 22:10:09 2016 stephane galibert
//

#ifndef _IPARSER_HPP_
# define _IPARSER_HPP_

# include <string>
# include <vector>

namespace nts
{
  enum class ASTNodeType : int
  {
    DEFAULT = -1,
      NEWLINE = 0,
      SECTION,
      COMPONENT,
      LINK,
      LINK_END,
      STRING
      };
  
  typedef struct s_ast_node
  {
    s_ast_node(std::vector<struct s_ast_node *> *children)
      : children(children) {}
    std::string lexeme;
    ASTNodeType type;
    std::string value;
    std::vector<struct s_ast_node *> *children;
  } t_ast_node;
  
  class IParser
  {
  public:
    virtual ~IParser(void) {}
    virtual void feed(std::string const& input) = 0;
    virtual void parseTree(t_ast_node &root) = 0;
    virtual t_ast_node *createTree(void) = 0;
  };
}

#endif /* !_IPARSER_HPP_ */
