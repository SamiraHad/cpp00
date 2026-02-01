# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 10:18:09 by hsamira           #+#    #+#              #
#    Updated: 2026/02/01 10:37:18 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CXX		= g++
CXXFLAG	= -Werror -Wextra -Wall -std=c++98

SRC		= Account.cpp \
		 tests.cpp
		 
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@


clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
	