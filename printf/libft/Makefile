
SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		  ft_strnstr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcpy.c\
		  ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memchr.c\
		  ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strdup.c\
		  ft_strjoin.c ft_substr.c ft_strmapi.c ft_striteri.c ft_isalpha.c ft_putnbr_fd.c\
		  ft_strlcat.c ft_memmove.c ft_strtrim.c ft_split.c
		
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm -f

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

