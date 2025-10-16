NAME = libft.a
$(NAME) :
	cc -c *.c
	ar rcs $(NAME) *.o


clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean $(NAME)

all: $(NAME)
