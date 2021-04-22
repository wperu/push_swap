NAME			=		push_swap

INC_DIR			=		includes

HEADER			=		includes/push_swap.h

CC				=		gcc

CFLAGS			=		-Wall -Wextra -Werror -g3 -fsanitize=address

SRCS			=	\
					main.c \
					$(addprefix push/, ft_push.c) \
					$(addprefix utils/, utils.c ft_del.c) \
					$(addprefix rotate/, ft_rotate.c) \
					$(addprefix swap/, ft_swap.c) \
					$(addprefix finder/, find.c) \
					$(addprefix little_sort/, utils.c ft_sort_five.c range_a.c)\


OBJS			= 		$(addprefix srcs/, $(SRCS:.c=.o))

LIB 			= 		../libft/libft.a

all				: 		$(NAME)

$(NAME)		: $(OBJS)
		@make -C ../libft
		$(CC) $(CFLAGS) $(OBJS) -I ../libft -L ../libft -lft $(HEADERS) -o $(NAME)

%.o: %.c $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

bonus		:		$(NAME)

clean		:
		@/bin/rm -f $(OBJS)
		@make clean -C ../libft

fclean		:		clean
		@/bin/rm -f $(NAME)
		@make fclean -C ../libft

re			:		fclean all

$(VERBOSE).SILENT:
