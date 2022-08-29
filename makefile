#------sources-----#

SRCS_SERVEUR	= server.c

SRCS_CLIENT		= client.c

CLIENT_NAME		= client

SERVEUR_NAME 	= server

PRINTF_A 		= ./printf/libftprintf.a

PRINTF			= ./printf

NAME			= minitalk

RM				= rm -f

CC				= gcc

CFLAGS			= -Wall -Wextra -Werror 

#---------commandes--------#

all:		${NAME}
			
${NAME}:	${PRINTF_A} server client

${PRINTF_A}:	
			make -C ${PRINTF}

server:	
			${CC} ${CFLAGS} ${SRCS_SERVEUR} ${PRINTF_A} -o ${SERVEUR_NAME}

client:	
			${CC} ${CFLAGS} ${SRCS_CLIENT} ${PRINTF_A} -o ${CLIENT_NAME}

clean:	
			make clean -C ${PRINTF}

fclean:		clean
			${RM} ${CLIENT_NAME} ${SERVEUR_NAME}
			make fclean -C ${PRINTF}

re:			fclean all