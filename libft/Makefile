# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nmartins <nmartins@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/26 19:10:08 by nmartins       #+#    #+#                 #
#    Updated: 2019/05/20 15:53:39 by nmartins      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#############
# variables #
#############

# configure
NAME=libft.a

OBJECT_NAMES=\
			 ft_memset \
			 ft_bzero \
			 ft_memcpy \
			 ft_memccpy \
			 ft_memmove \
			 ft_memchr \
			 ft_memcmp \
			 ft_strlen \
			 ft_strdup \
			 ft_strcpy \
			 ft_strncpy \
			 ft_strcat \
			 ft_strncat \
			 ft_strlcat \
			 ft_strchr \
			 ft_strrchr \
			 ft_strstr \
			 ft_strnstr \
			 ft_strcmp \
			 ft_strncmp \
			 ft_atoi \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_tolower \
			 ft_toupper \
			 ft_memalloc \
			 ft_memdel \
			 ft_strnew \
			 ft_strdel \
			 ft_strclr \
			 ft_striter \
			 ft_striteri \
			 ft_strmap \
			 ft_strmapi \
			 ft_strequ \
			 ft_strnequ \
			 ft_strsub \
			 ft_strjoin \
			 ft_strtrim \
			 ft_strsplit \
			 ft_itoa \
			 ft_putchar \
			 ft_putstr \
			 ft_putendl \
			 ft_putnbr \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \
			 ft_lstnew \
			 ft_lstdelone \
			 ft_lstdel \
			 ft_lstadd \
			 ft_lstiter \
			 ft_lstmap \
			 ft_str_drop_while \
			 ft_str_take_while \
			 ft_iswhite \
			 ft_strtolo \
			 ft_strtoup \
			 ft_memrcpy \
			 ft_strchrcount \
			 ft_strrev \
			 ft_print_memory \
			 ft_strreplace \
			 ft_realloc \
			 ft_abs \
			 ft_max \
			 ft_min \
			 get_next_line \
			 ft_globmatch \
			 ft_globsearch \

# do not configure
CC=gcc
INCLUDES=-I./
SRC=./
EXTRA=
CFLAGS=-Werror -Wall -Wextra $(INCLUDES) $(EXTRA)
OBJECTS=$(patsubst %, %.o, $(OBJECT_NAMES))
SOURCES=$(patsubst %, %.c, $(OBJECT_NAMES))

# colors feel free to add more as you need them
OK_COLOR=\x1b[32;01m
RESET=\x1b[0m
UNDERLINE=\x1b[4m
BLUE=\x1b[36m
RED=\x1b[31m

#########
# rules #
#########
all: $(NAME) 

debug:
	$(CC) -o $(NAME) $^ $(CFLAGS) -g

$(NAME): $(OBJECTS)
	@ar rcs $@ $^
	@ranlib $@

so:
	make CFLAGS=-fPIC
	$(CC) $(OBJECTS) -shared -o libft.so

%.o: $(SRC)/%.c
	@$(eval num=$(shell echo $$(($(num)+1))))
	@printf " λ Making object $(UNDERLINE)$(BLUE)$^$(RESET)\n"
	@$(CC) -c -o $@ $^ $(CFLAGS)

clean:
	@printf "$(RED)Cleaning objects$(RESET)\n"
	@rm -rf $(OBJECTS)

fclean: clean
	@printf "$(RED)Cleaning $(NAME)$(RESET)\n"
	@rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJECTS)
