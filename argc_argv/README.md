# C - argc, argv
## Arguments to main
provide a useful opportunity to give parameters to programs. Typically, this facility is used to direct the way the program goes about its task. It's particularly common to provide file names to a program through its arguments.

* declaration: `int main(int argc, char *argv[]);`

This indicates that main is a function returning an integer. In hosted environments such as DOS or UNIX, this value or exit status is passed back to the command line interpreter. Under UNIX, for example, the exit status is used to indicate that a program completed successfully (a zero value) or some error occurred (a non-zero value). The Standard has adopted this convention; exit(0) is used to return ‘success’ to its host environment, any other value is used to indicate failure. If the host environment itself uses a different numbering convention, exit will do the necessary translation. Since the translation is implementation-defined, it is now considered better practice to use the values defined in <stdlib.h>: EXIT_SUCCESS and EXIT_FAILURE.
There are at least two arguments to main: argc and argv. The first of these is a count of the arguments supplied to the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) ‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter or job control language.

The argv declaration

- char *argv[]

Remember also that when passed to a function, the name of an array becomes the address of its first element. This means that we can also declare argv as char **argv; the two declarations are equivalent in this context.

`int main(int argc, char **argv);`
## When a program starts, the arguments to main will have been initialized to meet the following conditions:

* argc is greater than zero.
* argv[argc] is a null pointer.
* argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
* argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program. In cases where there is only support for single-case characters, the contents of these strings will be supplied to the program in lower-case.
## Arguments to a program
<img src="https://publications.gbdirect.co.uk//c_book/figures/10.1.png" width="500"/>

Command line arguments are given after the program name in the command line shell of operating systems. To pass command line arguments, we usually define main() with two arguments: the first argument is the number of command line arguments and the second is a list of command line arguments.
### example
```c
#include <stdio.h> 

int main (int argc, char *argv[]) 
{ 

 	return 0; 
}
```
As you can see, main now has arguments. The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.
For example, the command line

| Type | Work performed |
| ------------ | ------------ |
| argc - integer | contains the number of arguments that have been entered.  |
| argv - array | array of pointers to characters.  |
-  The variable argc will be at least 1, since the program name is taken as the first argument, stored with argv[0], which is the first element of the array. Each element of the array points to a command line argument. All command line arguments are strings.
* gcc -o myprog myprog.c

would result in the following values internal to GCC:

- argc
	4
- argv[0]
	gcc
- argv[1]
	-o
- argv[2]
	myprog
- argv[3]
	myprog.c
As you can see, the first argument (argv[0]) is the name by which the program was called, in this case gcc. Thus, there will always be at least one argument to a program, and argc will always be at least 1.
# how to compile with unused variables
the best way to suppress an "Unused x-variable" warning:
* not give the variable a name, tell your compiler using a compiler specific nonstandard mechanism:
See individual answers for __attribute__((unused)), various #pragmas and so on. Optionally, wrap a preprocesor macro around it for portability.
In GCC and Clang, add -Wno-unused-parameter option at the end of the command line (after all options that switch unused parameter warning on, like -Wall, -Wextra).
Add a cast to void
```c
void foo(int __attribute__((__unused__)) bar) {
	    ...		    
}
```
# What is atoi()?
* atoi() is a library function that converts strings to integers, when the program gets the input from the command line, the string values are transferred in the program, we have to convert them to integers, atoi() is used to return the integer of the string arguments.
