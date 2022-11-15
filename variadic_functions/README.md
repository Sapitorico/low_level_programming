# C - Variadic functions
True functions are those that can receive an indefinite number of arguments.

They are declared as follows, taking as an example the printf function:

```c
int printf(const char *format, ...);
```
The signatures of a variadic function have as parameter an ellipse ..., it means that it receives additional parameters of unknown type.
<stdarg.h> Standard library header, allows functions to accept an indefinite number of arguments. Provides facilities for traversing a list of function arguments of unknown number and type.
## stdarg.h data types
```
va_list - datatype for iterating arguments 
```

### macros
* va_start starts iterating arguments with va_list
* va_arg gets an argument
* va_end free, clears a list

### access to arguments 

To access the arguments without unknowns, a va_list must be declared. In the variadic function, va_start calls the macro with two arguments: the first, the variable va_list, the second is the name of the last named parameter of the function.

It is simply a pointer to the arguments on the stack, and va_arg increments the pointer, converts it and references it to a value. Then va_start initializes that pointer by some simple arithmetic (and internal knowledge) and va_end does nothing. There is no extraneous assembly language, just internal knowledge of where things are on the stack. Read the macros in the standard headers to find out what that is.
### case for characters 
```
char c = va_arg(ap, int);
```
Variadic functions are treated in a special way.

For a non-variadic function, the prototype (declaration) specifies the types of all parameters. The parameters can be of any type (no array, no function), including types narrower than int.

For a variadic function, the compiler does not know the types of the parameters corresponding to , ..... For historical reasons and to make the compiler's job easier, corresponding arguments of types narrower than int are promoted to into a unsigned int, and arguments of type float are promoted to double. (This is why print uses the same format specifiers for float arguments).double

So, a variadic function cannot take char arguments. You can call such a function with a charargument, but it will be promoted to int.
