# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 16:11:07 by brunogue          #+#    #+#              #
#    Updated: 2025/03/28 20:34:09 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/

# Diretório dos cabeçalhos
INCLUDES_DIR = includes
CPPFLAGS = $(addprefix -I,$(INCLUDES_DIR))
# Arquivos fonte
SRCS = srcs/push_swap.c srcs/ft_process.c srcs/operations.c srcs/operations2.c srcs/operations3.c srcs/ft_errors.c srcs/ft_add_back.c srcs/ft_stack_new.c srcs/ft_verify.c srcs/ft_checks.c srcs/sort.c srcs/ft_free_parse.c srcs/ft_rotate_apply.c srcs/ft_rotate_type.c srcs/utils.c srcs/rotation_cases.c srcs/rotation_cases2.c srcs/stack_positioning.c srcs/utils_checks.c

OBJ = $(SRCS:.c=.o)

# Flags para incluir o diretório de cabeçalhos e linkar a libft
INCLUDES = -I$(INCLUDES_DIR) -L$(LIBFT) -lft

# Regra para compilar arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

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