# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 15:04:29 by jpaselt           #+#    #+#              #
#    Updated: 2024/11/20 19:10:57 by jpaselt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#1. Defining Variables
NAME		= libft.a
#defines a name for the executable file
#best practise is to call this TARGET instead of NAME
GCC			= gcc
#defines the compiler that will be used

CFLAGS		= -Wall -Wextra -Werror
#defines compiler flags used when compiling the source files.

SOURCES			= 
# list of all the source files (.c files) needed to build the program.

#SRCS defines the path to the src files (.c files), 
#only needed if MAKEFILE and .c files are in different folders

OBJS		= ${SOURCES:.c=.o}
#defines the object files that are generated from the source .c files

#HEAD 		= ./includes

RM			= rm -f
#definition of variable that contains the command rm -f (remove files)

#2.

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
#re: first runs "fclean" to remove everything, and then it runs "all" to rebuild the project.

.PHONY:		all clean fclean re
