# C - Recursion
Recursion is a method in which the solution to a problem depends on the solutions of instances of instances of the same problem.
It is the process of repeating elements in a self-similar fashion. 
If a program allows calling itself within the same function, then it is called a recursive function call.
Therefore a recursive function is one that calls itself.
When using recursion, an exit condition must be defined for the function, otherwise it will enter an infinite loop.
Recursive functions are very useful for solving many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.

<img src="https://cdn.programiz.com/sites/tutorial2program/files/how-recursion-works-c_0.jpg" width="400"/>

# Stack
The stack is a last-in, first-out data structure. The developer can use the stack in the following use cases.

Expression evaluation and syntax parsing.
Finding the correct path in a maze using backtracking.
Runtime memory management.
Recursion function.

<img src="https://i.stack.imgur.com/PK6Ht.png" width="400"/> 

<img src="https://scaler.com/topics/images/activation-record-2.webp" width="400"/> <img src="https://scaler.com/topics/images/activation-record-3.webp" width="400"/>
# Flowchart of Recursion
In the following image, there is a recursive function inside which there is a recursive call that calls the recursive function until the condition of the problem is true. If the condition gets satisfied, then the condition is false, and the program control goes for the remaining statements and stops the program.

<img src="https://scaler.com/topics/images/flowchart-of-recursion.webp" width="500"/>

# How does Recursion work?
The recursion is possible using a method or function in C language. The recursive function or method has two main parts in its body, i.e., the base case and the recursive case. While the recursive method is executed, first, the base case is checked by the program. If it turns out true, the function returns and quits; otherwise, the recursive case is executed. Inside the recursive case, we have a recursive call that calls the function inside which it is present.

The representation of recursion in the program is as follows.

```c
void recursive_fun() //recursive function
{
    Base_case; // Stopping Condition
    
    recursive_fun(); //recursive call
}

int main()
{
   
   recursive_fun(); //function call
    
}
```
The function call inside the main function is normal call, it calls the recursive_fun() function inside which there is another function call recursive_fun(); which is termed as recursive call and the whole recursive_fun() function is recursive function. Base_case is the stopping condition for the recursive function.

