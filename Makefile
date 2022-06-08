AR := ar rcs

NAME = libs

LIBFT := libft
PRINTF := printf
GNL := get_next_line

# LIBFT
LIBFTCFILES := ft_memset.c		\
			   ft_bzero.c		\
			   ft_memcpy.c		\
			   ft_memmove.c 	\
			   ft_memchr.c		\
			   ft_memcmp.c		\
			   ft_strlen.c		\
			   ft_isalpha.c 	\
			   ft_isdigit.c		\
			   ft_isalnum.c		\
			   ft_isascii.c		\
			   ft_isprint.c		\
			   ft_toupper.c		\
			   ft_tolower.c		\
			   ft_strchr.c		\
			   ft_strrchr.c		\
			   ft_strncmp.c		\
			   ft_strlcpy.c		\
			   ft_strlcat.c		\
			   ft_strnstr.c		\
			   ft_atoi.c		\
			   ft_calloc.c		\
			   ft_strdup.c		\
			   ft_substr.c		\
			   ft_strjoin.c 	\
			   ft_strtrim.c		\
			   ft_split.c		\
			   ft_itoa.c		\
			   ft_strmapi.c		\
			   ft_striteri.c	\
			   ft_putchar_fd.c	\
			   ft_putstr_fd.c	\
			   ft_putendl_fd.c	\
			   ft_putnbr_fd.c
LIBFTCFILES := $(addprefix $(LIBFT)/, $(LIBFTCFILES))

# PRINTF
PRINTFCFILES = ft_printf.c ft_types.c ft_print_sciu.c ft_print_p.c ft_print_x.c
PRINTFCFILES := $(addprefix $(PRINTF)/, $(PRINTFCFILES))

# GNL
GNLCFILES := get_next_line.c get_next_line_utils.c
GNLCFILES := $(addprefix $(GNL)/, $(GNLCFILES))

# LIBS
CFILES := $(LIBFTCFILES) $(PRINTFCFILES) $(GNLCFILES)
OFILES := $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME).a $(OFILES)

clean: 
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME).a

re: fclean all