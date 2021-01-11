CC = gcc
CFLAGS = -Werror -Wall -Wextra
TARGET = libft.a
OBJTS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_calloc.o ft_strdup.o

all: $(TARGET)
 
$(TARGET) : $(OBJTS)
	ar rc $@ $^

.c.o:
	$(CC) -c -o $@ $<

clean:
	rm -f $(OBJECTS)
	rm -f *.o

re: fclean all
