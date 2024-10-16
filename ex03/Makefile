# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 22:05:20 by wkeiser           #+#    #+#              #
#    Updated: 2024/10/16 22:05:22 by wkeiser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX       = c++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME      = violence

SRC       = main.cpp weapon.cpp humanA.cpp humanB.cpp
OBJ       = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
