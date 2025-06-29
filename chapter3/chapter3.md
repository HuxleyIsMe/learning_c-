## Chapter 3 pointers and references

> Pointers are the fundamental mechanism used to refer to memory addresses.Pointers encode both pieces of information required to interact with anotherobject—that is, the object’s address and the object’s type. apend *

>The format specifier for a pointer is %p.  when you printy printy

Ok we are gonna learn how to find things and how to forget ( dereferencing )

To politly ask a c++ variable its address you can use & 
like and sooo where are you in town?

Then you like add a lil star and pointer * in your address book so you remember

> Your output should have an identical value for gettysburg, but gettysburg_address should be different each time. This variation is due to address spacelayout randomization, which is a security feature that scrambles the base address of important memory regions to hamper exploitation.

 An x86 architecture has 32-bit (4-byte)
general-purpose registers, whereas an x64 architecture has 64-bit (8-byte)
general-purpose registers.

Alright dereferencing is you put the star at the begining of the name instead of the type its a lil cryptic but fine like they just made it wierly confusing a - would have worked better i think

### he Member-of-Pointer Operator 
more for classes
The member-of-pointer operator, 
"• It dereferences a pointer.
• It accesses a member of the pointed-to object."

### pointers and arrays

Pointers share several characteristics with arrays. Pointers encode object loca-
tion. Arrays encode the location and length of contiguous objects.
At the slightest provocation, an array will decay into a pointer. A decayed
array loses length information and converts to a pointer to the array’s first
element. For example: (pg 129 +)

Handling Decay
Often, you pass arrays as two arguments:
• A pointer to the first array element
• The array’s length

Pointer Arithmetic
por quoi was ist diese? gleich wirklich! 

Buffer Overflows
For arrays and pointers, you can access arbitrary array elements with the
bracket operator ([]) or with pointer arithmetic. These are very powerful
tools for low-level programming because you can interact with memory
more or less without abstraction. This gives you exquisite control over the
system, which you need in some environments (for example, in system pro-
gramming contexts like implementing network protocols or with embedded
Reference Types   75
controllers). With great power comes great responsibility, however, and you
must be very careful. Simple mistakes with pointers can have catastrophic
and mysterious consequences.

[very useful video on pointers and references](https://www.youtube.com/watch?v=iNlmsLrzGD4)