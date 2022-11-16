<div><h1>C - Singly linked lists</h1>
<p>
It is a data structure, which links each node to the next. It can be used in the following case.
</p>

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

* Each node has a pointer to the next element, to access a specific one we must go through the previous ones.

```

</details>
