# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 16:11:07 by brunogue          #+#    #+#              #
#    Updated: 2025/03/14 19:06:35 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/

# Diretório dos cabeçalhos
INCLUDES_DIR = includes

# Arquivos fonte
SRCS = srcs/main.c srcs/push_swap.c
OBJ = $(SRCS:.c=.o)

# Flags para incluir o diretório de cabeçalhos e linkar a libft
INCLUDES = -I$(INCLUDES_DIR) -L$(LIBFT) -lft

# Regra para compilar arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

# Regra principal: compila o executável
$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDES)

# Regra para compilar tudo
all: $(NAME)

# Regra para limpar arquivos objeto
clean:
	$(RM) $(OBJ)
	@cd $(LIBFT) && $(MAKE) clean

# Regra para limpar tudo (objetos e executável)
fclean: clean
	$(RM) $(NAME)
	@cd $(LIBFT) && $(MAKE) fclean

# Regra para recompilar tudo
re: fclean all

.PHONY: all clean fclean re