<div><h1>C - Singly linked lists</h1>

<p>It is a data structure that links a linear collection or a sequence of nodes represented with self-referenced classes. The access to the list is made from the first node (root or head) and it is traversed by accessing the member that points to the next node and so on until the end (the member of the last node that points to the next one is defined as null to avoid errors). They are useful in the following cases:</p>

* When a constant insertion and deletion time is needed.

* When data grows dynamically

* Not accessing random elements of the linked list.

* Insert the element in any position

* Allows to represent a group of elements represented as a sequence.

<div>

---


<details>
<summary><h2>characteristics </h2></summary>

<img width="3952" alt="linked list" src="https://user-images.githubusercontent.com/105575956/202875683-fa901ca0-1417-4cb6-8954-dcd829aac575.png">
	
<h3>Self-referenced classes</h3>.

A self-referenced class is very common to store data dynamically and consume it as we need it in another process, a self-referenced class contains a class member that references an object of the same type. The union of the referenced classes creates a list of nodes that we can traverse by successively accessing from the root node to the member of the node that points to the next one and so on.

The example below is how a two-dimensional array is organized in memory, actually contiguous memory areas are reserved as in a one-dimensional array.
	
<img width="400" alt="array" src="https://beginnersbook.com/wp-content/uploads/2014/01/Pointer-to-array.png">


<h3>advantages compared to an array</h3>
	
Compared to a static array (the elements are arranged contiguously in memory and their size is reserved in the variable declaration) with a given number of elements has an important advantage, a list based on self-linked nodes can modify its size dynamically at runtime (although it also has a computational cost that can affect the performance of our program to handle large memory structures that reserve and free memory as needed).

* Nodes do not have to be stored all together in memory, what matters is that they point to the next node in memory.

* They can have a variable length, we can add or remove elements.

* We can add and remove elements at run time.

<h3>disadvantages</h3>

* They have no notion of index, because what we cannot do is to randomly access a node.

* They need more space in memory because they have to store a pointer.
	
```c
class Node
{
    private int data;
    private Node nextNode;
    
    public Node(int data)
    {
        this.data = data;
    }
    
    public int data { get { return data; } set { data = value; } }
    public Node NextNode { get { return nextNode; } set { nextNode = value } }
}
```

* The example above is a very basic example of a self-referenced class, of course the nodes can contain all the data we need of any type.
	
To add new nodes during the execution of our program we will make use of the dynamic memory reservation with the operator new, this operator receives as operand the type of object that will be assigned dynamically and returns a reference to an object of this type.

```c
Node newItem = new Node(10);
```
Based on this architecture we can create linked lists, queues or trees. Each type of structure has different purposes and can be applied according to the problem to be solved.

</details>

---


<details>
<summary><h2>Functioning</h2></summary>
	
<p>Normally lists have the common operations to work with their nodes, let's define methods for:</p>

* Construct an empty list and give it a name.

* Insert a node in the header.

* Insert a node at the end.

* Remove the first node from the list.

* Remove a node from the end of the list.

* Check if a list is empty.

* Print the contents on the screen.

* Get the number of elements or nodes in the list.

<h3>Example</h3>

```
STRUCTURE book
	name: string[50]
	author: string[50]
	ibn: [string]
end STRUCTURE

STRUCTURE list
	head: book ----> main node
	tail: pointer to list ----> rest of the list
				   * if we use tail as null, we refer to the last element.
end STRUCTURE
```
<h3>Example</h3>

```
STRUCTURE node
	element: book
	next: pointer to node
end STRUCTURE

STRUCUTRA list
	head: pointer to node ----> pointer to the first node
end STRUCTURE
```
<h4>Index</h4>

1. [ create a new node ](#c)
	
2. [ scroll through a list ](#s)
	
3. [ inserts items in the list ](#f)
	
4. [ insert elements at the end ](#e)

<a name="c"></a>
<h3>create a new node</h3>

```
FUNCTION create_node( l: book): node ---> function that returns a new node from a book.
	
	VARIABLE new_node: node ---> takes a new node
	
	new_node = l ---> add the element we want in the new node
	
	new_node.next = NULL ---> we don't know what the next node points to.
	
	RETURN new_node
```

<a name="s"></a>
<h3 name="scroll through a list">scroll through a list</h3>

* To go through a list we must access each of the elements of a list starting with the first and ending with the last one. 

* We will traverse until the pointer of the next node is NULL, so we will know that we have reached the last node.

```
FUNCTION traverse_list(l: list)
	VARIABLE pointer : node ---> we need a pointer to store the reference of the position in which we are in the list.

	pointer = l.head ---> initially it is in the head.

	MINETRAS (pointer != NULL) ---> as long as it does not point to an empty list.
		process element(pointer.element)
		pointer = pointer.next
```

<a name="f"></a>
<h3>inserts items in the list</h3>

depends: 

* the list is empty?

* do we want to add to the top (preppend)?

* do we want to append to the end (append)?

if a list is empty, then it has no node and its first element will be NULL.
in this case it is as simple as creating a new node and making the pointer of the first node point to it. 

```
PROC insert_node(l: list, b: book)
	VARIABLE new_node: node
	new_node.element = b
	new_next_node.next = l.first
	l.first = new_node
```
	
<img width="3952" alt="linked list" src="https://user-images.githubusercontent.com/105575956/202876569-de26ced3-6f3e-4355-90b4-c6a7ba9c542f.png">

<img width="4144" alt="linked list" src="https://user-images.githubusercontent.com/105575956/202876658-21ccec0c-5486-42b5-9c8d-53dbc0401ec3.png">

	
<img width="4144" alt="linked list" src="https://user-images.githubusercontent.com/105575956/202876712-0a3fcf2a-8fc3-436c-9fb3-55c16d0607de.png">

<img width="4768" alt="linked list" src="https://user-images.githubusercontent.com/105575956/202876795-e7956b8b-ec4e-4c32-b70d-89424fd56a4a.png">

<a name="e"></a>
<h3 name="insert elements at the end">insert elements at the end</h3>

* We have to traverse the list until we reach the element that I have no elements, the last node, which has a pointer next to null.

* When it has been reached, we make the last element of the list point to the new node just created.

</details>
<footer>

<h4>Resources:</h4>

<a href="https://github.com/Sapitorico/holbertonschool-low_level_programming/tree/main/structures_typedef" target="blank">Structures, typedef</a>

</footer>
