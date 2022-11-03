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
* the alias can be used as a new data type

Although typedef is thought of as being a storage class, it isn't really. It allows you to introduce synonyms for types which could have been declared some other way. The new name becomes equivalent to the type that you wanted, as this example shows.
```c
typedef int aaa, bbb, ccc;
typedef int ar[15], arr[9][6];
typedef char c, *cp, carr[100];

/* now declare some objects */

/* all ints */
aaa     int1;
bbb     int2;
ccc     int3;

ar      yyy;    /* array of 15 ints */
arr     xxx;    /* 9*6 array of int */

c       ch;     /* a char */
cp      pnt;    /* pointer to char */
carr    chry;   /* array of 100 char */
```
The general rule with the use of typedef is to write out a declaration as if you were declaring variables of the types that you want. Where a declaration would have introduced names with particular types, prefixing the whole thing with typedef means that, instead of getting variables declared, you declare new type names instead. Those new type names can then be used as the prefix to the declaration of variables of the new type.

The use of typedef isn't a particularly common sight in most programs; it's typically found only in header files and is rarely the province of day-to-day coding.
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
# Resources
* <a href="/rltoken/qxIHARCFIPU4IGX12WVa0g" title="The Lost Art of C Structure Packing" target="blank">The Lost Art of C Structure Packing</a>
