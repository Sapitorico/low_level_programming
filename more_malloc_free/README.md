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

## free()
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

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Free-function-in-c.png" width="500"/>

# UNIX98:
When malloc fails to detect an error (i.e. returns a pointer to NULL), the POSIX98 standard dictates that errno (the value in errno is significant only when the return value of the call indicated an error) must be set.

The UNIX98 standard requires malloc to return failure to set ENOMEM (the available data space is not large enough to store the shared memory segment) in case of failure.
# int and unsinged int
	int: default setting for integer values, I am declaring a value of integer type		4 bytes		32 bits
	unsigned int: default option for bit markers, declares an unsigned integer variable, which means that if the range of **int** is between -2,147,483,468 and 2,147,483,647, an **unsigned int** its negative part is used in the positive its range will be between 0 and 4,293,967,295.
Memory space occupied

1- The memory requirements for an **int** are 4 bytes, which when multiplied by 8 are 32 bits: 4 x 8 = 32 bits.

2- The **unsigned int** also occupies up to 4 bytes of memory space, which adds up to 32 bits.
	* In the **int** data type, the leftmost bit in the 32 bits is designated as the sign bit, which indicates whether the integer is positive or negative. 1 indicates a negative value while 0 indicates a positive one.
	* The range of integers that can be stored in an integer variable is -(2^31) to 2^31 -1, which is equal to -2,147,483,468 through 2,147,483,647.

When a negative number is entered into the computer, it is represented as the 2 component of that number in binary form. Because the initial bits of the memory will always be set to 1, and the computer would know that it would have encountered a negative number every time it saw the initial bit set to 1.

Whenever we access that number, it returns to its original form by applying the 2 component to it. However, with the **unsigned int**, there is no such bit as a sig bit.

Therefore, it now has all 32 bits available for us to use for storage, its range would be 0 to 2^32 - 1.

The **unsigned** is just a codeword that has a specific function attached to it at the hardware level, this data type is where the computer normally stores data in binary form.
	* The range of an **int** is explicit as a minimum requirement. The "limits.h" refer to the actual values as their corresponding variables for INT_MIN and INT_MAX.
	* An **unsigned int** has a minimum INT_MIN range inclusive of the maximum actual value defined by the UNIT_MAX component of the header file. you do not need to use one of the sign bits if it is an unsigned value. This implies that it requires a larger variable of positive encodings at the expense of no negatives.	
You should use **unsigned int** if you want to store a huge number and you are sure that there will never be a negative value, e.g. the malloc() function.
# These are the values of integer types

| bits  | signed value  |  unsigned value |
| ------------ | ------------ | ------------ |
| 0000  |  0 | 0  |
|  0001 | 1  |  1 |
|  0010 |  2 |  2 |
|  0011 |  3 |  3 |
|  0100 |  4 |  4 |
|  0101 |  5 |  5 |
|  0110 |  6 |  6 |
| 0111  |  7 |  7 |
|  1000 |  -8 |  8 |
|  1001 |  -7 |  9 |
| 1010  |  -6 |  10 |
| 1011  |  -5 |  11 |
| 1100  |  -4 |  12 |
| 1101  |  -3 | 13  |
| 1110  |  -2 |  14 |
| 1111  |  -1 | 15  |

