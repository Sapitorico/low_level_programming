# C - Pointers, arrays and strings
## Pointers
Pointers are very useful, some C programming tasks are more easily performed with pointers, such as dynamic memory allocation that cannot be performed without pointers.

It is a type of data called variable whose value is the memory address of another variable or constant, it is clear that every time a variable is declared, the computer reserves memory for this variable that is defined in byte (1 byte = 8 bits with each bit being 0 or 1). The space reserved for the variable is its address. and when we assign a value to this variable, the computer will store this value at its address.

* char -> 1 byte
* int -> 4 bytes
* float -> 4 bytes

<img src="https://i.ytimg.com/vi/f2i0CnUOniA/maxresdefault.jpg"  width="500"/>

Each variable is a memory location and each location has an address that can be accessed with operator (&), you must declare a pointer before using it.

- example :
<img src="https://slidetodoc.com/presentation_image_h/2d0191adde6b486905ee1c6e9c1e910c/image-11.jpg" width="500"/>

Note that: You can use %p to print addresses (the values of pointers) with printf

`type *var_name` 

* The * tells that the variable var is a pointer…
* … that points to a type.
* The value of var will be a memory address holding a value of type var_type
- (the **sizeof** operator is used to determine the size of a variable.)

The computer will also reserve the right amount of memory for it to store its value.

![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/p.png)
## Dereferencing
<img src="https://slidetodoc.com/presentation_image_h/2d0191adde6b486905ee1c6e9c1e910c/image-12.jpg" width="500"/>

The main characteristic of a pointer is to be able to manipulate values stored in the memory address to which they point, this is called de-referencing, for which the operator ( * ) is used.
* Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).
### How to use 
* Define a pointer variable.
* Assign the address of a variable to a pointer.
* Access the value at the memory address using the operator.
## Functions parameters are passed by value
* When we call a function in C, parameters are copied.
```c
void modif_my_param(int m)
{
   m = 402;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;

   n = 98;
   modif_my_param(n);
   return (0);
}

```
- The value received by a function is copied into a new local variable only available to the invoked function.

![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/n_m.png)
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/n_m.png)

- after m = 402;

![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nm402.png)
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nm402.png)

- at the end of the process the variable used by the function is destroyed but its value remains until another function uses the space to set another value.

![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nomorem.png)
![iamge text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nomorem.png)

This rule applies to any type of variable. But since the values of pointers are addresses, it is possible to modify a variable from outside the function it is declared.
# Array - type of data structure
They are constant memory arrays that contain a quantity of value of the same type.

- **declaration syntax:**

`type var_ame[number of element]`.

* Type: type of elements to be contained.
* Number of elements must be constant and greater than

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Array-In-C.png" width="500"/>
* all matrices consist of a memory address 
* all matrices have as value 0 element index which is called base index, the last one will be the total size of the matrix - 1.

## Important details

* C supports multidimensional arrays, the simplest of which is two-dimensional.
* C allows a function to return an array.
* You can pass to the function a pointer to an array by specifying the name of the array without an index.
* You can generate a pointer to the first element of an array by simply specifying the name of the array * You can generate a pointer to the first element of an array by simply specifying the name of the array
# String
These are one-dimensional character strings that end in a null character '0', they contain the characters that make up the string followed by a null.

![image text](https://dyclassroom.com/image/topic/c/pointers-string/str.jpg)

* actually the compiler automatically places the '\0' at the end of each index.
### man or help:
* sizeof
* swap
* strlen
* puts
* rev
* strrev
* printf
* strcpy
* strcat
# reused functions
## _strlen
Calculates the length of the string excluding the '0' and returns the number n of elements in the string.

```c
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}
```
# C - Pointer to Pointer
A pointer to a pointer is a form of multiple indirection, or a chain of pointers. Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value as shown below.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20190710183146/Pointer-To-Pointer.jpg" width="500"/>

A variable that is a pointer to a pointer must be declared as such. This is done by placing an additional asterisk in front of its name. For example, the following declaration declares a pointer to a pointer of type int −

**int **var;**
# Data Structures

It is a way to store, find, use and create data efficiently according to the task at hand.

The most basic structures used are
* Arrays
* Linked lists

The idea is to conceptualize how data is stored, searched, edited and what these operations will contribute to the space/time complexity of your real-time program.
## Data types
is a way of classifying various types of data, such as integers, strings, etc., which determine the values that can be used with the corresponding data type, the type of operations that can be performed on the corresponding data, the type of operations that can be performed on the corresponding data, and the type of operations that can be performed on the corresponding data.
* Built-in
* Derived
### Built-in
Data types for which a language has built-in support are known as built-in.
- Itegers
- Boolean (true, false)
- Floating (decimal number)
- characters and strings
### Derivatives
They are implementation independent, since they can be implemented in one form or another, they are known as derived data types. These are usually created by combining primary or built-in data types, and associated operations on them
- Lists
- Arrays
- Stack
- queue
# Array data structure classification
* Linear data mask: in which its elements are organized in a sequential linear fashion.
* static data structure: has a fixed memory size.

Array is a data structure for storing the same data type of elements continuously.
* You need to access the elements using the index.
* Know the size of the array before defining the memory.
* Speed to l iterate through data sequence elements.
