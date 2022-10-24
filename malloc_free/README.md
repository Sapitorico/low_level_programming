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

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  |   |   |   |   |   |   |   |   |   |   |
|  Value |  ? | ?  | ?  | ?  |  ? | ?  | ?  |  ? | ?  | ?  |

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  | "S  | c  | h  |  o | o  | l" |   |   |   |   |
|  Value |  S | c  | h  | o  | o | l  | \0  |  ? | ?  | ?  |

Note that the string "School" is always present in the memory. We will see why later.
This is the memory right before the line str[0] = 's'; is executed:

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  |  |  | s  | t | r | l  |   |   |   |   |
|  Value |  S | c  | h  | o  |  o | l  | \0  |  ? | ?  | ?  |

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  | "S | c | h | o | o | l" |   |   |   |   |
|  Value |  S | c  | h  | o  | o | l | \0  |  ? | ?  | ?  |

Note the differences:
* The variable str is not a pointer, it’s an array. str does not hold the memory address of the string "School", but a copy of it
* The string “School” is copied into this array

And this is the memory state when the program leaves the function print_school:

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  |  |  |  |  |  |  |   |   |   |   |
|  Value |  ? | ? | ? | ? |  ? | ? | ?  |  ? | ?  | ?  |

| Address  |  20 |  21 | 22  | 23  | 24  | 25  |  26 | 27  | 28  | 29  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| Variable  | "S | c | h | o | o | l" |   |   |   |   |
|  Value |  S | c  | h  | o  | o | l"  | \0  |  ? | ?  | ?  |

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

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png" width="500"/>

* Don’t trust anyone
On error, malloc returns NULL. As for any other C library function, you should always check the malloc return value before using it. If you don’t you will run into segfaults.
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
Whenn writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.
httpshttps://intranet.hbtn.io/rltoken/0yjuhaU3zJ_eBUxiko08WA
## About Valgrind
Valgrind is a GPL'd system for debugging and profiling Linux programs. With Valgrind's tool suite you can automatically detect many memory management and threading bugs, avoiding hours of frustrating bug-hunting, making your programs more stable. You can also perform detailed profiling to help speed up your programs. https://valgrind.org/info/tools.html
## The Valgrind Quick Start Guide
	1. Introduction

The Valgrind tool suite provides a number of debugging and profiling tools that help you make your programs faster and more correct. The most popular of these tools is called Memcheck. It can detect many memory-related errors that are common in C and C++ programs and that can lead to crashes and unpredictable behaviour.
The rest of this guide gives the minimum information you need to start detecting memory errors in your program with Memcheck. For full documentation of Memcheck and the other tools, please read the User Manual.

	2. Preparing your program

Compile your program with -g to include debugging information so that Memcheck's error messages include exact line numbers. Using -O0 is also a good idea, if you can tolerate the slowdown. With -O1 line numbers in error messages can be inaccurate, although generally speaking running Memcheck on code compiled at -O1 works fairly well, and the speed improvement compared to running -O0 is quite significant. Use of -O2 and above is not recommended as Memcheck occasionally reports uninitialised-value errors which don't really exist.

	3. Running your program under Memcheck

If you normally run your program like this:
	myprog arg1 arg2
Use this command line:
	valgrind --leak-check=yes myprog arg1 arg2
Memcheck is the default tool. The --leak-check option turns on the detailed memory leak detector.

Your program will run much slower (eg. 20 to 30 times) than normal, and use a lot more memory. Memcheck will issue messages about memory errors and leaks that it detects.

	4. Interpreting Memcheck's output

Here's an example C program, in a file called a.c, with a memory error and a memory leak.
```c
#include <stdlib.h>

void f(void)
{
 	int* x = malloc(10 * sizeof(int));
	x[10] = 0;        // problem 1: heap block overrun
}                    // problem 2: memory leak -- x not freed

int main(void)
{
	f();
	return 0;
}
```

Most error messages look like the following, which describes problem 1, the heap block overrun:

    ==19182== Invalid write of size 4
    ==19182==    at 0x804838F: f (example.c:6)
    ==19182==    by 0x80483AB: main (example.c:11)
    ==19182==  Address 0x1BA45050 is 0 bytes after a block of size 40 alloc'd
    ==19182==    at 0x1B8FF5CD: malloc (vg_replace_malloc.c:130)
    ==19182==    by 0x8048385: f (example.c:5)
    ==19182==    by 0x80483AB: main (example.c:11)

Things to notice:

* There is a lot of information in each error message; read it carefully.

* The 19182 is the process ID; it's usually unimportant.

* The first line ("Invalid write...") tells you what kind of error it is. Here, the program wrote to some memory it should not have due to a heap block overrun.

* Below the first line is a stack trace telling you where the problem occurred. Stack traces can get quite large, and be confusing, especially if you are using the C++ STL. Reading them from the bottom up can help. If the stack trace is not big enough, use the --num-callers option to make it bigger.

* The code addresses (eg. 0x804838F) are usually unimportant, but occasionally crucial for tracking down weirder bugs.

* Some error messages have a second component which describes the memory address involved. This one shows that the written memory is just past the end of a block allocated with malloc() on line 5 of example.c.

It's worth fixing errors in the order they are reported, as later errors can be caused by earlier errors. Failing to do this is a common cause of difficulty with Memcheck.

Memory leak messages look like this:
    ==19182== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
    ==19182==    at 0x1B8FF5CD: malloc (vg_replace_malloc.c:130)
    ==19182==    by 0x8048385: f (a.c:5)
    ==19182==    by 0x80483AB: main (a.c:11)
The stack trace tells you where the leaked memory was allocated. Memcheck cannot tell you why the memory leaked, unfortunately. (Ignore the "vg_replace_malloc.c", that's an implementation detail.)

There are several kinds of leaks; the two most important categories are:

* "definitely lost": your program is leaking memory -- fix it!

* "probably lost": your program is leaking memory, unless you're doing funny things with pointers (such as moving them to point to the middle of a heap block).

Memcheck also reports uses of uninitialised values, most commonly with the message "Conditional jump or move depends on uninitialised value(s)". It can be difficult to determine the root cause of these errors. Try using the --track-origins=yes to get extra information. This makes Memcheck run slower, but the extra information you get often saves a lot of time figuring out where the uninitialised values are coming from.

	5. Caveats

Memcheck is not perfect; it occasionally produces false positives, and there are mechanisms for suppressing these (see Suppressing errors in the Valgrind User Manual). However, it is typically right 99% of the time, so you should be wary of ignoring its error messages. After all, you wouldn't ignore warning messages produced by a compiler, right? The suppression mechanism is also useful if Memcheck is reporting errors in library code that you cannot change. The default suppression set hides a lot of these, but you may come across more.

Memcheck cannot detect every memory error your program has. For example, it can't detect out-of-range reads or writes to arrays that are allocated statically or on the stack. But it should detect many errors that could crash your program (eg. cause a segmentation fault).

Try to make your program so clean that Memcheck reports no errors. Once you achieve this state, it is much easier to see when changes to the program cause Memcheck to report new errors. Experience from several years of Memcheck use shows that it is possible to make even huge programs run Memcheck-clean. For example, large parts of KDE, OpenOffice.org and Firefox are Memcheck-clean, or very close to it.

