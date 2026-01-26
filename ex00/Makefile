# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 10:56:37 by hsamira           #+#    #+#              #
#    Updated: 2026/01/18 13:01:19 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CXX	= g++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98

SRC	= megaphone.cpp
OBJ	= $(SRC:.cpp=.o)

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
	