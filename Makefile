##
## EPITECH PROJECT, 2018
## malloc
## File description:
## malloc
##

CC	=	gcc -g

CFLAGS	+=	-W -Wall -Werror -Wextra

RM	=	 del /f

NAME	=	 201yams.exe

SRC	=	 prob_yams.c prob_yams2.c 201yams.c math_util.c

OBJ	=	 $(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
			$(CC) $(OBJ) -lm -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
