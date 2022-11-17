<div><h1>C - Singly linked lists</h1>

<p>It is a data structure, which links each node to the next. It can be used in the following case.</p>

* When you need a constant time for insertion and deletion.

* When the data grows dynamically

* Do not access random elements of the linked list.

* Insert the element at any position

Allows to represent a group of elements represented as a sequence. 
<div>

---


<details>
<summary><h2>characteristics </h2></summary>

```
		tail
	______________________
 --- 	 ---     ---     ---     ---
|   |---|   |---|   |---|   |---|   |---> end node with a NULL pointer
 ---     ---     ---     ---     ---
  |
  v
main node, called head "the first element of the list".

Each node has a pointer to the next element, to access a specific one we must go through the previous ones.

```

<h3>advantages compared to an array</h3>

* Nodes do not have to be stored all together in memory, what matters is that they are pointing to the next node in memory.

* They can have variable length, we can add or remove them.

* We can add and remove elements at run time. 
<h3>disadvantages</h3>

* They have no notion of index, because what we cannot do is to randomly access a node.

* They need more space in memory because they have to store a pointer. 

</details>

---


<details>
<summary><h2>Functioning</h2></summary>

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
 ---     ---     ---     ---
|   |---|   |---|   |---|   |
 ---     ---     ---     ---
  |
  v
head pointer


new node
  ^
  |
 ---     ---     ---     ---     ---
|   |   |   |---|   |---|   |---|   |
 ---     ---     ---     ---     ---
          |
	  v
	head pointer

new node
  ^
  |
 ---     ---     ---     ---
|   |---|   |---|   |---|   |---|   |
 ---     ---     ---     ---     ---
          |
          v
       head pointer

new node
  ^
  |        
 ---     ---     ---     ---     ---
|   |---|   |---|   |---|   |---|   |
 ---     ---     ---     ---     ---
  |
  v
head pointer
```

<a name="e"></a>
<h3 name="insert elements at the end">insert elements at the end</h3>

* We have to traverse the list until we reach the element that I have no elements, the last node, which has a pointer next to null.

* When it has been reached, we make the last element of the list point to the new node just created.

</details>
