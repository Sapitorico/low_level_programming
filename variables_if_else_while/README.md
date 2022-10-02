# C - Variables, if, else, while
### Variables
**Data types | Integer types (on most 64bits computers)**
| Type  | Storage size  | Value range  |
| ------------ | ------------ | ------------ |
| char  | 1 byte  |  -128 to 127 |
| unsigned char  | 1 byte  | 0 to 255  |
| short  | 2 bytes  | -32,768 to 32,767  |
| unsigned short  | 2 bytes  | 0 to 65,535  |
| int  | 4 bytes  | -2,147,483,648 to 2,147,483,647  |
| unsigned int   |  4 bytes | 0 to 4,294,967,295  |
| long  | 8 bytes  | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  |
|  unsigned long | 8 bytes   | 0 to 18,446,744,073,709,551,615  |
# Loops
### while loop
```c
while (expresion)
	[block]
```
The while loop allows you to repeat a block until a specified expression becomes false.
### for loop
```c
for (initialize; condition; update)
		[block]
```
The for statement allows you to repeat a block of a specific number of times, the block of a for statement is executed one or more times until an optional condition becomes false.

You can use optional expressions
```c
for (; ;)	/*infinite loop*/
		;
```
# control structures
```c
if (expression)		/*if the expression is true (the value of the expression is not 0) then the block is executed*/
	[block]
```
```c
if (expresion)		/*if the expression is true, then block 1 is executed, otherwise block 2 is executed*/
	[block1]
else
	[block2]
```
### man or help:

* ascii
* scanf
* getc
* getchar
* EOF
* EXIT_SUCCESS
* time
* rand
* srand
* RAND_MAX
* for
* do...while
# Tasks 0. Positive anything is better than negative nothing, 1. The last digit
**srand:** establishes the en argument for a sequence of pseudorandom integers
**rand:** returns a pseudorandom integer in the range 0 to RAND_MAX
```c
int main(void)
{
	int n;

	srand(time(0));				/*initializes and only calls it one bird per second*/
	n = rand() - RAND_MAX / 2;		/*returns an integer between 0 and RAND_MAX / 2*/
	return (0);
}
```
* The modulo **%** operator is a binary operator and only makes sense for integer numbers, if we perform the operation i % n the range of the result will be the remainder of the division between i and n a number between i and n -1. 
* ASCII is the standard encoding for the exchange of information, encoded in octal decimal and hexadecimal.
* ! Negate — used to negate or reverse a test or exit status
