# C - Structures, typedef
 structure is a user defined data type available in C that allows to combine data items of different kinds.
 ● You can define a structure in the global scope of your program (outside of all your functions, just like the functions prototypes).
 ● You can declare elements of your structure in its scope.
 ```c
 struct User
{
	char *name;
	char *email;
	int age;
};
int main(void)
{
	struct User user;

	return (0);
}
```
You can access the elements of your structure by using the ‘.’ symbol.
	user.name = "Foo Bar";

A struct in the C programming language (and many derivatives) is a composite data type (any data that can be built into a program using the basic data of the language int, float, char, etc) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).
The C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries.
Because the contents of a struct are stored in contiguous memory, the sizeof operator must be used to get the number of bytes needed to store a particular type of struct.

## Declaration
The general syntax for a struct declaration in C is:
```c
struct tag_name
{
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
Here tag_name is optional in some contexts.

Such a struct declaration may also appear in the context of a typedef (is used to create an additional name (alias)) declaration of a type alias or the declaration or definition of a variable:

```c
typedef struct tag_name {
   type member1;
   type member2;
} struct_alias;
```
### typedef
typedef is a reserved keyword, It is used to create an additional name (alias) for another data type, but does not create a new type, except in the obscure case of a qualified typedef of an array type where the typedef qualifiers are transferred to the array element type.
In the  POSIX specifications, the identifier for the typedef definition is often suffixed with _t, such as in size_t and time_t.
## Initialization
There are three ways to initialize a structure
* Declare the struct with integer members
```
struct point {
   int    x;
   int    y;
};
```
* C89-style initializers are used when contiguous members may be given
```c
struct point p = { 1, 2 };
```
	* For non contiguous or out of order members list
		```c
		struct point p = { .y = 2, .x = 1 };
		```
* copies the value of an existing object from the same
```c
struct point q = p;
```
## Assignment
A struct may be assigned to another struct. A compiler might use memcpy() to perform such an assignment.

```c
struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p = { 1, 3 };        /* initialized variable */
    struct point q;                   /* uninitialized */
    q = p;                     /* copy member values from p into q */
    return 0;
}
```
## Pointers to structures
To access elements of a pointer to a structure, you have to dereference the pointer (o access the data of a pointed object, you can de-reference the pointer and use the '.' '->' operators.) and then access to the data.

There is a simple way to do that, just by using the ‘->’ symbol. This symbol is equivalent to dereferencing + using ‘.
```c
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;  /* p is a pointer to my_point */
(*p).x = 8;                   /* set the first member of the struct */
p->x = 8;                     /* equivalent method to set the first member of the struct */
```
