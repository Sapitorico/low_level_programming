# C - More malloc, free - Dynamic memory allocation in C using malloc(), calloc(), free()
Quite complete information on malloc and free: https://github.com/Sapitorico/holbertonschool-low_level_programming/blob/main/malloc_free/README.md
# recreating memory allocation functions
## malloc()
The "malloc" or "memory allocation" method in C is used to dynamically allocate a single large block of memory with the specified size. 

* prototype:
```c
	void *malloc(size_t size);
```

Requests as argument the size_t of the memory block in bytes.
This size_t data type only stores positive integer values, the size cannot be negative, it can be zero or positive. (To force this behavior we use size_t) The function returns a void pointer, empty pointer that gives us the address of the first byte that can be converted to a pointer of any shape.
It does not initialize memory at run time, so it has initially initialized each block with the default garbage value. 

Syntax: 
	ptr = (conversion type*) malloc(byte size)

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png" width="500"/>

## calloc()
The "calloc" or "contiguous allocation" method in C is used to dynamically allocate the specified number of memory blocks of the specified type.
* prototype:
```c
	void *calloc(size_t num, size_t size);
```
It is very similar to malloc() only slightly different, calloc also returns an empty pointer, but calloc has two parameters or arguments compared to malloc(), the first parameter is the number of elements of a particular data type and the second is the size of the data type and calloc Initializes each block with a default value '0'.

Syntax:
	ptr = (type-cast*)calloc(n, size-element);

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/calloc-function-in-c.png" width="500"/>

##free()
The free function frees memory space that has been allocated by a previous call to malloc (or calloc, or realloc).

*prototype:
```c
	void free(void *ptr);
```

The "free" method in C is used to dynamically deallocate memory. Memory allocated by the malloc() and calloc() functions does not deallocate itself. Therefore, the free() method is used whenever dynamic memory allocation is performed. It helps to reduce memory waste by freeing memory.

* You have to keep track of all the addresses of the allocated memory (in a pointer type variable).
* You have to deallocate every memory space you have previously allocated. If you don't do this, your program may run out of memory. Your operating system may kill your program while it is running.

Syntax:
	libre (ptr);

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Free-function-in-c.png" wisth="500"/>
