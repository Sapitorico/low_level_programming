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
# Example
```c
#include <stdio.h>
struct User
{
	char *name;
	char *email;
	int age;
};
int main(void)
{
	struct User user;

	user.name = "Foo Bar";
	user.email = "foo@hbtn.io";
	user.age = 98;
	return (0);
}
```
| Address | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 | 32 | 33 | 34 | 35 | 36 | 37 | 38 | 39 |
|---------------------------------------------------------|---------------------------------------------------|
| Variable |||||||||||||||||||||
| Value |?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|?|
