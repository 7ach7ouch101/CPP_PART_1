NAME = FragTrap

src = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

header = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(header)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all