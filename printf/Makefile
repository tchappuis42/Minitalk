
SRCS	= ft_printf.c ft_putcharlen.c ft_putstrlen.c ft_strlen.c ft_putnbrlen.c ft_uputnbrlen.c \
		  ft_puthexlen.c ft_puthexlenu.c ft_hexlen.c ft_nbrlen.c ft_nbrlenu.c ft_puthexlenp.c ft_hexlenp.c libft/ft_bzero.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c \
		  libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c \
		  libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

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