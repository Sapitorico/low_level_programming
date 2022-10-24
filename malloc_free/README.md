# C - malloc, free
Automatic and dynamic allocation, malloc and free

* The malloc function 

Is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.
# Automatic allocation
When you declare variables or when you use strings between double quotes, the program takes care of all memory allocation.
```c
	int n;
	char c;
	int *ptr;
	char array[3];
```
Arguments and local variables are automatically stored in memory when the function is called. The program reserves space and uses it without you having to think about it.
By default, the memory used to store those variables can be read and written. When the program leaves the function, the memory used for all the above variables is released for future use.
### Special case: string literals
One special case we have seen so far is the memory used to store strings that we put within double quotes (") in our programs. For instance:
```c
	char *str;

	str = “School”;
```
The string "School" just declared is automatically stored in memory when the program is launched. But, the memory that stores the string is only readable. The variable str is a pointer to a character, which is initialized in the memory of the first character of the string. But the memory it stores is read-only and is also not freed when the function returns. This is the state of the memory after the line str = "School" (read-only memory).
And this is the state of the memory after the function returns:
```c
void print_school(void)
{
	char str[] = "School";

	str[0] = 's';
	printf("%s\n", str);	    
}
int main(void)
{
	print_school();
	return (0);
}
```
Note that when using the notation: char s[] = "School", the array s holds a copy of the string "School". So it is possible to modify this copy.
This is the memory before the call to print_school:

<img src="https://holbertonintranet.s3.amazonaws.com/uploads/medias/2022/8/40996bf95c7a495a9f26e23dc2b17c0c43e56d2e.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221023%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221023T201958Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5b3792c991f223f6415aa95dcdf168f8c0dcbd3885e2038eb68d85cbac1b2cc3" width="500"/>
<img src="https://holbertonintranet.s3.amazonaws.com/uploads/medias/2022/8/40996bf95c7a495a9f26e23dc2b17c0c43e56d2e.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221023%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221023T201958Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5b3792c991f223f6415aa95dcdf168f8c0dcbd3885e2038eb68d85cbac1b2cc3" width="500"/>

Note that the string "School" is always present in the memory. We will see why later.
This is the memory right before the line str[0] = 's'; is executed:
<img src="https://holbertonintranet.s3.amazonaws.com/uploads/medias/2022/8/d8bd956d1f99c8fd608d4f8a2dc8c155303e3a2a.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221023%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221023T201958Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8f16bf22d49a81a1be3421dac32251ceb9d51e3ec4f246458a47cf629d166789" width="500"/>

<img src="https://holbertonintranet.s3.amazonaws.com/uploads/medias/2022/8/d8bd956d1f99c8fd608d4f8a2dc8c155303e3a2a.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221023%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221023T201958Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8f16bf22d49a81a1be3421dac32251ceb9d51e3ec4f246458a47cf629d166789" width="500"/>
<img src="https://holbertonintranet.s3.amazonaws.com/uploads/medias/2022/8/d8bd956d1f99c8fd608d4f8a2dc8c155303e3a2a.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221023%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221023T201958Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8f16bf22d49a81a1be3421dac32251ceb9d51e3ec4f246458a47cf629d166789" width="500"/>

Note the differences:

* The variable str is not a pointer, it’s an array. str does not hold the memory address of the string "School", but a copy of it
* The string “School” is copied into this array

And this is the memory state when the program leaves the function print_school:

Note, again, that the string "School" is still present in the memory.

- Why would I need dynamic allocation?
So far we only have seen functions and programs that had fixed inputs. What happens when we do not know in advance how much memory you need and we will only know this at runtime, after compilation?
For example, let's imagine that we have to create a program that stores all the words contained in a file in an array. That file is passed as an argument to our program. There is no way to know in advance how many words the file will contain. We cannot declare a large array like char *words[1024]; and assume that there will never be more than 1024 words in the file. That's when malloc will allow us to dynamically allocate the amount of memory we need.
#### What is a Literal and how does it differ from a variable or constant?
* String Literals
A "string literal" is a sequence of characters from the source character set enclosed in double quotation marks (" "). String literals are used to represent a sequence of characters which, taken together, form a null-terminated string. You must always prefix wide-string literals with the letter L.
Syntax
string-literal:
	" s-char-sequenceopt "
        L" s-char-sequenceopt "

	s-char-sequence:
	s-char

	s-char-sequence s-char
	s-char:
	any member of the source character set except the double quotation mark ("), backslash (\), or newline character)")
When you write a "string" in your source code, it is written directly to the executable because that value needs to be known at compile time (there are tools available to separate the software and find all the plain text strings in them). When you write char *a = "This is a string", the location of "This is a string" is in the executable, and the location a points to, is in the executable. The data in the executable image is read-only.
What you need to do to modify it is to create that memory in a location that is not read-only on the heap, or on the stack frame. If you declare a local array, then stack space is created for each element of that array, and the string literal (which is stored in the executable) is copied to that stack space.
	char a[] = "This is a string";
You can also copy that data manually by allocating some memory on the heap, and then using strcpy() to copy a string literal into that space. 
* Variable.
A variable is a memory space that contains data that can vary (hence the name variable), it is not a conceptual construct like a literal but a programming language mechanism for processing and exchanging data within the program.

* Constant.
A constant is a memory space that contains data that the program's runtime commits not to modify; that is, it is not a read-only memory space, but conceptually it is read-only.
# Dynamic allocation
- Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.
* Prototype: void *malloc(size_t size);
	where void * means it is a pointer to the type of your choice
	and size is the number of bytes your need to allocate
Example:
```c
int main(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}
```
In the above example we use malloc to create a 3 byte allocated space in memory, and we fill this space with characters. Note the use the operator sizeof. It is very important because as you know, the size of the different types will be different on different machines: we want 3 times the size of a char (which happens to be 3 times 1 byte on our 64-bit machine). Always use sizeof for a better portability.

### Sizeof operator in C
The sizeof operator is the most common operator in C. It is a compile-time unary operator and is used to calculate the size of its operand. It returns the exact size required to store a data type. It can be applied to any data type, float type, pointer type variables.
Simply put, the sizeof operator provides the amount of storage.
*  memory
Contrary to local variables and function parameters, the memory that is allocated with malloc is not automatically released when the function returns.
The memory is not initialized
Just like with automatic allocation, the memory allocated by malloc is not initialized.

When you are using malloc, you have to handle the memory yourself. This means that:
* You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
* You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. Your operating system could even kill your program while it is running

* The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).
	* Prototype: void free(void *ptr);
	* where ptr is the address of the memory space previously allocated by and returned by a call to malloc
# Valgrind
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.

