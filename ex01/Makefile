# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 13:17:22 by hsamira           #+#    #+#              #
#    Updated: 2026/01/22 16:17:04 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phoneBook

CXX		= g++ 

CXXFLAG	= -Wall -Wextra -Werror -std=c++98

SRC		= Contact.class.cpp \
		PhoneBook.class.cpp
			
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

.PHONY: re clean fclean all