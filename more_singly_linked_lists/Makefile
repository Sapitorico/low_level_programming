CC= gcc	#compiler
RM=rm -f	#remove files
SRC= *.c	#files to be compiled
NAME=a	#executable name
CFLAGS= -Wall -pedantic -Werror -Wextra -std=gnu89	#compiler flags
compil:	#compilation 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:	#delete the executable file
	$(RM) $(NAME)
run: $(NAME)	#run the executable
	./$(NAME)
re: clean all	#recompile
all: compil run	#compile and run
