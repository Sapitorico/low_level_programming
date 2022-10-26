# C - Preprocessor
The C preprocessor modifies a source code file before handing it over to the compiler. You're most likely used to using the preprocessor to include files directly into other files, or #define constants, but the preprocessor can also be used to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.

There are essentially three uses of the preprocessor--directives, constants, and macros. Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. All other uses of the preprocessor involve processing #define'd constants or macros. Typically, constants and macros are written in ALL CAPS to indicate they are special (as we will see).

## compilation process
The compilation process in C is converting an understandable human code into a Machine understandable code and checking the syntax and semantics of the code to determine any syntax errors or warnings present in our C program. Suppose we want to execute our C Program written in an IDE (Integrated Development Environment). In that case, it has to go through several phases of compilation (translation) to become an executable file that a machine can understand.

![Compilation Process](https://user-images.githubusercontent.com/105575956/198071075-0f857088-7b0b-4d4c-a40e-2ccc46055d5a.png)

# Object-like Macros
An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

	#define BUFFER_SIZE 1024
defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

     foo = (char *) malloc (BUFFER_SIZE);
then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written

          foo = (char *) malloc (1024);

# Macro Arguments
Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.
To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in parentheses, separated by commas. The invocation of the macro need not be restricted to a single logical line—it can cross as many lines in the source file as you wish. The number of arguments you give must match the number of parameters in the macro definition. When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the corresponding argument. (You need not use all of the parameters in the macro body.)

As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses.

	#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
	x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
	y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
	z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));
## Header Files
he #include directive tells the preprocessor to grab the text of a file and place it directly into the current file. Typically, such statements are placed at the top of a program--hence the name "header file" for files thus included.
## Constants
If we write
	1|#define [identifier name] [value]
whenever [identifier name] shows up in the file, it will be replaced by [value].

If you are defining a constant in terms of a mathematical expression, it is wise to surround the entire value in parentheses:
	1|#define PI_PLUS_ONE (3.14 + 1)
By doing so, you avoid the possibility that an order of operations issue will destroy the meaning of your constant:
	1|x = PI_PLUS_ONE * 5;
Without parentheses, the above would be converted to
	1|x = 3.14 + 1 * 5;
which would result in 1 * 5 being evaluated before the addition, not after. Oops!

It is also possible to write simply
	1|#define [identifier name]
which defines [identifier name] without giving it a value. This can be useful in conjunction with another set of directives that allow conditional compilation.
## Conditional Compilation
There are a whole set of options that can be used to determine whether the preprocessor will remove lines of code before handing the file to the compiler. They include #if, #elif, #else, #ifdef, and #ifndef. An #if or #if/#elif/#else block or a #ifdef or #ifndef block must be terminated with a closing #endif.

The #if directive takes a numerical argument that evaluates to true if it's non-zero. If its argument is false, then code until the closing #else, #elif, of #endif will be excluded.
## Include Guards
Another common problem is that a header file is required in multiple other header files that are later included into a source code file, with the result often being that variables, structs, classes or functions appear to be defined multiple times (once for each time the header file is included). This can result in a lot of compile-time headaches. Fortunately, the preprocessor provides an easy technique for ensuring that any given file is included once and only once.

By using the #ifndef directive, you can include a block of text only if a particular expression is undefined; then, within the header file, you can define the expression. This ensures that the code in the #ifndef is included only the first time the file is loaded.

	#ifndef _FILE_NAME_H_
	#define _FILE_NAME_H_
 
	/* code */
 
	#endif // #ifndef _FILE_NAME_H_

Notice that it's not necessary to actually give a value to the expression _FILE_NAME_H_. It's sufficient to include the line "#define _FILE_NAME_H_" to make it "defined". (Note that there is an n in #ifndef--it stands for "if not defined").

A similar tactic can be used for defining specific constants, such as NULL:
	#ifndef NULL
	#define NULL (void *)0
	#endif // #ifndef NULL
Notice that it's useful to comment which conditional statement a particular #endif terminates. This is particularly true because preprocessor directives are rarely indented, so it can be hard to follow the flow of execution.

On many compilers, the #pragma once directive can be used intead of include guards.
# Standard Predefined Macros
The standard predefined macros are specified by the relevant language standards, so they are available with all compilers that implement those standards.
* __FILE__

This macro expands to the name of the current input file, in the form of a C string constant. This is the path by which the preprocessor opened the file, not the short name specified in ‘#include’ or as the input file name argument. For example, "/usr/local/include/myheader.h" is a possible expansion of this macro

