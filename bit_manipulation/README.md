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
  
  * [ & - operator AND ](#AND)
  
  * [ | - operator OR ](#OR)
  
  * [ ^ - operator XOR ](#XOR)
  
  * [ ~ - operator NOT ](#NOT)
  
  ---
 
  <h3 name="AND">AND (&)</h3>
  This operator is a multiplication operator
example:

```
a = b & c -> where in binary: b = 10101010
                              c = 11001100

10101010 & -> if both bits, which are in the same position are '1' the result will also be '1'.
11001100
--------
10001000
```
  
  ---
  
  
  <h3 name="OR">OR (|)</h3>
  This operator is an addition operator, where any of the bits in the same position is '1', the result will be '1'.
Example:

```
a = b | c -> b = 10101010
             c = 11001100
10101010 |
11001100
--------
11101110
```
  
  ----
  
  <h3 name="XOR">XOR (^)</h3>
  This operator is of an or-exclusivity, where the difference of states in bits of equal position will result in '1', and equality of state will result in '0', it can be understood as ( one or the other, but not both ).
example:

```
a = b ^ c -> b = 10101010
             c = 11001100
10101010 ^
11001100
--------
01100110
```
  
  ----
  
  <h3 name="NOT">NOT (~)</h3>
  This operation only applies to one element, but inverts the bit values of the element involved.
example:

```
a = ~b -> b = 10101010

~10101010
 --------
 01010101
```
</details>

---

<details>
  <summary>
    <h2>shift operators</h2>
  </summary>
  
  ----
  
  <h3>right shift (>>)</h3>
  
 It shifts the bits from left to right (from the most significant bit to the least significant bit), a defined number of times, the least significant bit is lost at each shift, while the most significant bit is filled with a '0'.

Example:

```
a = b >> 3 -> b = 10101010

10101010 >> 3 -> 3 shifts to the right are made, so that 'a' is left with the value of 0001010101
--------
00010101
```
  
This operation can be seen as each displacement is divided by 2, so that in our example, we divide 3 times by 2, and in total we divide by 8.
  
  ---
  
  <h3>right shift</h3>

  It is an operator similar to the previous one, here at each shift, the most significant bit is lost and the least significant bit is filled with '0'.

example:

```
a = b << 3 -> with the previous result.

00010101 << 3
-------
10101000
```
  
It can be understood as a multiplication by 2, for each displacement.
  </details>
