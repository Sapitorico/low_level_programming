# C - Function pointers
In C, like normal data pointers (int *, char *, etc), we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.
```c
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
		printf("Value of a is %d\n", a);
		
}

int main()
{
		// fun_ptr is a pointer to function fun()
		void (*fun_ptr)(int) = &fun;

			/* The above line is equivalent of following two
			   	void (*fun_ptr)(int);
					fun_ptr = &fun;
						*/

			// Invoking fun() using fun_ptr
			(*fun_ptr)(10);

				return 0;
				
}
```
Why do we need an extra bracket around function pointers like fun_ptr in above example?
If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” which is declaration of a function that returns void pointer.

## some interesting facts
* They are used to store function addresses
* Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
* A function’s name can also be used to get functions’ address.
* Like normal pointers, we can have an array of function pointers.
* Function pointer can be used in place of switch case.
* Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.

	/* pointer to function returning int */
	int (*func)(int a, float b);

Once you've got the pointer, you can assign the address of the right sort of function just by using its name: like an array, a function name is turned into an address when it's used in an expression. You can call the function using one of two forms:

	(*func)(1,2);
	/* or */
	func(1,2);

The second form has been newly blessed by the Standard. Here's a simple example.

```c
#include <stdio.h>
#include <stdlib.h>

void func(int);

main(){
      void (*fp)(int);

      fp = func;

      (*fp)(1);
      fp(2);

      exit(EXIT_SUCCESS);
}

void
func(int arg){
      printf("%d\n", arg);
}
```
f you like writing finite state machines, you might like to know that you can have an array of pointers to functions, with declaration and use like this:

```c
void (*fparr[])(int, float) = {
                              /* initializers */
                      };
/* then call one */

fparr[5](1, 3.4);
```
## Application in memory
The memory that is allocated to a program can generally be divided into four sections 
* heap
* stack
* static / global
* code (text)
a program is basically a set of instructions, it gets part of the memory only when it starts executing, when it finishes this memory is recovered, what happens is that a certain memory is allocated and that is the application memory.
code (text) is the machine code, the instructions copied from the executable file, the instructions are not executed directly from the secondary storage, first they are copied to the main memory and then they can only be executed during the execution of the program. We need memory to store instructions to be executed, but also to store a large amount of data that we will work with in a program, these other segments are mainly about storing and managing data.
# Resources
* <a href="https://boredzo.org/pointers/" target="blank">Everything you need to know about pointers in C</a>
