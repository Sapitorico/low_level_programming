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

