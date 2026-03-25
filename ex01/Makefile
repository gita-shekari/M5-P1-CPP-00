
NAME     := phonebook
SRCS     := PhoneBook.cpp Contact.cpp main.cpp
OBJS     := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $@

%.o: %.cpp
	c++ -Wall -Wextra -Werror -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
