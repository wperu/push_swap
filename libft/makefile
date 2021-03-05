SRCS    = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_split.c \
		ft_strtrim.c \
		ft_strmapi.c 

SRCSB	= ft_lstnew.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_front.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c



BOBJS	= ${SRCSB:.c=.o}

OBJS    = ${SRCS:.c=.o}

NAME    = libft.a

INCLUDE = libft.h

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

RM      = rm -f

$(NAME):    ${OBJS}  ${INCLUDE}
	${CC} ${CFLAGS} -c ${SRCS}
	ar rcs ${NAME} ${OBJS} ${INCLUDE}

$(OBJS): ${INCLUDE}

all:        ${NAME} ${INCLUDE}

bonus:		${BOBJS} ${OBJS} ${INCLUDE}
	${CC} ${CFLAGS} -c ${SRCS}
	ar rcs ${NAME} ${OBJS} ${INCLUDE}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean:     clean
	${RM} ${NAME}

re:         fclean all

.PHONY:     all clean fclean re
