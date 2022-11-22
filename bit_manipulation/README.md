<div id="header" align="center">
<h1>C - Bit manipulation</h1>
<p>Bit manipulation is the act of algorithmically manipulating bit-by-bit or other data shorter than a byte.</p>

<p>It is common in programs with microprocessors, as the allows us to configure registers and data compression (data is compressed by converting it from one representation to another, to reduce space), to use the included hardware, to access input and output ports, to make fast calculations, bit-level operations are faster and closer to the system and sometimes optimize the program to a good level, to verify the authenticity of sent and received data, etc.</p>

<p>We all know that 1 byte consists of 8 bits and that any integer or character can be represented by bits in computers, what we call its binary form (contains only 1 or 0) or in its base 2 form.</p>

<img width="500" src="https://cdn-media-1.freecodecamp.org/images/1*GtkdWOFKMEGrzvYzsK9pZg.gif">
</div>

Example:}

```
1) 14 = {1110 }2
= 1 * 23 + 1 * 22 + 1 * 21 + 0 * 20
= 14.

2) 20 = {10100 }2
= 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 0 * 20
= 20.
```

---

<details>
  <summary>
    <h2>Bitwise Operators</h2>
  </summary>
  
  There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:
  
  * [ & - operator AND ](#AND)
  
  * [ | - operator OR ](#OR)
  
  * [ ^ - operator XOR ](#XOR)
  
  * [ ~ - operator NOT ](#NOT)
  
  ---
 
  <h3 name="AND">AND (&)</h3>
  A binary operator that operates on two bit patterns of equal length. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.
example:

```
a = b & c -> where in binary: b = 10101010
                              c = 11001100

10101010 & -> if both bits, which are in the same position are '1' the result will also be '1'.
11001100
--------
10001000
```
  
  ```
  A = 5 = (101)2 , B = 3 = (011)2 A & B = (101)2 & (011)2= (001)2 = 1
  ```
  
  ---
  
  
  <h3 name="OR">OR (|)</h3>
  Also a binary operator that operates on two bit patterns of equal length, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit of the resulting bit pattern is 0, otherwise 1.
Example:

```
a = b | c -> b = 10101010
             c = 11001100
10101010 |
11001100
--------
11101110
```
  
  ```
  A = 5 = (101)2 , B = 3 = (011)2
  A | B = (101)2 | (011)2 = (111)2 = 7
  ```
  
  ----
  
  <h3 name="XOR">XOR (^)</h3>
  It also takes two bit patterns of equal length, it is of type or-exclusive. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1, it can be understood as ( one or the other, but not both ).

example:

```
a = b ^ c -> b = 10101010
             c = 11001100
10101010 ^
11001100
--------
01100110
```
  
  ```
  A = 5 = (101)2 , B = 3 = (011)2
  A ^ B = (101)2 ^ (011)2 = (110)2 = 6
  ```
  
  ----
  
  <h3 name="NOT">NOT (~)</h3>
  It is a unary operator that inverts the bits of the number, this operation only applies to one element, but it inverts the bit values of the element in question.
example:

```
a = ~b -> b = 10101010

~10101010
 --------
 01010101
```
  NOT is nothing more than the complement of a number. Let's take an example.

```
N = 5 = (101)2
~N = ~5 = ~(101)2 = (010)2 = 2
```
</details>

---

<details>
  <summary>
    <h2>shift operators</h2>
  </summary>
  
  ----
  
  <h3>Right shift ( >> )</h3>
  
The right shift operator is a binary operator that shifts a certain number of bits, in the given bit pattern, to the right and adds a 1 at the end. Shifting to the right is equivalent to dividing the bit pattern with 2^k ( if we are shifting k bits ).
  
Example:

```
a = b >> 3 -> b = 10101010

10101010 >> 3 -> 3 shifts to the right are made, so that 'a' is left with the value of 0001010101
--------
00010101
```
  
  ```
  4 >> 1 = 2
  6 >> 1 = 3
  5 >> 1 = 2
  16 >> 4 = 1
  ```
  
This operation can be seen as each displacement is divided by 2, so that in our example, we divide 3 times by 2, and in total we divide by 8.
  
  ---
  
  <h3>Left shift ( << )</h3>

 The left shift operator is a binary operator that shifts a given number of bits, in the given bit pattern, to the left and adds a 0 to the end. Shifting left is equivalent to multiplying the bit pattern by 2^k ( if we are shifting k bits ).

example:

```
a = b << 3 -> with the previous result.

00010101 << 3
-------
10101000
```
  
  ```
  1 << 1 = 2 = 21
  1 << 2 = 4 = 22 1 << 3 = 8 = 23
  1 << 4 = 16 = 24
  …
  1 << n = 2n
  ```
  
It can be understood as a multiplication by 2, for each displacement.
  </details>
