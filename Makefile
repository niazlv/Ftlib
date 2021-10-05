# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahector <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 19:33:24 by ahector           #+#    #+#              #
#    Updated: 2021/10/05 19:44:12 by ahector          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIST	=	${wildcard ./*.c}

OBJ		=	${LIST:.c=.o}

INC		=	.

FLAGS	=	-Wall -Werror -Wextra

NAME	=	res

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all: ${NAME}

${NAME}:${OBJ}
	gcc ${FLAGS} ${OBJ} -o ${NAME} -I {INC}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
