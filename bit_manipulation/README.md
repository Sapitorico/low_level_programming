<div id="header" align="center">
<h1>C - Bit manipulation</h1>
<p>Bit manipulation is the act of algorithmically manipulating bit-by-bit or other data shorter than a byte.</p>

<p>It is common in programs with microprocessors, as the allows us to configure registers and data compression (data is compressed by converting it from one representation to another, to reduce space), to use the included hardware, to access input and output ports, to make fast calculations, bit-level operations are faster and closer to the system and sometimes optimize the program to a good level, to verify the authenticity of sent and received data, etc.</p>

<p>We all know that 1 byte consists of 8 bits and that any integer or character can be represented by bits in computers, what we call its binary form (contains only 1 or 0) or in its base 2 form.</p>

<img width="500" src="https://cdn-media-1.freecodecamp.org/images/1*GtkdWOFKMEGrzvYzsK9pZg.gif">
</div>

---

<details>
  <summary>
    <h2>bit-by-bit operators</h2>
  </summary>
  
  * [ & - operator AND ](#AND)
  
  * [ | - operator OR ](#OR)
  
  * [ ~ - operator MOT ](#MOT)
  
  * [ ^ - operator XOR ](#xor)
 
  <h3 name="AND">AND (&)</h3>
  This operator is a multiplication operator
example:

```
a = b & c -> where in binary: b = 10101010
                              c = 11001100

10101010 & -> if both bits, which are in the same position are '1' the result will also be '1'.
11001100
-----------
10001000
```
  
</details>
