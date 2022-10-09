# C - Pointers, arrays and strings
### man or help:

* sizeof
* swap
* strlen
* puts
* rev
* strrev
* printf
* strcpy

Pointers are very useful, some C programming tasks are more easily performed with pointers, such as dynamic memory allocation that cannot be performed without pointers.

It is a type of data called variable whose value is the memory address of another variable or constant, it is clear that every time a variable is declared, the computer reserves memory for this variable that is defined in byte (1 byte = 8 bits with each bit being 0 or 1). The space reserved for the variable is its address. and when we assign a value to this variable, the computer will store this value at its address.
* char -> 1 byte
* int -> 4 bytes
* float -> 4 bytes
`char c;`
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/char_c_declaration.png)
Each variable is a memory location and each location has an address that can be accessed with operator (&), you must declare a pointer before using it.

Note that: You can use %p to print addresses (the values of pointers) with printf
- example :

`type *var_name` 

* The * tells that the variable var is a pointer…
* … that points to a type.
* The value of var will be a memory address holding a value of type var_type
- (the **sizeof** operator is used to determine the size of a variable.)

The computer will also reserve the right amount of memory for it to store its value.
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/p.png)
# Dereferencing
The main characteristic of a pointer is to be able to manipulate values stored in the memory address to which they point, this is called de-referencing, for which the operator ( * ) is used.
* Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).
# Functions parameters are passed by value
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
after m 402;
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nm402.png)
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nm402.png)
at the end of the process the variable used by the function is destroyed but its value remains until another function uses the space to set another value.
![image text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nomorem.png)
![iamge text](https://intranet.hbtn.io/images/contents/low_level_programming/projects/nomorem.png)
This rule applies to any type of variable. But since the values of pointers are addresses, it is possible to modify a variable from outside the function it is declared.
