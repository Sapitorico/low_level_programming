# C - Makefiles
A Makefile contains the commands to be executed by the GNU make unit (the operating system).
You need a makefile to tell make what to do, most of the time, the make file tells amake how to compile and link a program, it can also tell make how to execute various commands when it is explicitly asked to do so. 

**man or help:**

* make
### comments
* # "comment"
# Rules
* Implicit Rules
Constitute the mechanism by which the unit indicates the unit make the destinations, the dependency lists and how to construct the destinations
* Implicit Rules
Implicit rules give general instructions that maque follows when it cannot find an explicit rule.
- A prerequisite is a file that is used as input to create the desatino, an object often relies on several file 

- The rule can have more than one command, either on the same line or each on its own line
# Makefile Basics
![image text](https://malithjayaweera.com/wp-content/uploads/2020/05/makefile_tutorial_1.jpg)
# Ordens 
Any valid operating system orders can be included, they are required as part of the rule
# Variables

we can simplify our make using variables by adding a list of file or any kind of value, the definition of variables are defined using '=' they can represent lists of files, compilation options, programs to execute, directories, etc, all kind of imaginable values.

It is standard practice that every Make has object variables called OBJs.

These variables can be taken by explicit requests in targets representing prerequisite recipes and other parts of the Make file (in other versions of Make they are called frames).
# Variables automáticas
'$@' and '$<' are one of the automatic variables to replace the source and destination filenames.

module '%' tells you to search for any prerequisite, e.g. '%.o' for all .o files, like * for all
