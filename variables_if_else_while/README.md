# C - Variables, if, else, while
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
