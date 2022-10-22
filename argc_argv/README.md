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
#### Arguments to a program
<img src="https://publications.gbdirect.co.uk//c_book/figures/10.1.png" width="500"/>

Command line arguments are given after the program name in the command line shell of operating systems. To pass command line arguments, we usually define main() with two arguments: the first argument is the number of command line arguments and the second is a list of command line arguments.

