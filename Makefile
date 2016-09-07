##
## Makefile for nano in /home/galibe_s/rendu/cpp_nanotekspice
## 
## Made by stephane galibert
## Login   <galibe_s@epitech.net>
## 
## Started on  Sun Feb 14 17:33:48 2016 stephane galibert
## Last update Wed Feb 24 20:18:51 2016 stephane galibert
##

CXX		=	g++

NAME		=	nanotekspice

RM		=	rm -f

CXXFLAGS	+=	-std=c++11
CXXFLAGS	+=	-Werror -Wall -Wextra
CXXFLAGS	+=	-I./lib/include/

LDFLAGS		+=	-L./ -lnanotekspice

SRCS		=	./main.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		make -C ./lib/
		$(CXX) $(OBJS) $(CXXFLAGS) $(LDFLAGS) -o $(NAME)

clean:
		make clean -C ./lib/
		$(RM) $(OBJS)

fclean:		clean
		make fclean -C ./lib/
		$(RM) $(NAME)

re:		fclean all
