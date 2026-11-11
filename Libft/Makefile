SRCS			= 	ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_strnstr.c \
					ft_atoi.c  ft_isalpha.c  ft_memchr.c  ft_memset.c  ft_strlcpy.c \
					ft_strrchr.c  ft_bzero.c  ft_isascii.c  ft_memcmp.c  ft_strchr.c  \
					ft_strlen.c  ft_tolower.c ft_calloc.c  ft_isdigit.c  ft_memcpy.c  \
					ft_strdup.c   ft_strncmp.c  ft_toupper.c \
					ft_substr_extra.c  ft_strjoin_extra.c  ft_strtrim_extra.c  \
					ft_split_extra.c  ft_itoa_extra.c  \

OBJS			= $(SRCS:.c=.o)


CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:			fclean $(NAME)	

.PHONY:			all clean fclean rebuid