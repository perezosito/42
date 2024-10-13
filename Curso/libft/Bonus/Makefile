# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miperez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 13:02:35 by miperez-          #+#    #+#              #
#    Updated: 2024/10/13 13:02:41 by miperez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

# Flags de compilación
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
      ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
      ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Archivos de bonus
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
            ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
            ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Archivos objeto de bonus
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Nombre de la librería
NAME = libft.a

# Regla por defecto
all: $(NAME)

# Regla para crear la librería
$(NAME): $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# Regla para compilar el ejecutable
# Si solo necesitas compilar la librería sin bonus, puedes usar esto en lugar de la línea anterior:
# $(NAME): $(OBJ)
#     ar rcs $(NAME) $(OBJ)

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Regla para limpiar todo (archivos objeto y librería)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar desde cero
re: fclean all

.PHONY: all clean fclean re bonus

