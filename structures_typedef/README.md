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
## Pointers to structures
To access elements of a pointer to a structure, you have to dereference the pointer (o access the data of a pointed object, you can de-reference the pointer and use the '.' '->' operators.) and then access to the data.

There is a simple way to do that, just by using the ‘->’ symbol. This symbol is equivalent to dereferencing + using ‘.
